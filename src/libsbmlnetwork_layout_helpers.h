#ifndef __LIBSBMLNETWORK_LAYOUT_HELPERS_H_
#define __LIBSBMLNETWORK_LAYOUT_HELPERS_H_

#ifndef SWIG
#include "sbml/SBMLTypes.h"
#include "sbml/packages/layout/common/LayoutExtensionTypes.h"
#endif

#include <set>

using namespace libsbml;

namespace LIBSBMLNETWORK_CPP_NAMESPACE  {

LayoutModelPlugin* getLayoutModelPlugin(SBMLDocument* document);

LayoutModelPlugin* enableAndGetLayoutModelPlugin(SBMLDocument* document);

SBasePlugin* getLayoutPlugin(SBMLDocument* document);

LayoutModelPlugin* getLayoutModelPlugin(SBasePlugin* layoutBase);

void enableLayoutPlugin(SBMLDocument* document);

void freeUserData(SBMLDocument* document);

void freeUserData(Layout* layout);

void freeUserData(SBase* sbase);

std::vector<std::map<std::string, std::string>> getUserData(Layout* layout);

const std::string getUserData(SBase* sbase, const std::string& key);

void setUserData(SBase* sBase, const std::string& key, const std::string& value);

void setDefaultLayoutId(Layout* layout);

const std::string getDefaultLayoutId();

void setDefaultLayoutDimensions(Layout* layout);

const double getSpeciesDefaultWidth();

const double getSpeciesDefaultHeight();

const double getReactionDefaultWidth();

const double getReactionDefaultHeight();

void lockGraphicalObjects(Layout* layout, std::set<std::pair<std::string, int> > lockedNodesSet, const bool resetLockedNodes);

void lockSpeciesGlyphs(Layout* layout, std::set<std::pair<std::string, int> > lockedNodesSet, const bool resetLockedNodes);

void lockReactionGlyphs(Layout* layout, std::set<std::pair<std::string, int> > lockedNodesSet, const bool resetLockedNodes);

void lockGraphicalObject(GraphicalObject* graphicalObject);

void unlockGraphicalObject(GraphicalObject* graphicalObject);

std::vector<GraphicalObject*> getLockedGraphicalObjects(std::vector<GraphicalObject*> graphicalObjects);

void fixGraphicalObjectWidth(GraphicalObject* graphicalObject);

void fixGraphicalObjectHeight(GraphicalObject* graphicalObject);

void clearGraphicalObjects(Layout* layout);

void clearCompartmentGlyphs(Layout* layout);

void clearSpeciesGlyphs(Layout* layout);

void clearReactionGlyphs(Layout* layout);

void clearReactionGlyphSpeciesReferenceGlyphs(ReactionGlyph* reactionGlyph);

void setCompartmentGlyphs(Model* model, Layout* layout, const std::vector<std::map<std::string, std::string>>& userData = {});

void setSpeciesGlyphs(Model* model, Layout* layout, const std::vector<std::map<std::string, std::string>>& userData = {});

void setReactionGlyphs(Model* model, Layout* layout, const std::vector<std::map<std::string, std::string>>& userData = {});

void setReactionGlyphCurve(ReactionGlyph* reactionGlyph);

void setReactantGlyphs(Layout* layout, Reaction* reaction, ReactionGlyph* reactionGlyph);

void setProductGlyphs(Layout* layout, Reaction* reaction, ReactionGlyph* reactionGlyph);

void setModifierGlyphs(Layout* layout, Reaction* reaction, ReactionGlyph* reactionGlyph);

void setDummySpeciesReferenceGlyphs(Model* model, Layout* layout, ReactionGlyph* reactionGlyph);

SpeciesReferenceGlyph* createDummySpeciesReferenceGlyph(Model* model, Layout* layout, ReactionGlyph* reactionGlyph);

SpeciesGlyph* createDummySpeciesGlyph(Model* model, Layout* layout, ReactionGlyph* reactionGlyph);

SpeciesGlyph* createDummySpeciesGlyph(ReactionGlyph* reactionGlyph);

SpeciesReferenceGlyph* createDummySpeciesReferenceGlyph(Layout* layout, ReactionGlyph* reactionGlyph, SpeciesGlyph* dummySpeciesGlyph);

void setAliasSpeciesGlyphs(Layout* layout, const int maxNumConnectedEdges, const std::vector<std::map<std::string, std::string>>& userData = {});

std::vector<SpeciesReferenceGlyph*> getConnectedSpeciesGlyphReferences(Layout* layout, SpeciesGlyph* speciesGlyph);

int getNumRequiredAliasSpeciesGlyphs(const int numConnectedEdges, const int maxNumConnectedEdges);

void createAliasSpeciesGlyphs(Layout* layout, SpeciesGlyph* speciesGlyph, std::vector<SpeciesReferenceGlyph*> speciesGlyphReferences, const int maxNumConnectedEdges, const int numRequiredAliasSpeciesGlyphs, const std::vector<std::map<std::string, std::string>>& userData = {});

void setTextGlyphs(Layout* layout);

void clearTextGlyphs(Layout* layout);

void clearReactionTextGlyphs(Layout* layout);

void setCompartmentTextGlyphs(Layout* layout);

void setSpeciesTextGlyphs(Layout* layout);

void setReactionTextGlyphs(Layout* layout);

CompartmentGlyph* createCompartmentGlyph(Layout* layout, Compartment* compartment);

SpeciesGlyph* createSpeciesGlyph(Layout* layout, Species* species);

ReactionGlyph* createReactionGlyph(Layout* layout, Reaction* reaction);

CompartmentGlyph* getCompartmentGlyphOfReactionGlyph(Model* model, Layout* layout, ReactionGlyph* reactionGlyph);

CompartmentGlyph* getDefaultCompartmentGlyph(Layout* layout);

SpeciesReferenceGlyph* createAssociatedSpeciesReferenceGlyph(Layout* layout, Reaction* reaction, ReactionGlyph* reactionGlyph, SimpleSpeciesReference* speciesReference, const unsigned int stoichiometryIndex = 0);

const int getNumSpeciesReferencesAssociatedWithSpecies(Reaction* reaction, const std::string& speciesId);

const int getNumSpeciesReferencesGlyphsAssociatedWithSpecies(Layout* layout, ReactionGlyph* reactionGlyph, const std::string& speciesId);

TextGlyph* createAssociatedTextGlyph(Layout* layout, GraphicalObject* graphicalObject);

void setGraphicalObjectUserData(GraphicalObject* graphicalObject, const std::vector<std::map<std::string, std::string>>& userData);

void setGraphicalObjectBoundingBox(GraphicalObject* graphicalObject);

void setTextGlyphBoundingBox(TextGlyph* textGlyph, GraphicalObject* graphicalObject, const double& padding = 0.0);

void removeReactionGlyphCurve(ReactionGlyph* reactionGlyph);

void setSpeciesReferenceGlyphCurve(SpeciesReferenceGlyph* speciesReferenceGlyph);

void setCurveCubicBezier(Curve* curve);

Compartment* findCompartmentGlyphCompartment(Model* model, CompartmentGlyph* compartmentGlyph);

Compartment* findSpeciesGlyphCompartment(Model* model, SpeciesGlyph* speciesGlyph);

Species* findSpeciesGlyphSpecies(Model* model, SpeciesGlyph* speciesGlyph);

Compartment* findReactionGlyphCompartment(Model* model, ReactionGlyph* reactionGlyph);

Reaction* findReactionGlyphReaction(Model* model, ReactionGlyph* reactionGlyph);

bool containsSpecies(Model* model, Layout* layout, CompartmentGlyph* compartmentGlyph);

bool compartmentGlyphBelongs(CompartmentGlyph* compartmentGlyph, Compartment* compartment);

bool speciesGlyphBelongs(SpeciesGlyph* speciesGlyph, Species* species);

bool reactionGlyphBelongs(ReactionGlyph* reactionGlyph, Reaction* reaction);

const std::string getSpeciesReferenceGlyphSpeciesId(Layout* layout, SpeciesReferenceGlyph* speciesReferenceGlyph);

bool textGlyphBelongs(TextGlyph* textGlyph, GraphicalObject* graphicalObject);

bool graphicalObjectBelongsToReactionGlyph(Layout* layout, ReactionGlyph* reactionGlyph, GraphicalObject* graphicalObject);

std::vector<TextGlyph*> getAssociatedTextGlyphsWithGraphicalObject(Layout* layout, GraphicalObject* graphicalObject);

GraphicalObject* getGraphicalObjectUsingItsOwnId(Layout* layout, const std::string& graphicalObjectId);

const std::string getEntityId(GraphicalObject* graphicalObject);

std::vector<CompartmentGlyph*> getCompartmentGlyphs(Layout* layout);

std::vector<CompartmentGlyph*> getAssociatedCompartmentGlyphsWithCompartmentId(Layout* layout, const std::string& compartmentId);

std::vector<SpeciesGlyph*> getSpeciesGlyphs(Layout* layout);

std::vector<SpeciesGlyph*> getAssociatedSpeciesGlyphsWithSpeciesId(Layout* layout, const std::string& speciesId);

std::vector<ReactionGlyph*> getReactionGlyphs(Layout* layout);

std::vector<ReactionGlyph*> getAssociatedReactionGlyphsWithReactionId(Layout* layout, const std::string& reactionId);

std::vector<SpeciesReferenceGlyph*> getSpeciesReferenceGlyphs(ReactionGlyph* reactionGlyph);

std::vector<SpeciesReferenceGlyph*> getAssociatedSpeciesReferenceGlyphsWithReactionGlyph(ReactionGlyph* reactionGlyph);

const std::string getTextGlyphUniqueId(Layout* layout, GraphicalObject* graphicalObject);

const bool layoutContainsGlyphs(Layout* layout);

const int getStoichiometryAsInteger(SimpleSpeciesReference* speciesReference);

void updateAssociatedTextGlyphsPositionX(Layout* layout, GraphicalObject* graphicalObject, const double& movedDistanceX);

void updateAssociatedTextGlyphsPositionY(Layout* layout, GraphicalObject* graphicalObject, const double& movedDistanceY);

void updateAssociatedTextGlyphsPosition(Layout* layout, GraphicalObject* graphicalObject, const double& movedDistanceX, const double& movedDistanceY);

void updateAssociatedTextGlyphsPosition(Layout* layout, GraphicalObject* graphicalObject, const double& movedDistanceX, const double& movedDistanceY);

void updateAssociatedTextGlyphsDimensionWidth(Layout* layout, GraphicalObject* graphicalObject, const double& changedWidth);

void updateAssociatedTextGlyphsDimensionHeight(Layout* layout, GraphicalObject* graphicalObject, const double& changedHeight);

const double getCurveMiddlePositionX(Curve* curve);

const double getCurveMiddlePositionY(Curve* curve);

int setCurveMiddlePositionX(Curve* curve, const double& x);

int setCurveMiddlePositionY(Curve* curve, const double& y);

void alignGraphicalObjects(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const std::string& alignment, const bool ignoreLockedNodes);

void alignGraphicalObjectsToTop(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

const double getTopAlignmentPosition(std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

void alignGraphicalObjectsToVerticalCenter(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

const double getVerticalCenterAlignmentPosition(std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

void alignGraphicalObjectsToBottom(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

const double getBottomAlignmentPosition(std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

void alignGraphicalObjectsToLeft(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

const double getLeftAlignmentPosition(std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

void alignGraphicalObjectsToHorizontalCenter(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

const double getHorizontalCenterAlignmentPosition(std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

void alignGraphicalObjectsToRight(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

const double getRightAlignmentPosition(std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

void alignGraphicalObjectsCircularly(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const bool ignoreLockedNodes);

void distributeGraphicalObjects(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const std::string& direction, const double& spacing);

void distributeGraphicalObjectsHorizontally(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const double& spacing);

void distributeEvenGraphicalObjectsHorizontally(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const double& minX, const double& maxX, const double& distance);

void distributeOddGraphicalObjectsHorizontally(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const double& minX, const double& maxX, const double& distance);

void distributeGraphicalObjectsVertically(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const double& spacing);

void distributeEvenGraphicalObjectsVertically(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const double& minY, const double& maxY, const double& distance);

void distributeOddGraphicalObjectsVertically(Layout* layout, std::vector<GraphicalObject*> graphicalObjects, const double& minY, const double& maxY, const double& distance);

const double findDistributionDistance(const double& minPosition, const double& maxPosition, const unsigned int& numGraphicalObjects, const double& spacing);

std::vector<std::string> getSortedNodeIdsVector(std::set <std::pair<std::string, unsigned int>> nodeIds);

const double getMinPositionX(std::vector<GraphicalObject*> graphicalObjects);

const double getMinPositionY(std::vector<GraphicalObject*> graphicalObjects);

const double getMaxPositionX(std::vector<GraphicalObject*> graphicalObjects);

const double getMaxPositionY(std::vector<GraphicalObject*> graphicalObjects);

const double getMinCenterX(std::vector<GraphicalObject*> graphicalObjects);

const double getMinCenterY(std::vector<GraphicalObject*> graphicalObjects);

const double getMaxCenterX(std::vector<GraphicalObject*> graphicalObjects);

const double getMaxCenterY(std::vector<GraphicalObject*> graphicalObjects);

const double getDefaultAutoLayoutPadding();

const bool isValidLayoutDimensionWidthValue(const double& width);

const bool isValidLayoutDimensionHeightValue(const double& height);

const bool isValidRoleValue(const std::string& role);

const bool isValidBoundingBoxXValue(const double& x);

const bool isValidBoundingBoxYValue(const double& y);

const bool isValidBoundingBoxWidthValue(const double& width);

const bool isValidBoundingBoxHeightValue(const double& height);

const bool isValidCurveSegmentStartPointXValue(const double& x);

const bool isValidCurveSegmentStartPointYValue(const double& y);

const bool isValidCurveSegmentEndPointXValue(const double& x);

const bool isValidCurveSegmentEndPointYValue(const double& y);

const bool isValidCurveSegmentBasePoint1XValue(const double& x);

const bool isValidCurveSegmentBasePoint1YValue(const double& y);

const bool isValidCurveSegmentBasePoint2XValue(const double& x);

const bool isValidCurveSegmentBasePoint2YValue(const double& y);

const bool isValidDimensionValue(const double& dimensionValue);

const bool isValidDoubleValue(const double& doubleValue);

const bool isValidAlignment(const std::string& alignment);

const bool isValidDistributionDirection(const std::string& direction);

std::vector<std::string> getValidRoleValues();

std::vector<std::string> getValidAlignmentValues();

std::vector<std::string> getValidDistributionDirectionValues();

}

#endif

