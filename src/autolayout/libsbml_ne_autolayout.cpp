#include "libsbml_ne_autolayout.h"
#include "../libsbml_ne_layout_helpers.h"
#include "libsbml_ne_fruchterman_reingold_algorithm.h"

#include <cstdlib>
#include <cmath>

namespace LIBSBML_NETWORKEDITOR_CPP_NAMESPACE {

void locateGlyphs(Model *model, Layout *layout, const double& stiffness, const double& gravity, const bool& useMagnetism, const bool& useBoundary, const bool& useGrid) {
    double padding = 30.0;
    randomizeGlyphsLocations(model, layout, padding);
    setGlyphsDimensions(model, layout);
    applyAutolayout(model, layout, stiffness, gravity, useMagnetism, useBoundary, useGrid);
    updateCompartmentExtents(model, layout, padding);
}

void randomizeGlyphsLocations(Model *model, Layout *layout, const double &padding) {
    double canvasWidth = 400.0;
    double canvasHeight = 400.0;
    randomizeSpeciesGlyphsLocations(model, layout, canvasWidth, canvasHeight, padding);
    randomizeReactionGlyphsLocations(model, layout, canvasWidth, canvasHeight, padding);
}

void
randomizeSpeciesGlyphsLocations(Model *model, Layout *layout, const double &canvasWidth, const double &canvasHeight,
                                const double &padding) {
    for (int i = 0; i < layout->getNumSpeciesGlyphs(); i++)
        randomizeBoundingBoxesPosition(layout->getSpeciesGlyph(i)->getBoundingBox(), canvasWidth, canvasHeight);
}

void randomizeReactionGlyphsLocations(Model *model, Layout *layout, const double &canvasWidth,
                                      const double &canvasHeight, const double &padding) {
    for (int i = 0; i < layout->getNumReactionGlyphs(); i++)
        randomizeCurveCenterPoint(layout->getReactionGlyph(i)->getCurve(), canvasWidth, canvasHeight);
}

void randomizeBoundingBoxesPosition(BoundingBox *boundingBox, const double &canvasWidth, const double &canvasHeight) {
    double offset = 30.0;
    double defaultBoundingBoxWidth = 60.0;
    double defaultBoundingBoxHeight = 36.0;
    boundingBox->setX(offset + (std::rand() % int(canvasWidth - offset)));
    boundingBox->setY(offset + (std::rand() % int(canvasHeight - offset)));
    boundingBox->setWidth(defaultBoundingBoxWidth);
    boundingBox->setHeight(defaultBoundingBoxHeight);
}

void randomizeCurveCenterPoint(Curve *curve, const double &canvasWidth, const double &canvasHeight) {
    double offset = 30.0;
    double randomPointX = offset + (std::rand() % int(canvasWidth - offset));
    double randomPointY = offset + (std::rand() % int(canvasHeight - offset));
    CubicBezier *cubicBezier = ((CubicBezier *) curve->getCurveSegment(0));
    cubicBezier->getStart()->setX(randomPointX);
    cubicBezier->getStart()->setY(randomPointY);
    cubicBezier->getEnd()->setX(randomPointX);
    cubicBezier->getEnd()->setY(randomPointY);
    cubicBezier->getBasePoint1()->setX(randomPointX);
    cubicBezier->getBasePoint1()->setY(randomPointY);
    cubicBezier->getBasePoint2()->setX(randomPointX);
    cubicBezier->getBasePoint2()->setY(randomPointY);
}

void setGlyphsDimensions(Model *model, Layout *layout) {
    for (int i = 0; i < layout->getNumSpeciesGlyphs(); i++)
        setSpeciesGlyphDimensions(model,layout->getSpeciesGlyph(i));
}

void setSpeciesGlyphDimensions(Model *model, SpeciesGlyph* speciesGlyph) {
    double speciesWidth = calculateSpeciesGlyphDefaultWidth(model, speciesGlyph);
    double speciesHeight = calculateSpeciesGlyphDefaultHeight(speciesGlyph, speciesWidth);
    speciesGlyph->getBoundingBox()->setWidth(speciesWidth);
    speciesGlyph->getBoundingBox()->setHeight(speciesHeight);
}

const double calculateSpeciesGlyphDefaultWidth(Model *model, SpeciesGlyph* speciesGlyph) {
    std::string displayedText = speciesGlyph->getSpeciesId();
    Species* species = findSpeciesGlyphSpecies(model, speciesGlyph);
    if (species && species->isSetName())
        displayedText =  species->getName();

    return std::max(60.0, displayedText.size() * 15.0);
}

const double calculateSpeciesGlyphDefaultHeight(SpeciesGlyph* speciesGlyph, const double& speciesWidth) {
    const double dimensionRatio = 36.0 / 60.0;
    return std::min(std::max(36.0, dimensionRatio * speciesWidth), 72.0);
}

void applyAutolayout(Model *model, Layout *layout, const double& stiffness, const double& gravity, const bool& useMagnetism, const bool& useBoundary, const bool& useGrid) {
    FruthtermanReingoldAlgorithm * fruthtermanReingoldAlgorithm = new FruthtermanReingoldAlgorithm();
    fruthtermanReingoldAlgorithm->setElements(layout);
    fruthtermanReingoldAlgorithm->setStiffness(stiffness);
    fruthtermanReingoldAlgorithm->setGravity(gravity);
    fruthtermanReingoldAlgorithm->setUseMagnetism(useMagnetism);
    fruthtermanReingoldAlgorithm->setUseBoundary(useBoundary);
    fruthtermanReingoldAlgorithm->setUseGrid(useGrid);
    fruthtermanReingoldAlgorithm->apply();
}

void
initializeCompartmentGlyphExtents(BoundingBox *compartmentGlyphBoundingBox, BoundingBox *speciesGlyphBoundingBox,
                                  const double &padding) {
    compartmentGlyphBoundingBox->setX(speciesGlyphBoundingBox->x() - padding);
    compartmentGlyphBoundingBox->setY(speciesGlyphBoundingBox->y() - padding);
    compartmentGlyphBoundingBox->setWidth(speciesGlyphBoundingBox->width() + 2 * padding);
    compartmentGlyphBoundingBox->setHeight(speciesGlyphBoundingBox->height() + 2 * padding);
}

void updateCompartmentExtents(Model *model, Layout *layout, const double &padding) {
    for (int i = 0; i < layout->getNumSpeciesGlyphs(); i++) {
        Compartment *compartment = findSpeciesGlyphCompartment(model, layout->getSpeciesGlyph(i));
        if (compartment && getCompartmentGlyph(layout, compartment)) {
            if (i == 0)
                initializeCompartmentGlyphExtents(getCompartmentGlyph(layout, compartment)->getBoundingBox(),
                                                  layout->getSpeciesGlyph(i)->getBoundingBox(), padding);
            updateCompartmentExtents(getCompartmentGlyph(layout, compartment)->getBoundingBox(),
                                     layout->getSpeciesGlyph(i)->getBoundingBox(), padding);
        }
    }
    for (int i = 0; i < layout->getNumReactionGlyphs(); i++) {
        Compartment *compartment = findReactionGlyphCompartment(model, layout->getReactionGlyph(i));
        if (compartment && getCompartmentGlyph(layout, compartment))
            updateCompartmentExtents(getCompartmentGlyph(layout, compartment)->getBoundingBox(),
                                     layout->getReactionGlyph(i)->getCurve(), padding);
    }
}

void updateCompartmentExtents(BoundingBox *compartmentGlyphBoundingBox, BoundingBox *speciesGlyphBoundingBox,
                              const double &padding) {
    if (speciesGlyphBoundingBox->x() - padding < compartmentGlyphBoundingBox->x()) {
        compartmentGlyphBoundingBox->setWidth(compartmentGlyphBoundingBox->width() +
                                              (compartmentGlyphBoundingBox->x() -
                                               (speciesGlyphBoundingBox->x() - padding)));
        compartmentGlyphBoundingBox->setX(speciesGlyphBoundingBox->x() - padding);
    }
    if (speciesGlyphBoundingBox->y() - padding < compartmentGlyphBoundingBox->y()) {
        compartmentGlyphBoundingBox->setHeight(compartmentGlyphBoundingBox->height() +
                                               (compartmentGlyphBoundingBox->y() -
                                                (speciesGlyphBoundingBox->y() - padding)));
        compartmentGlyphBoundingBox->setY(speciesGlyphBoundingBox->y() - padding);
    }
    if (speciesGlyphBoundingBox->x() + speciesGlyphBoundingBox->width() + padding >
        compartmentGlyphBoundingBox->x() + compartmentGlyphBoundingBox->width()) {
        compartmentGlyphBoundingBox->setWidth(compartmentGlyphBoundingBox->width()
                                              + (speciesGlyphBoundingBox->x() + speciesGlyphBoundingBox->width() +
                                                 padding)
                                              - (compartmentGlyphBoundingBox->x() +
                                                 compartmentGlyphBoundingBox->width()));
    }
    if (speciesGlyphBoundingBox->y() + speciesGlyphBoundingBox->height() + padding >
        compartmentGlyphBoundingBox->y() + compartmentGlyphBoundingBox->height()) {
        compartmentGlyphBoundingBox->setHeight(compartmentGlyphBoundingBox->height()
                                               +
                                               (speciesGlyphBoundingBox->y() + speciesGlyphBoundingBox->height() +
                                                padding)
                                               - (compartmentGlyphBoundingBox->y() +
                                                  compartmentGlyphBoundingBox->height()));
    }
}

void
updateCompartmentExtents(BoundingBox *compartmentGlyphBoundingBox, Curve *reactionCurve, const double &padding) {
    Point reactionCenter = Point(0.5 * (reactionCurve->getCurveSegment(0)->getStart()->x() +
                                        reactionCurve->getCurveSegment(0)->getEnd()->x()),
                                 0.5 * (reactionCurve->getCurveSegment(0)->getStart()->y() +
                                        reactionCurve->getCurveSegment(0)->getEnd()->y()));
    if (reactionCenter.x() - padding < compartmentGlyphBoundingBox->x()) {
        compartmentGlyphBoundingBox->setWidth(compartmentGlyphBoundingBox->width() +
                                              (compartmentGlyphBoundingBox->x() - (reactionCenter.x() - padding)));
        compartmentGlyphBoundingBox->setX(reactionCenter.x() - padding);
    }
    if (reactionCenter.y() - padding < compartmentGlyphBoundingBox->y()) {
        compartmentGlyphBoundingBox->setWidth(compartmentGlyphBoundingBox->height() +
                                              (compartmentGlyphBoundingBox->y() - (reactionCenter.y() - padding)));
        compartmentGlyphBoundingBox->setY(reactionCenter.y() - padding);
    }
}

}