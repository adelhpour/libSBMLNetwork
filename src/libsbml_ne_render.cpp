#include "libsbml_ne_render.h"
#include "libsbml_ne_layout_helpers.h"
#include "libsbml_ne_render_helpers.h"

namespace LIBSBML_NETWORKEDITOR_CPP_NAMESPACE  {

ListOfGlobalRenderInformation* getListOfGlobalRenderInformation(SBMLDocument* document) {
    if (document) {
        SBasePlugin* renderBase = getRenderPlugin(document);
        if (renderBase) {
            RenderListOfLayoutsPlugin* renderListOfLayoutsPlugin = getRenderListOfLayoutsPlugin(renderBase);
            if (renderListOfLayoutsPlugin)
                return renderListOfLayoutsPlugin->getListOfGlobalRenderInformation();
        }
    }
    
    return NULL;
}

ListOfLocalRenderInformation* getListOfLocalRenderInformation(Layout* layout) {
    if (layout) {
        SBasePlugin* renderBase = getRenderPlugin(layout);
        if (renderBase) {
            RenderLayoutPlugin* renderLayoutPlugin = getRenderLayoutPlugin(renderBase);
            if (renderLayoutPlugin)
                return renderLayoutPlugin->getListOfLocalRenderInformation();
        }
    }
    
    return NULL;
}

int addGlobalRender(SBMLDocument* document, GlobalRenderInformation* globalRednderInformation) {
    if (globalRednderInformation) {
        ListOfGlobalRenderInformation* listOfGlobalRenderInformation = getListOfGlobalRenderInformation(document);
        if (listOfGlobalRenderInformation) {
            listOfGlobalRenderInformation->addGlobalRenderInformation(globalRednderInformation);
            return 0;
        }
    }
    
    return -1;
}

int addLocalRender(Layout* layout, LocalRenderInformation* localRednderInformation) {
    if (localRednderInformation) {
        ListOfLocalRenderInformation* listOfLocalRenderInformation = getListOfLocalRenderInformation(layout);
        if (listOfLocalRenderInformation) {
            listOfLocalRenderInformation->addLocalRenderInformation(localRednderInformation);
            return 0;
        }
    }
    
    return -1;
}

GlobalRenderInformation* createGlobalRender(SBMLDocument* document) {
    ListOfGlobalRenderInformation* listOfGlobalRenderInformation = getListOfGlobalRenderInformation(document);
    if (listOfGlobalRenderInformation)
        return listOfGlobalRenderInformation->createGlobalRenderInformation();
    
    return NULL;
}

LocalRenderInformation* createLocalRender(Layout* layout) {
    ListOfLocalRenderInformation* listOfLocalRenderInformation = getListOfLocalRenderInformation(layout);
    if (listOfLocalRenderInformation)
        return listOfLocalRenderInformation->createLocalRenderInformation();
    
    return NULL;
}

int removeGlobalRenders(SBMLDocument* document) {
    ListOfGlobalRenderInformation* listOfGlobalRenderInformation = getListOfGlobalRenderInformation(document);
    if (listOfGlobalRenderInformation) {
        while(listOfGlobalRenderInformation->size())
            listOfGlobalRenderInformation->remove(0);
        return 0;
    }
        
    return -1;
}

int removeLocalRenders(Layout* layout) {
    ListOfLocalRenderInformation* listOfLocalRenderInformation = getListOfLocalRenderInformation(layout);
    if (listOfLocalRenderInformation) {
        while(listOfLocalRenderInformation->size())
            listOfLocalRenderInformation->remove(0);
        return 0;
    }
        
    return -1;
}

int setDefaultGlobalRenderFeatures(SBMLDocument* document, GlobalRenderInformation* globalRednderInformation) {
    if (document && globalRednderInformation) {
        LayoutPkgNamespaces* layoutPkgNamespaces = new LayoutPkgNamespaces(document->getLevel(), document->getVersion());
        RenderPkgNamespaces* renderPkgNamespaces = new RenderPkgNamespaces(document->getLevel(), document->getVersion());
        globalRednderInformation->setId("libSBML_NetworkEditor_Global_Render");
        globalRednderInformation->setBackgroundColor("lightgray");
        addDefaultColors(globalRednderInformation, renderPkgNamespaces);
        addDefaultLineEndings(globalRednderInformation, layoutPkgNamespaces, renderPkgNamespaces);
        return 0;
    }
    
    return -1;
}

int setDefaultLocalRenderFeatures(SBMLDocument* document, Layout* layout, LocalRenderInformation* localRednderInformation) {
    if (document && localRednderInformation) {
        RenderPkgNamespaces* renderPkgNamespaces = new RenderPkgNamespaces(document->getLevel(), document->getVersion());
        localRednderInformation->setId("libSBML_NetworkEditor_Local_Render");
        localRednderInformation->setReferenceRenderInformation("libSBML_NetworkEditor_Global_Render");
        if (layout) {
            addStyles(layout, localRednderInformation, renderPkgNamespaces);
            return 0;
        }
    }
    
    return -1;
}


Style* findStyle(LocalRenderInformation* localRednderInformation, GraphicalObject* graphicalObject) {
    Style * style = NULL;
    if (localRednderInformation && graphicalObject) {
        style = findStyle(localRednderInformation, graphicalObject->getId());
        if (!style) {
            std::string objectRole;
            RenderGraphicalObjectPlugin* renderGraphicalObjectPlugin = dynamic_cast<RenderGraphicalObjectPlugin*>(graphicalObject->getPlugin("render"));
            if (renderGraphicalObjectPlugin && renderGraphicalObjectPlugin->isSetObjectRole())
                objectRole = renderGraphicalObjectPlugin->getObjectRole();
            style = findStyle(localRednderInformation, objectRole);
        }
    }
    
    return style;
}

Style* findStyle(GlobalRenderInformation* globalRednderInformation, GraphicalObject* graphicalObject, const std::string& objectType) {
    Style * style = NULL;
    if (globalRednderInformation) {
        // by role
        if (graphicalObject) {
            RenderGraphicalObjectPlugin* renderGraphicalObjectPlugin = dynamic_cast<RenderGraphicalObjectPlugin*>(graphicalObject->getPlugin("render"));
            if (renderGraphicalObjectPlugin && renderGraphicalObjectPlugin->isSetObjectRole())
                style = findStyle(globalRednderInformation, renderGraphicalObjectPlugin->getObjectRole());
        }
        // by type
        if (!style)
            style = findStyle(globalRednderInformation, objectType);
    }
    
    return style;
}

const std::string getStrokeColor(GraphicalPrimitive1D* graphicalPrimitive1D) {
    if (graphicalPrimitive1D)
        return graphicalPrimitive1D->getStroke();
    
    return "";
}

int setStrokeColor(GraphicalPrimitive1D* graphicalPrimitive1D, const std::string& stroke) {
    if (graphicalPrimitive1D) {
        graphicalPrimitive1D->setStroke(stroke);
        return 0;
    }
    
    return -1;
}

const double getStrokeWidth(GraphicalPrimitive1D* graphicalPrimitive1D) {
    if (graphicalPrimitive1D)
        return graphicalPrimitive1D->getStrokeWidth();
    
    return 0.0;
}

int setStrokeWidth(GraphicalPrimitive1D* graphicalPrimitive1D, const double& strokeWidth) {
    if (graphicalPrimitive1D) {
        graphicalPrimitive1D->setStrokeWidth(strokeWidth);
        return 0;
    }
    
    return -1;
}

const std::vector<unsigned int> getStrokeDashArray(GraphicalPrimitive1D* graphicalPrimitive1D) {
    if (graphicalPrimitive1D)
        return graphicalPrimitive1D->getStrokeDashArray();
    
    return std::vector<unsigned int>();
}

int setStrokeDashArray(GraphicalPrimitive1D* graphicalPrimitive1D, const std::vector<unsigned int>& strokeDashArray) {
    if (graphicalPrimitive1D) {
        graphicalPrimitive1D->setStrokeDashArray(strokeDashArray);
        return 0;
    }
    
    return -1;
}

const std::string getFillColor(GraphicalPrimitive2D* graphicalPrimitive2D) {
    if (graphicalPrimitive2D)
        return graphicalPrimitive2D->getFill();
    
    return "";
}

int setFillColor(GraphicalPrimitive2D* graphicalPrimitive2D, const std::string& fill) {
    if (graphicalPrimitive2D) {
        graphicalPrimitive2D->setFill(fill);
        return 0;
    }
    
    return -1;
}

bool isSetRectangleShapeX(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->isSetX();
    
    return false;
}

const RelAbsVector getRectangleShapeX(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->getX();
    
    return RelAbsVector();
}

int setRectangleShapeX(Rectangle* rectangle, const RelAbsVector& x) {
    if (rectangle) {
        rectangle->setX(x);
        return 0;
    }
    
    return -1;
}

bool isSetRectangleShapeY(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->isSetY();
    
    return false;
}

const RelAbsVector getRectangleShapeY(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->getY();
    
    return RelAbsVector();
}

int setRectangleShapeY(Rectangle* rectangle, const RelAbsVector& y) {
    if (rectangle) {
        rectangle->setX(y);
        return 0;
    }
    
    return -1;
}

bool isSetRectangleShapeWidth(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->isSetWidth();
    
    return false;
}

const RelAbsVector getRectangleShapeWidth(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->getWidth();
    
    return RelAbsVector();
}

int setRectangleShapeWidth(Rectangle* rectangle, const RelAbsVector& width) {
    if (rectangle) {
        rectangle->setWidth(width);
        return 0;
    }
    
    return -1;
}

bool isSetRectangleShapeHeight(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->isSetHeight();
    
    return false;
}

const RelAbsVector getRectangleShapeHeight(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->getHeight();
    
    return RelAbsVector();
}

int setRectangleShapeHeight(Rectangle* rectangle, const RelAbsVector& height) {
    if (rectangle) {
        rectangle->setHeight(height);
        return 0;
    }
    
    return -1;
}

bool isSetRectangleShapeRatio(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->isSetRatio();
    
    return false;
}

const double getRectangleShapeRatio(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->getRatio();
    
    return 0.0;
}

int setRectangleShapeRatio(Rectangle* rectangle, const double& ratio) {
    if (rectangle) {
        rectangle->setRatio(ratio);
        return 0;
    }
    
    return -1;
}

bool isSetRectangleShapeRX(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->isSetRX();
    
    return false;
}

const RelAbsVector getRectangleShapeRX(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->getRX();
    
    return RelAbsVector();
}

int setRectangleShapeRX(Rectangle* rectangle, const RelAbsVector& rx) {
    if (rectangle) {
        rectangle->setRX(rx);
        return 0;
    }
    
    return -1;
}

bool isSetRectangleShapeRY(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->isSetRY();
    
    return false;
}

const RelAbsVector getRectangleShapeRY(Rectangle* rectangle) {
    if (rectangle)
        return rectangle->getRY();
    
    return RelAbsVector();
}

int setRectangleShapeRY(Rectangle* rectangle, const RelAbsVector& ry) {
    if (rectangle) {
        rectangle->setRY(ry);
        return 0;
    }
    
    return -1;
}

bool isSetEllipseShapeCX(Ellipse* ellipse) {
    if (ellipse)
        return ellipse->isSetCX();
    
    return false;
}

const RelAbsVector getEllipseShapeCX(Ellipse* ellipse) {
    if (ellipse)
        return ellipse->getCX();
    
    return RelAbsVector();
}

int setEllipseShapeCX(Ellipse* ellipse, const RelAbsVector& cx) {
    if (ellipse) {
        ellipse->setCX(cx);
        return 0;
    }
    
    return -1;
}

bool isSetEllipseShapeCY(Ellipse* ellipse) {
    if (ellipse)
        return ellipse->isSetCY();
    
    return false;
}

const RelAbsVector getEllipseShapeCY(Ellipse* ellipse) {
    if (ellipse)
        return ellipse->getCY();
    
    return RelAbsVector();
}

int setEllipseShapeCY(Ellipse* ellipse, const RelAbsVector& cy) {
    if (ellipse) {
        ellipse->setCY(cy);
        return 0;
    }
    
    return -1;
}

bool isSetEllipseShapeRX(Ellipse* ellipse) {
    if (ellipse)
        return ellipse->isSetRX();
    
    return false;
}

const RelAbsVector getEllipseShapeRX(Ellipse* ellipse) {
    if (ellipse)
        return ellipse->getRX();
    
    return RelAbsVector();
}

int setEllipseShapeRX(Ellipse* ellipse, const RelAbsVector& rx) {
    if (ellipse) {
        ellipse->setRX(rx);
        return 0;
    }
    
    return -1;
}

bool isSetEllipseShapeRY(Ellipse* ellipse) {
    if (ellipse)
        return ellipse->isSetRY();
    
    return false;
}

const RelAbsVector getEllipseShapeRY(Ellipse* ellipse) {
    if (ellipse)
        return ellipse->getRY();
    
    return RelAbsVector();
}

int setEllipseShapeRY(Ellipse* ellipse, const RelAbsVector& ry) {
    if (ellipse) {
        ellipse->setRY(ry);
        return 0;
    }
    
    return -1;
}

bool isSetEllipseShapeRatio(Ellipse* ellipse) {
    if (ellipse)
        return ellipse->isSetRatio();
    
    return false;
}

const double getEllipseShapeRatio(Ellipse* ellipse) {
    if (ellipse)
        return ellipse->getRatio();
    
    return 0.0;
}

int setEllipseShapeRatio(Ellipse* ellipse, const double& ratio) {
    if (ellipse) {
        ellipse->setRatio(ratio);
        return 0;
    }
    
    return -1;
}

int addGeometricShape(RenderGroup* renderGroup, const std::string& shape) {
    if (renderGroup) {
        if (stringCompare(shape, "rectangle")) {
            Rectangle* rectangle = renderGroup->createRectangle();
            setDefaultRectangleShapeFeatures(rectangle);
            return 0;
        }
        else if (stringCompare(shape, "ellipse")) {
            Ellipse* ellipse = renderGroup->createEllipse();
            setDefaultEllipseShapeFeatures(ellipse);
            return 0;
        }
    }

    return -1;
}

Transformation2D * removeGeometricShape(RenderGroup* renderGroup, unsigned int n) {
    if (renderGroup)
        return renderGroup->removeElement(n);

    return NULL;
}

}

