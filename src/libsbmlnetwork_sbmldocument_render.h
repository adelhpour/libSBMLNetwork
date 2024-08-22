#ifndef __LIBSBMLNETWORK_SBMLDOCUMENT_RENDER_H_
#define __LIBSBMLNETWORK_SBMLDOCUMENT_RENDER_H_

#include "libsbmlnetwork_common.h"

#ifndef SWIG
#include "sbml/SBMLTypes.h"
#include "sbml/packages/layout/common/LayoutExtensionTypes.h"
#include "sbml/packages/render/common/RenderExtensionTypes.h"
#endif

using namespace libsbml;

namespace LIBSBMLNETWORK_CPP_NAMESPACE {

/// @brief Get the List of global render Information of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @return a pointer to the ListOfRenderInformationBase object of the SBML document.
LIBSBMLNETWORK_EXTERN ListOfGlobalRenderInformation* getListOfGlobalRenderInformation(SBMLDocument* document);

/// @brief Returns the number of items in the ListOfGlobalRenderInformation of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @return the number of items in the ListOfGlobalRenderInformation of the SBML document, or @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const unsigned int getNumGlobalRenderInformation(SBMLDocument* document);

/// @brief Returns a pointer to the GlobalRenderInformation with the given index in the ListOfGlobalRenderInformation of the SBML document.
/// @param renderIndex the index number of the GlobalRenderInformation to return.
/// @return the @c the nth GlobalRenderInformation in the ListOfGlobalRenderInformation of the SBML document or NULL if
/// no such GlobalRenderInformation exists or the document is @c NULL.
LIBSBMLNETWORK_EXTERN GlobalRenderInformation* getGlobalRenderInformation(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Add GlobalRenderInformation to list of global renders of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param globalRenderInformation a pointer to the GlobalRenderInformation object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int addGlobalRenderInformation(SBMLDocument* document, GlobalRenderInformation* globalRenderInformation);

/// @brief Create a GlobalRenderInformation object and add it to list of global renders of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @return a pointer to the created GlobalRenderInformation object.
LIBSBMLNETWORK_EXTERN GlobalRenderInformation* createGlobalRenderInformation(SBMLDocument* document);

/// @brief Remove all the global render information objects from the list of global renders of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int removeAllGlobalRenderInformation(SBMLDocument* document);

/// @brief Set all the necessary features for the global render information object.
/// @param document a pointer to the SBMLDocument object.
/// @param globalRenderInformation a pointer to the GlobalRenderInformation object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setDefaultGlobalRenderInformationFeatures(SBMLDocument* document, GlobalRenderInformation* globalRenderInformation);

/// @brief Get the List of local render Information of the Layout object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @return a pointer to the ListOfGlobalInformationBase object of this Layout object.
LIBSBMLNETWORK_EXTERN ListOfLocalRenderInformation* getListOfLocalRenderInformation(SBMLDocument* document, unsigned int layoutIndex = 0);

/// @brief Returns the number of items in the ListOfGlobalRenderInformation of the Layout object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @return the number of items in the ListOfGlobalRenderInformation of this Layout object, or @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const unsigned int getNumLocalRenderInformation(SBMLDocument* document, unsigned int layoutIndex = 0);

/// @brief Returns a pointer to the LocalRenderInformation object with the given index in the ListOfLocalRenderInformation of
/// the layout object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param renderIndex the index number of the GlobalRenderInformation to return.
/// @return the @c the LocalRenderInformation with the given index in the ListOfLocalRenderInformation of this Layout object or NULL if
/// no such LocalRenderInformation exists or the object is @c NULL.
LIBSBMLNETWORK_EXTERN LocalRenderInformation* getLocalRenderInformation(SBMLDocument* document, unsigned int layoutIndex = 0, unsigned int renderIndex = 0);

/// @brief Add LocalRenderInformation to the list of local renders of the first Layout of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param localRenderInformation a pointer to the LocalRenderInformation object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int addLocalRenderInformation(SBMLDocument* document, LocalRenderInformation* localRenderInformation);

/// @brief Add LocalRenderInformation to list of local renders of the Layout with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param localRenderInformation a pointer to the LocalRenderInformation object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int addLocalRenderInformation(SBMLDocument* document, unsigned int layoutIndex, LocalRenderInformation* localRenderInformation);

/// @brief Create a LocalRenderInformation object and add it to list of local renders of the Layout with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @return a pointer to the created LocalRenderInformation object.
LIBSBMLNETWORK_EXTERN LocalRenderInformation* createLocalRenderInformation(SBMLDocument* document, unsigned int layoutIndex = 0);

/// @brief Remove all the local render information objects from the list of local renders of the Layout with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int removeAllLocalRenderInformation(SBMLDocument* document, unsigned int layoutIndex = 0);

/// @brief Set all the necessary features for the local render information object in the first Layout object of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param localRenderInformation a pointer to the LocalRenderInformation object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setDefaultLocalRenderInformationFeatures(SBMLDocument* document, LocalRenderInformation* localRenderInformation);

/// @brief Set all the necessary features for the local render information object in the Layout object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param localRenderInformation a pointer to the LocalRenderInformation object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setDefaultLocalRenderInformationFeatures(SBMLDocument* document, unsigned int layoutIndex, LocalRenderInformation* localRenderInformation);

/// @brief Create a GlobalRenderInformation object and add it to list of global renders of the SBML document, and
/// Create a LocalRenderInformation object, add it to list of local renders of the Layout of the SBML document, and
/// set all the necessary features for them.
/// @param document a pointer to the SBMLDocument object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int createDefaultRenderInformation(SBMLDocument* document);

/// @brief Create a GlobalRenderInformation object, add it to list of global renders of the SBML document, and
/// set all the necessary features for it.
/// @param document a pointer to the SBMLDocument object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int createDefaultGlobalRenderInformation(SBMLDocument* document);

/// @brief Create a LocalRenderInformation object, add it to list of local renders of the Layout of the SBML document, and
/// set all the necessary features for it.
/// @param document a pointer to the SBMLDocument object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int createDefaultLocalRenderInformation(SBMLDocument* document);

/// @brief Predicates returning @c true if the "backgroundColor" attribute of the GlobalRenderInformation object with the given index of the SBML document is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the GlobalRenderInformation object.
/// @return @c true if the "backgroundColor" attribute of this GlobalRenderInformation object is set, @c false if either the "backgroundColor"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetBackgroundColor(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Returns the value of the "backgroundColor" attribute of the GlobalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the GlobalRenderInformation object.
/// @return the "backgroundColor" attribute of this RenderInformationBase object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getBackgroundColor(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Sets the value of the "backgroundColor" attribute of the first GlobalRenderInformation object.
/// @param document a pointer to the SBMLDocument object.
/// @param backgroundColor a string value to use as the value of the "backgroundColor" attribute of this RenderInformationBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setBackgroundColor(SBMLDocument* document, const std::string& backgroundColor);

/// @brief Sets the value of the "backgroundColor" attribute of the GlobalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the GlobalRenderInformation object.
/// @param backgroundColor a string value to use as the value of the "backgroundColor" attribute of this RenderInformationBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setBackgroundColor(SBMLDocument* document, unsigned int renderIndex, const std::string& backgroundColor);

/// @brief Returns the number of ColorDefinitions of the GlobalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the GlobalRenderInformation object.
/// @return the number of ColorDefinitions of this GlobalRenderInformation object, or @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const unsigned int getNumGlobalColorDefinitions(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Returns the id of the nth ColorDefinition object of the GlobalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the GlobalRenderInformation object.
/// @param colorIndex the of the ColorDefinition.
/// @return the id of the nth ColorDefinition object in the ListOfColorDefinitions within this GlobalRenderInformation, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getNthGlobalColorDefinitionId(SBMLDocument* document, unsigned int renderIndex = 0, unsigned int colorIndex = 0);

/// @brief Returns the number of ColorDefinitions of the LocalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the LocalRenderInformation object.
/// @return the number of ColorDefinitions of this LocalRenderInformation object, or @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const unsigned int getNumLocalColorDefinitions(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Returns the id of the nth ColorDefinition object of the LocalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the LocalRenderInformation object.
/// @param colorIndex the of the ColorDefinition.
/// @return the id of the nth ColorDefinition object in the ListOfColorDefinitions within this LocalRenderInformation, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getNthLocalColorDefinitionId(SBMLDocument* document, unsigned int renderIndex = 0, unsigned int colorIndex = 0);

/// @brief Returns a ColorDefinition from all RenderInformationBase objects of the SBML document based on its identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @return the @c ColorDefinition in the ListOfColorDefinitions within this RenderInformationBase with the given sid or @c NULL if no such ColorDefinition exists.
LIBSBMLNETWORK_EXTERN ColorDefinition* getColorDefinition(SBMLDocument* document, const std::string& sid);

/// @brief Returns a ColorDefinition from the RenderInformationBase object with the given index of the SBML document based on its identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @return the @c ColorDefinition in the ListOfColorDefinitions within this RenderInformationBase with the given sid or @c NULL if no such ColorDefinition exists.
LIBSBMLNETWORK_EXTERN ColorDefinition* getColorDefinition(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns a pointer to the ColorDefinition with the given index of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param colorIndex the index value of the ColorDefinition to return.
/// @return the @c ColorDefinition with the given index, or NULL if ColorDefinition does not exist or the object is @c NULL
LIBSBMLNETWORK_EXTERN ColorDefinition* getColorDefinition(SBMLDocument* document, unsigned int renderIndex = 0, unsigned int colorIndex = 0);

/// @brief Predicates returning @c true if the "value" attribute of the ColorDefinition with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @return @c true if the "value" attribute of this ColorDefinition object is set, @c false if either the "value"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetValue(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "value" attribute of the ColorDefinition with the given identifier
/// in the RenderInformationBase with the given index is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @return @c true if the "value" attribute of this ColorDefinition object is set, @c false if either the "value"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetValue(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "value" attribute of the ColorDefinition with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @return the "value" attribute of the ColorDefinition object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getValue(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "value" attribute of the ColorDefinition with the given identifier in the RenderInformationBase with the given index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @return the "value" attribute of the ColorDefinition object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getValue(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "value" attribute of the ColorDefinition with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @param value a string value to use as the value of the "value" attribute of this ColorDefinition object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setValue(SBMLDocument* document, const std::string& sid, const std::string& value);

/// @brief Sets the value of the "value" attribute of the ColorDefinition with the given identifier in the RenderInformationBase with the given index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the ColorDefinition to retrieve.
/// @param value a string value to use as the value of the "value" attribute of this ColorDefinition object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setValue(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const std::string& value);

/// @brief Returns the number of GradientDefinitions of the GlobalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the GlobalRenderInformation object.
/// @return the number of GradientDefinitions of this GlobalRenderInformation object, or @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const unsigned int getNumGlobalGradientDefinitions(SBMLDocument* document, unsigned int renderIndex = 0);

/// @breif Returns the number of GradientDefinitions of the LocalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the LocalRenderInformation object.
/// @return the number of GradientDefinitions of this LocalRenderInformation object, or @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const unsigned int getNumLocalGradientDefinitions(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Returns the id of the nth GradientDefinition object of the GlobalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the GlobalRenderInformation object.
/// @param gradientIndex the of the GlobalRenderInformation.
/// @return the id of the nth GradientDefinition object in the ListOfGradientDefinitions within this GlobalRenderInformation, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getNthGlobalGradientDefinitionId(SBMLDocument* document, unsigned int renderIndex = 0, unsigned int gradientIndex = 0);

/// @breif Returns the id of the nth GradientDefinition object of the LocalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the LocalRenderInformation object.
/// @param gradientIndex the of the LocalRenderInformation.
/// @return the id of the nth GradientDefinition object in the ListOfGradientDefinitions within this LocalRenderInformation, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getNthLocalGradientDefinitionId(SBMLDocument* document, unsigned int renderIndex = 0, unsigned int gradientIndex = 0);

/// @brief Returns a GradientBase from all the RenderInformationBase objects of the SBML document based on its identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the @c GradientBase in the ListOfGradientDefinitions within all RenderInformationBase objects with the given sid or @c NULL if no such GradientBase exists.
LIBSBMLNETWORK_EXTERN GradientBase* getGradientDefinition(SBMLDocument* document, const std::string& sid);

/// @brief Returns a GradientBase from the RenderInformationBase object with the given index of the SBML document based on its identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the @c GradientBase in the ListOfGradientDefinitions within this RenderInformationBase with the given sid or @c NULL if no such GradientBase exists.
LIBSBMLNETWORK_EXTERN GradientBase* getGradientDefinition(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns a pointer to the GradientBase with the given index of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param gradientIndex the index value of the GradientBase to return.
/// @return the @c GradientBase with the given index, or NULL if GradientBase does not exist or the object is @c NULL
LIBSBMLNETWORK_EXTERN GradientBase* getGradientDefinition(SBMLDocument* document, unsigned int renderIndex = 0, unsigned int gradientIndex = 0);

/// @brief Predicate returning true if the abstract GradientBase with the given identifier in all RenderInformationBase objects of SBML document is of type LinearGradient.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if this abstract GradientBase is of type LinearGradient, false otherwise
LIBSBMLNETWORK_EXTERN bool isLinearGradient(SBMLDocument* document, const std::string& sid);

/// @brief Predicate returning true if the abstract GradientBase with the given identifier in the RenderInformationBase object with the given index of the SBML document is of type LinearGradient.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if this abstract GradientBase is of type LinearGradient, false otherwise
LIBSBMLNETWORK_EXTERN bool isLinearGradient(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Predicate returning true if the abstract GradientBase with the given identifier in all RenderInformationBase objects of SBML document with the given identifier is of type RadialGradient.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if this abstract GradientBase is of type RadialGradient, false otherwise
LIBSBMLNETWORK_EXTERN bool isRadialGradient(SBMLDocument* document, const std::string& sid);

/// @brief Predicate returning true if the abstract GradientBase with the given identifier in the RenderInformationBase object with the given index of SBML document is of type RadialGradient.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if this abstract GradientBase is of type RadialGradient, false otherwise
LIBSBMLNETWORK_EXTERN bool isRadialGradient(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Predicates returning @c true if the "spreadMethod" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "spreadMethod" attribute of this GradientBase object is set, @c false if either the "spreadMethod"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetSpreadMethod(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "spreadMethod" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "spreadMethod" attribute of this GradientBase object is set, @c false if either the "spreadMethod"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetSpreadMethod(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "spreadMethod" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "spreadMethod" attribute of the GradientBase object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getSpreadMethod(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "spreadMethod" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "spreadMethod" attribute of the GradientBase object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getSpreadMethod(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "spreadMethod" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param spreadMethod a string value to use as the value of the "spreadMethod" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpreadMethod(SBMLDocument* document, const std::string& sid, const std::string& spreadMethod);

/// @brief Sets the value of the "spreadMethod" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param spreadMethod a string value to use as the value of the "spreadMethod" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpreadMethod(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const std::string& spreadMethod);

/// @brief Returns Get the number of GradientStop objects in the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the number of GradientStop objects in this GradientBase, or 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN unsigned int getNumGradientStops(SBMLDocument* document, const std::string& sid);

/// @brief Returns Get the number of GradientStop objects in the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the number of GradientStop objects in this GradientBase, or 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN unsigned int getNumGradientStops(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the GradientStop object with the given index of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop to retrieve.
/// @return the GradientStop at the given index of the GradientBase object, or NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN GradientStop* getGradientStop(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Returns the GradientStop object with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop to retrieve.
/// @return the GradientStop at the given index of the GradientBase object, or NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN GradientStop* getGradientStop(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Predicates returning @c true if the "offset" attribute of the GradientStop with the given index of this the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return @c true if the "offset" attribute of the GradientStop with the given index of this GradientBase object is set, @c false if
/// either the "offset" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetOffset(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Predicates returning @c true if the "offset" attribute of the GradientStop with the given index of this the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return @c true if the "offset" attribute of the GradientStop with the given index of this GradientBase object is set, @c false if
/// either the "offset" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetOffset(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Returns the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return the "offset" attribute of the GradientStop with the given index of the GradientBase object, or @c RelAbsVector() if the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getOffset(SBMLDocument* document, const std::string& sid , unsigned int gradientStopIndex = 0);

/// @brief Returns the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return the "offset" attribute of the GradientStop with the given index of the GradientBase object, or @c RelAbsVector() if the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getOffset(SBMLDocument* document, unsigned int renderIndex, const std::string& sid , unsigned int gradientStopIndex = 0);

/// @brief Returns the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return the "offset" attribute of the GradientStop with the given index of the GradientBase object as a double, or @c 0 if the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getOffsetAsDouble(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Returns the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return the "offset" attribute of the GradientStop with the given index of the GradientBase object as a double, or @c 0 if the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getOffsetAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Sets the value of the "offset" attribute of the first GradientStop of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param offset a RelAbsVector to use as the value of the "offset" attribute of the first GradientStop of this GradientStop object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setOffset(SBMLDocument* document, const std::string& sid, const RelAbsVector& offset);

/// @brief Sets the value of the "offset" attribute of the first GradientStop of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param offset a RelAbsVector to use as the value of the "offset" attribute of the first GradientStop of this GradientStop object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setOffset(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& offset);

/// @brief Sets the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @param offset a RelAbsVector to use as the value of the "offset" attribute of the GradientStop with the given index of this GradientStop object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setOffset(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex, const RelAbsVector& offset);

/// @brief Sets the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @param offset a RelAbsVector to use as the value of the "offset" attribute of the GradientStop with the given index of this GradientStop object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setOffset(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex, const RelAbsVector& offset);

/// @brief Sets the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param offset a double to use as the value of the "offset" attribute of the GradientStop with the given index of this GradientStop object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setOffsetAsDouble(SBMLDocument* document, const std::string& sid, const double& offset);

/// @brief Sets the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param offset a double to use as the value of the "offset" attribute of the GradientStop with the given index of this GradientStop object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setOffsetAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const double& offset);

/// @brief Sets the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @param offset a double to use as the value of the "offset" attribute of the GradientStop with the given index of this GradientStop object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setOffsetAsDouble(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex, const double& offset);

/// @brief Sets the value of the "offset" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @param offset a double to use as the value of the "offset" attribute of the GradientStop with the given index of this GradientStop object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setOffsetAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex, const double& offset);

/// @brief Predicates returning @c true if the "stop-color" attribute of the GradientStop with the given index of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "stop-color" attribute of nth GradientStop of this GradientBase object is set, @c false if either the "stop-color"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetStopColor(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Predicates returning @c true if the "stop-color" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "stop-color" attribute of nth GradientStop of this GradientBase object is set, @c false if either the "stop-color"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetStopColor(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Returns the value of the "stop-color" attribute of the GradientStop with the given index of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return the "stop-color" attribute of the GradientStop with the given index of this GradientStop object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getStopColor(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Returns the value of the "stop-color" attribute of the GradientStop with the given index of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @return the "stop-color" attribute of the GradientStop with the given index of this GradientStop object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getStopColor(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex = 0);

/// @brief Sets the value of the "stop-color" attribute of the first GradientStop of this the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param stopColor a string value to use as the value of the "stop-color" attribute of the first GradientStop of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStopColor(SBMLDocument* document, const std::string& sid, const std::string& stopColor);

/// @brief Sets the value of the "stop-color" attribute of the first GradientStop of this the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param stopColor a string value to use as the value of the "stop-color" attribute of the first GradientStop of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStopColor(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const std::string& stopColor);

/// @brief Sets the value of the "stop-color" attribute of the GradientStop with the given index of this the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @param stopColor a string value to use as the value of the "stop-color" attribute of the GradientStop with the given index of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStopColor(SBMLDocument* document, const std::string& sid, unsigned int gradientStopIndex, const std::string& stopColor);

/// @brief Sets the value of the "stop-color" attribute of the GradientStop with the given index of this the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param gradientStopIndex an unsigned int representing the index of the GradientStop of this GradientBase object.
/// @param stopColor a string value to use as the value of the "stop-color" attribute of the GradientStop with the given index of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStopColor(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, unsigned int gradientStopIndex, const std::string& stopColor);

/// @brief Predicates returning @c true if the "x1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "x1" attribute of this GradientBase object is set, @c false if either the "x1" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN bool isSetLinearGradientX1(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "x1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "x1" attribute of this GradientBase object is set, @c false if either the "x1" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN bool isSetLinearGradientX1(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "x1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "x1" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLinearGradientX1(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "x1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "x1" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLinearGradientX1(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "x1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "x1" attribute of the GradientBase object as a double, or @c 0 if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const double getLinearGradientX1AsDouble(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "x1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "x1" attribute of the GradientBase object as a double, or @c 0 if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const double getLinearGradientX1AsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "x1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param x1 a RelAbsVector to use as the value of the "x1" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientX1(SBMLDocument* document, const std::string& sid, const RelAbsVector& x1);

/// @brief Sets the value of the "x1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param x1 a RelAbsVector to use as the value of the "x1" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientX1(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& x1);

/// @brief Sets the value of the "x1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param x1 a double to use as the value of the "x1" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientX1AsDouble(SBMLDocument* document, const std::string& sid, const double& x1);

/// @brief Sets the value of the "x1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param x1 a double to use as the value of the "x1" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientX1AsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const double& x1);

/// @brief Predicates returning @c true if the "x2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "x2" attribute of this GradientBase object is set, @c false if either the "x2" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN bool isSetLinearGradientX2(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "x2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "x2" attribute of this GradientBase object is set, @c false if either the "x2" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN bool isSetLinearGradientX2(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "x2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "x2" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLinearGradientX2(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "x2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "x2" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLinearGradientX2(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "x2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "x2" attribute of the GradientBase object as a double, or @c 0 if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const double getLinearGradientX2AsDouble(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "x2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "x2" attribute of the GradientBase object as a double, or @c 0 if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const double getLinearGradientX2AsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "x2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param x2 a RelAbsVector to use as the value of the "x2" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientX2(SBMLDocument* document, const std::string& sid, const RelAbsVector& x2);

/// @brief Sets the value of the "x2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param x2 a RelAbsVector to use as the value of the "x2" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientX2(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& x2);

/// @brief Sets the value of the "x2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param x2 a double to use as the value of the "x2" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientX2AsDouble(SBMLDocument* document, const std::string& sid, const double& x2);

/// @brief Sets the value of the "x2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param x2 a double to use as the value of the "x2" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientX2AsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const double& x2);

/// @brief Predicates returning @c true if the "y1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "y1" attribute of this GradientBase object is set, @c false if either the "y1" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN bool isSetLinearGradientY1(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "y1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "y1" attribute of this GradientBase object is set, @c false if either the "y1" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN bool isSetLinearGradientY1(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "y1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "y1" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLinearGradientY1(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "y1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "y1" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLinearGradientY1(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "y1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "y1" attribute of the GradientBase object as a double, or @c 0 if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const double getLinearGradientY1AsDouble(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "y1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "y1" attribute of the GradientBase object as a double, or @c 0 if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const double getLinearGradientY1AsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "y1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param y1 a RelAbsVector to use as the value of the "y1" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientY1(SBMLDocument* document, const std::string& sid, const RelAbsVector& y1);

/// @brief Sets the value of the "y1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param y1 a RelAbsVector to use as the value of the "y1" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientY1(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& y1);

/// @brief Sets the value of the "y1" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param y1 a double to use as the value of the "y1" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientY1AsDouble(SBMLDocument* document, const std::string& sid, const double& y1);

/// @brief Sets the value of the "y1" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param y1 a double to use as the value of the "y1" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientY1AsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const double& y1);

/// @brief Predicates returning @c true if the "y2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "y2" attribute of this GradientBase object is set, @c false if either the "y2" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN bool isSetLinearGradientY2(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "y2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "y2" attribute of this GradientBase object is set, @c false if either the "y2" attribute is not set
/// , the object is @c NULL, or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN bool isSetLinearGradientY2(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "y2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "y2" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLinearGradientY2(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "y2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "y2" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLinearGradientY2(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "y2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "y2" attribute of the GradientBase object as a double, or @c 0 if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const double getLinearGradientY2AsDouble(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "y2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "y2" attribute of the GradientBase object as a double, or @c 0 if the object is @c NULL or not of type LinearGradient.
LIBSBMLNETWORK_EXTERN const double getLinearGradientY2AsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "y2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param y2 a RelAbsVector to use as the value of the "y2" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientY2(SBMLDocument* document, const std::string& sid, const RelAbsVector& y2);

/// @brief Sets the value of the "y2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param y2 a RelAbsVector to use as the value of the "y2" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientY2(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& y2);

/// @brief Sets the value of the "y2" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param y2 a double to use as the value of the "y2" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientY2AsDouble(SBMLDocument* document, const std::string& sid, const double& y2);

/// @brief Sets the value of the "y2" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param y2 a double to use as the value of the "y2" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLinearGradientY2AsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const double& y2);

/// @brief Predicates returning @c true if the "cx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "cx" attribute of this GradientBase object is set, @c false if either the "cx" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN bool isSetRadialGradientCx(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "cx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "cx" attribute of this GradientBase object is set, @c false if either the "cx" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN bool isSetRadialGradientCx(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "cx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "cx" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getRadialGradientCx(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "cx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "cx" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getRadialGradientCx(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "cx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "cx" attribute of the GradientBase object as a double, or \c 0 if the object is \c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const double getRadialGradientCxAsDouble(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "cx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "cx" attribute of the GradientBase object as a double, or \c 0 if the object is \c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const double getRadialGradientCxAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "cx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientCx(SBMLDocument* document, const std::string& sid, const RelAbsVector& cx);

/// @brief Sets the value of the "cx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientCx(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& cx);

/// @brief Sets the value of the "cx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param cx a double to use as the value of the "cx" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientCxAsDoubleAsDouble(SBMLDocument* document, const std::string& sid, const double& cx);

/// @brief Sets the value of the "cx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param cx a double to use as the value of the "cx" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientCxAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const double& cx);

/// @brief Predicates returning @c true if the "cy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "cy" attribute of this GradientBase object is set, @c false if either the "cy" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN bool isSetRadialGradientCy(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "cy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "cy" attribute of this GradientBase object is set, @c false if either the "cy" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN bool isSetRadialGradientCy(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "cy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "cy" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getRadialGradientCy(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "cy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "cy" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getRadialGradientCy(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "cy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "cy" attribute of the GradientBase object as a double, or \c 0 if the object is \c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const double getRadialGradientCyAsDouble(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "cy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "cy" attribute of the GradientBase object as a double, or \c 0 if the object is \c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const double getRadialGradientCyAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "cy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientCy(SBMLDocument* document, const std::string& sid, const RelAbsVector& cy);

/// @brief Sets the value of the "cy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientCy(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& cy);

/// @brief Sets the value of the "cy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param cy a double to use as the value of the "cy" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientCyAsDouble(SBMLDocument* document, const std::string& sid, const double& cy);

/// @brief Sets the value of the "cy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param cy a double to use as the value of the "cy" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientCyAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const double& cy);

/// @brief Predicates returning @c true if the "fx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "fx" attribute of this GradientBase object is set, @c false if either the "fx" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN bool isSetRadialGradientFx(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "fx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "fx" attribute of this GradientBase object is set, @c false if either the "fx" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN bool isSetRadialGradientFx(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "fx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "fx" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getRadialGradientFx(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "fx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "fx" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getRadialGradientFx(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "fx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "fx" attribute of the GradientBase object as a double, or \c 0 if the object is \c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const double getRadialGradientFxAsDouble(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "fx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "fx" attribute of the GradientBase object as a double, or \c 0 if the object is \c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const double getRadialGradientFxAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "fx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param fx a RelAbsVector to use as the value of the "fx" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientFx(SBMLDocument* document, const std::string& sid, const RelAbsVector& fx);

/// @brief Sets the value of the "fx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param fx a RelAbsVector to use as the value of the "fx" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientFx(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& fx);

/// @brief Sets the value of the "fx" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param fx a double to use as the value of the "fx" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientFxAsDouble(SBMLDocument* document, const std::string& sid, const double& fx);

/// @brief Sets the value of the "fx" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param fx a double to use as the value of the "fx" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientFxAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const double& fx);

/// @brief Predicates returning @c true if the "fy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "fy" attribute of this GradientBase object is set, @c false if either the "fy" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN bool isSetRadialGradientFy(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "fy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "fy" attribute of this GradientBase object is set, @c false if either the "fy" attribute is not set
/// , the object is @c NULL, or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN bool isSetRadialGradientFy(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "fy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "fy" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getRadialGradientFy(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "fy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "fy" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getRadialGradientFy(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "fy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "fy" attribute of the GradientBase object as a double, or \c 0 if the object is \c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const double getRadialGradientFyAsDouble(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "fy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "fy" attribute of the GradientBase object as a double, or \c 0 if the object is \c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const double getRadialGradientFyAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "fy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param fy a RelAbsVector to use as the value of the "fy" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientFy(SBMLDocument* document, const std::string& sid, const RelAbsVector& fy);

/// @brief Sets the value of the "fy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param fy a RelAbsVector to use as the value of the "fy" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientFy(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& fy);

/// @brief Sets the value of the "fy" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param fy a double to use as the value of the "fy" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientFyAsDouble(SBMLDocument* document, const std::string& sid, const double& fy);

/// @brief Sets the value of the "fy" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param fy a double to use as the value of the "fy" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientFyAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const double& fy);

/// @brief Predicates returning @c true if the "r" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "r" attribute of this GradientBase object is set, @c false if either the "r" attribute is not set
LIBSBMLNETWORK_EXTERN bool isSetRadialGradientR(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "r" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return @c true if the "r" attribute of this GradientBase object is set, @c false if either the "r" attribute is not set
LIBSBMLNETWORK_EXTERN bool isSetRadialGradientR(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "r" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "r" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getRadialGradientR(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "r" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "r" attribute of the GradientBase object, or @c RelAbsVector() if the object is @c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const RelAbsVector getRadialGradientR(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "r" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "r" attribute of the GradientBase object as a double, or \c 0 if the object is \c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const double getRadialGradientRAsDouble(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "r" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @return the "r" attribute of the GradientBase object as a double, or \c 0 if the object is \c NULL or not of type RadialGradient.
LIBSBMLNETWORK_EXTERN const double getRadialGradientRAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "r" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param r a RelAbsVector to use as the value of the "r" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientR(SBMLDocument* document, const std::string& sid, const RelAbsVector& r);

/// @brief Sets the value of the "r" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param r a RelAbsVector to use as the value of the "r" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientR(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const RelAbsVector& r);

/// @brief Sets the value of the "r" attribute of the GradientBase in all RenderInformationBase objects of SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param r a double to use as the value of the "r" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientRAsDouble(SBMLDocument* document, const std::string& sid, const double& r);

/// @brief Sets the value of the "r" attribute of the GradientBase in the RenderInformationBase with the given index of the SBML document with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the GradientBase to retrieve.
/// @param r a double to use as the value of the "r" attribute of this GradientBase object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setRadialGradientRAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, const double& r);

/// @brief Returns the number of LineEndings of the GlobalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the GlobalRenderInformation object.
/// @return the number of LineEndings of this GlobalRenderInformation object, or @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const unsigned int getNumGlobalLineEndings(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Returns the number of LineEndings of the LocalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the LocalRenderInformation object.
/// @return the number of LineEndings of this LocalRenderInformation object, or @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const unsigned int getNumLocalLineEndings(SBMLDocument* document, unsigned int renderIndex = 0);

/// @brief Returns the id of the nth LineEnding of the GlobalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the GlobalRenderInformation object.
/// @param lineEndingIndex the index number of the LineEnding to return.
/// @return the id of the nth LineEnding of this GlobalRenderInformation object, or @c NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getNthGlobalLineEndingId(SBMLDocument* document, unsigned int renderIndex = 0, unsigned int lineEndingIndex = 0);

/// @brief Returns the id of the nth LineEnding of the LocalRenderInformation object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the LocalRenderInformation object.
/// @param lineEndingIndex the index number of the LineEnding to return.
/// @return the id of the nth LineEnding of this LocalRenderInformation object, or @c NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getNthLocalLineEndingId(SBMLDocument* document, unsigned int renderIndex = 0, unsigned int lineEndingIndex = 0);

/// @brief Returns a LineEnding from all the RenderInformationBase objects of the SBML document based on its identifier.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the @c LineEnding in the ListOfLineEndings within this RenderInformationBase with the given sid or @c NULL if no such LineEnding exists.
LIBSBMLNETWORK_EXTERN LineEnding* getLineEnding(SBMLDocument* document, const std::string& sid);

/// @brief Returns a LineEnding from the RenderInformationBase object with the given index of the SBML document based on its identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the @c LineEnding in the ListOfLineEndings within this RenderInformationBase with the given sid or @c NULL if no such LineEnding exists.
LIBSBMLNETWORK_EXTERN LineEnding* getLineEnding(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns a pointer to the LineEnding with the given index of the RenderInformationBase object with given index of the SBML document the given index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param lineEndingIndex the index value of the LineEnding to return.
/// @return the @c LineEnding withf the given index, or NULL if LineEnding does not exist or the object is @c NULL
LIBSBMLNETWORK_EXTERN LineEnding* getLineEnding(SBMLDocument* document, unsigned int renderIndex = 0, unsigned int lineEndingIndex = 0);

/// @brief Predicates returning @c true if the "enableRotationalMapping" attribute of the LineEnding with the given identifier
/// of the first RenderInformationBase object of the SBML document is set.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "enableRotationalMapping" attribute of this LineEnding object is set, @c false if either the "enableRotationalMapping" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetEnableRotationalMapping(SBMLDocument* document, const std::string& sid);

/// @brief Predicates returning @c true if the "enableRotationalMapping" attribute of the LineEnding with the given identifier
/// of the RenderInformationBase object with the given index of the SBML document is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "enableRotationalMapping" attribute of this LineEnding object is set, @c false if either the "enableRotationalMapping" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetEnableRotationalMapping(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Returns the value of the "enableRotationalMapping" attribute of the LineEnding with the given identifier
/// of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the "enableRotationalMapping" attribute of the LineEnding object, or @c false if the object is @c NULL
LIBSBMLNETWORK_EXTERN bool getEnableRotationalMapping(SBMLDocument* document, const std::string& sid);

/// @brief Returns the value of the "enableRotationalMapping" attribute of the LineEnding with the given identifier
/// of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the "enableRotationalMapping" attribute of the LineEnding object, or @c false if the object is @c NULL
LIBSBMLNETWORK_EXTERN bool getEnableRotationalMapping(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Sets the value of the "enableRotationalMapping" attribute of the LineEnding with the given identifier
/// of the first RenderInformationBase object of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @param enableRotationalMapping a boolean to use as the value of the "enableRotationalMapping" attribute of this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setEnableRotationalMapping(SBMLDocument* document, const std::string& sid, bool enableRotationalMapping);

/// @brief Sets the value of the "enableRotationalMapping" attribute of the LineEnding with the given identifier
/// of the RenderInformationBase object with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @param enableRotationalMapping a boolean to use as the value of the "enableRotationalMapping" attribute of this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setEnableRotationalMapping(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, bool enableRotationalMapping);

/// Returns the bounding box for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the bounding box for the LineEnding object, or @c NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN BoundingBox* getLineEndingBoundingBox(SBMLDocument* document, const std::string& sid);

/// Returns the bounding box for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the bounding box for the LineEnding object, or @c NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN BoundingBox* getLineEndingBoundingBox(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// Returns the value of the "x" attribute of the bounding box for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the value of the "x" attribute of the bounding box for this LineEnding, or @c 0.0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const double getLineEndingBoundingBoxX(SBMLDocument* document, const std::string& sid);

/// Returns the value of the "x" attribute of the bounding box for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the value of the "x" attribute of the bounding box for this LineEnding, or @c 0.0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const double getLineEndingBoundingBoxX(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// Sets the value of the "x" attribute of the bounding box for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @param x a double to use as the value of the "x" attribute of the bounding box for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingBoundingBoxX(SBMLDocument* document, const std::string& sid, double x);

/// Sets the value of the "x" attribute of the bounding box for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @param x a double to use as the value of the "x" attribute of the bounding box for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingBoundingBoxX(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, double x);

/// Returns the value of the "y" attribute of the bounding box for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the value of the "y" attribute of the bounding box for this LineEnding, or @c 0.0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const double getLineEndingBoundingBoxY(SBMLDocument* document, const std::string& sid);

/// Returns the value of the "y" attribute of the bounding box for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the value of the "y" attribute of the bounding box for this LineEnding, or @c 0.0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const double getLineEndingBoundingBoxY(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// Sets the value of the "y" attribute of the bounding box for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @param y a double to use as the value of the "y" attribute of the bounding box for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingBoundingBoxY(SBMLDocument* document, const std::string& sid, double y);

/// Sets the value of the "y" attribute of the bounding box for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @param y a double to use as the value of the "y" attribute of the bounding box for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingBoundingBoxY(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, double y);

/// Returns the value of the "width" attribute of the bounding box for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the value of the "width" attribute of the bounding box for this LineEnding, or @c 0.0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const double getLineEndingBoundingBoxWidth(SBMLDocument* document, const std::string& sid);

/// Returns the value of the "width" attribute of the bounding box for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the value of the "width" attribute of the bounding box for this LineEnding, or @c 0.0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const double getLineEndingBoundingBoxWidth(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// Sets the value of the "width" attribute of the bounding box for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @param width a double to use as the value of the "width" attribute of the bounding box for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingBoundingBoxWidth(SBMLDocument* document, const std::string& sid, double width);

/// Sets the value of the "width" attribute of the bounding box for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @param width a double to use as the value of the "width" attribute of the bounding box for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingBoundingBoxWidth(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, double width);

/// Returns the value of the "height" attribute of the bounding box for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the value of the "height" attribute of the bounding box for this LineEnding, or @c 0.0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const double getLineEndingBoundingBoxHeight(SBMLDocument* document, const std::string& sid);

/// Returns the value of the "height" attribute of the bounding box for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the value of the "height" attribute of the bounding box for this LineEnding, or @c 0.0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const double getLineEndingBoundingBoxHeight(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// Sets the value of the "height" attribute of the bounding box for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @param height a double to use as the value of the "height" attribute of the bounding box for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingBoundingBoxHeight(SBMLDocument* document, const std::string& sid, double height);

/// Sets the value of the "height" attribute of the bounding box for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @param height a double to use as the value of the "height" attribute of the bounding box for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingBoundingBoxHeight(SBMLDocument* document, unsigned int renderIndex, const std::string& sid, double height);

/// Returns the value of the "group" element of the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the value of the "group" element of this LineEnding as a RenderGroup, or @c NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN RenderGroup* getLineEndingRenderGroup(SBMLDocument* document, const std::string& sid);

/// Returns the value of the "group" element of the LineEnding with the given identifier in the render information base with the givne index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return the value of the "group" element of this LineEnding as a RenderGroup, or @c NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN RenderGroup* getLineEndingRenderGroup(SBMLDocument* document, unsigned int renderIndex, const std::string& sid);

/// @brief Predicates returning @c true if the "stroke" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param sid a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "stroke" attribute of the RenderGroup for this LineEnding object is set, @c false if either the "stroke"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingStrokeColor(SBMLDocument* document, const std::string& id);

/// @brief Predicates returning @c true if the "stroke" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "stroke" attribute of the RenderGroup for this LineEnding object is set, @c false if either the "stroke"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingStrokeColor(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Returns the value of the "stroke" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the "stroke" attribute of the RenderGroup for this LineEnding object, or @c NULL if the object is @c NULL.
LIBSBMLNETWORK_EXTERN const std::string getLineEndingStrokeColor(SBMLDocument* document, const std::string& id);

/// @brief Returns the value of the "stroke" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the "stroke" attribute of the RenderGroup for this LineEnding object, or @c NULL if the object is @c NULL.
LIBSBMLNETWORK_EXTERN const std::string getLineEndingStrokeColor(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param stroke a string to use as the value of the "stroke" attribute of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingStrokeColor(SBMLDocument* document, const std::string& id, const std::string& stroke);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param stroke a string to use as the value of the "stroke" attribute of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingStrokeColor(SBMLDocument* document, unsigned int renderIndex, const std::string& id, const std::string& stroke);

/// @brief Predicates returning @c true if the "stroke-width" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "stroke-width" attribute of the RenderGroup for this LineEnding object is set, @c false if either the "stroke-width"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingStrokeWidth(SBMLDocument* document, const std::string& id);

/// @brief Predicates returning @c true if the "stroke-width" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "stroke-width" attribute of the RenderGroup for this LineEnding object is set, @c false if either the "stroke-width"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingStrokeWidth(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Returns the value of the "stroke-width" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the "stroke-width" attribute of the RenderGroup for this LineEnding object, or @c NULL if the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getLineEndingStrokeWidth(SBMLDocument* document, const std::string& id);

/// @brief Returns the value of the "stroke-width" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the "stroke-width" attribute of the RenderGroup for this LineEnding object, or @c NULL if the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getLineEndingStrokeWidth(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Sets the value of the "stroke-width" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param strokeWidth a double to use as the value of the "stroke-width" attribute of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingStrokeWidth(SBMLDocument* document, const std::string& id, double strokeWidth);

/// @brief Sets the value of the "stroke-width" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param strokeWidth a double to use as the value of the "stroke-width" attribute of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingStrokeWidth(SBMLDocument* document, unsigned int renderIndex, const std::string& id, double strokeWidth);

/// @brief Predicates returning @c true if the "stroke-dasharray" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "stroke-dasharray" attribute of the RenderGroup for this LineEnding object is set, @c false if either the "stroke-dasharray"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingStrokeDashArray(SBMLDocument* document, const std::string& id);

/// @brief Predicates returning @c true if the "stroke-dasharray" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "stroke-dasharray" attribute of the RenderGroup for this LineEnding object is set, @c false if either the "stroke-dasharray"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingStrokeDashArray(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Returns the value of the "stroke-dasharray" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the "stroke-dasharray" attribute of the RenderGroup for this LineEnding object, or @c NULL if the object is @c NULL.
const std::vector<unsigned int> getLineEndingStrokeDashArray(SBMLDocument* document, const std::string& id);

/// @brief Returns the value of the "stroke-dasharray" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the "stroke-dasharray" attribute of the RenderGroup for this LineEnding object, or @c NULL if the object is @c NULL.
const std::vector<unsigned int> getLineEndingStrokeDashArray(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Sets the value of the "stroke-dasharray" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param strokeDashArray a vector of unsigned integers to use as the value of the "stroke-dasharray" attribute of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingStrokeDashArray(SBMLDocument* document, const std::string& id, const std::vector<unsigned int>& strokeDashArray);

/// @brief Sets the value of the "stroke-dasharray" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param strokeDashArray a vector of unsigned integers to use as the value of the "stroke-dasharray" attribute of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingStrokeDashArray(SBMLDocument* document, unsigned int renderIndex, const std::string& id, const std::vector<unsigned int>& strokeDashArray);

/// @brief Returns the size of the "stroke-dasharray" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the size of the "stroke-dasharray" attribute of the RenderGroup for this LineEnding object, or @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN unsigned int getNumLineEndingStrokeDashes(SBMLDocument* document, const std::string& id);

/// @brief Returns the size of the "stroke-dasharray" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the size of the "stroke-dasharray" attribute of the RenderGroup for this LineEnding object, or @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN unsigned int getNumLineEndingStrokeDashes(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Returns the stroke dash at the given index of the 'stroke-dasharray' attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param dashIndex an unsigned int representing the index of the stroke dash to retrieve.
/// @return the stroke dash at the given index of "stroke-dasharray" attribute of the RenderGroup for this LineEnding object, @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN unsigned int getLineEndingStrokeDash(SBMLDocument* document, const std::string& id, unsigned int dashIndex = 0);

/// @brief Returns the stroke dash at the given index of the 'stroke-dasharray' attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param dashIndex an unsigned int representing the index of the stroke dash to retrieve.
/// @return the stroke dash at the given index of "stroke-dasharray" attribute of the RenderGroup for this LineEnding object, @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN unsigned int getLineEndingStrokeDash(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int dashIndex = 0);

/// @brief Sets the first dash of the 'stroke-dasharray' attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param dash a unsigned int value to use as the first dash of the 'stroke-dasharray' attribute of of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingStrokeDash(SBMLDocument* document, const std::string& id, unsigned int dash);

/// @brief Sets the first dash of the 'stroke-dasharray' attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param dash a unsigned int value to use as the first dash of the 'stroke-dasharray' attribute of of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingStrokeDash(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int dash);

/// @brief Sets the dash at the given index of the 'stroke-dasharray' attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param dashIndex an unsigned int representing the index of the stroke dash to retrieve.
/// @param dash a unsigned int value to use as the dash at the given index of the 'stroke-dasharray' attribute of of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingStrokeDash(SBMLDocument* document, const std::string& id, unsigned int dashIndex, unsigned int dash);

/// @brief Sets the dash at the given index of the 'stroke-dasharray' attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param dashIndex an unsigned int representing the index of the stroke dash to retrieve.
/// @param dash a unsigned int value to use as the dash at the given index of the 'stroke-dasharray' attribute of of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingStrokeDash(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int dashIndex, unsigned int dash);

/// @brief Predicates returning @c true if the "fill" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "fill" attribute of the RenderGroup for this LineEnding object is set, @c false if either the "fill"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingFillColor(SBMLDocument* document, const std::string& id);

/// @brief Predicates returning @c true if the "fill" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "fill" attribute of the RenderGroup for this LineEnding object is set, @c false if either the "fill"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingFillColor(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Returns the value of the "fill" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the "fill" attribute of the RenderGroup for this LineEnding object, or @c NULL if the object is @c NULL.
LIBSBMLNETWORK_EXTERN const std::string getLineEndingFillColor(SBMLDocument* document, const std::string& id);

/// @brief Returns the value of the "fill" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the "fill" attribute of the RenderGroup for this LineEnding object, or @c NULL if the object is @c NULL.
LIBSBMLNETWORK_EXTERN const std::string getLineEndingFillColor(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Sets the value of the "fill" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param fill a string to use as the value of the "fill" attribute of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingFillColor(SBMLDocument* document, const std::string& id, const std::string& fill);

/// @brief Sets the value of the "fill" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param fill a string to use as the value of the "fill" attribute of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingFillColor(SBMLDocument* document, unsigned int renderIndex, const std::string& id, const std::string& fill);

/// @brief Predicates returning @c true if the "fill-rule" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "fill-rule" attribute of the RenderGroup for this LineEnding object is set, @c false if either the "fill-rule"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingFillRule(SBMLDocument* document, const std::string& id);

/// @brief Predicates returning @c true if the "fill-rule" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return @c true if the "fill-rule" attribute of the RenderGroup for this LineEnding object is set, @c false if either the "fill-rule"
/// attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingFillRule(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Returns the value of the "fill-rule" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the "fill-rule" attribute of the RenderGroup for this LineEnding object, or @c NULL if the object is @c NULL.
LIBSBMLNETWORK_EXTERN const std::string getLineEndingFillRule(SBMLDocument* document, const std::string& id);

/// @brief Returns the value of the "fill-rule" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the "fill-rule" attribute of the RenderGroup for this LineEnding object, or @c NULL if the object is @c NULL.
LIBSBMLNETWORK_EXTERN const std::string getLineEndingFillRule(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Sets the value of the "fill-rule" attribute of the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param fillRule a string to use as the value of the "fill-rule" attribute of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingFillRule(SBMLDocument* document, const std::string& id, const std::string& fillRule);

/// @brief Sets the value of the "fill-rule" attribute of the RenderGroup for the LineEnding with the given identifier in the render information base with the given index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param fillRule a string to use as the value of the "fill-rule" attribute of the RenderGroup for this LineEnding object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingFillRule(SBMLDocument* document, unsigned int renderIndex, const std::string& id, const std::string& fillRule);

/// @brief Returns number of Transformation2D objects in the RenderGroup for the LineEnding with the given identifier
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the number of Transformation2D objects in the RenderGroup for this LineEnding object, or @c 0 if the object is @c NULL.
LIBSBMLNETWORK_EXTERN unsigned int getNumLineEndingGeometricShapes(SBMLDocument* document, const std::string& id);

/// @brief Returns number of Transformation2D objects in the RenderGroup for the LineEnding with the given identifier in the render information base with the given index
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @return the number of Transformation2D objects in the RenderGroup for this LineEnding object, or @c 0 if the object is @c NULL.
LIBSBMLNETWORK_EXTERN unsigned int getNumLineEndingGeometricShapes(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the LineEnding object of the RenderInformationBase object with the given index of the SBML document is of type Rectangle.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup for this LineEnding object is of type Rectangle, @c false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingRectangle(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the LineEnding object of the RenderInformationBase object with the given index of the SBML document is of type Rectangle.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup for this LineEnding object is of type Rectangle, @c false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingRectangle(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the LineEnding object of the RenderInformationBase object with the given index of the SBML document is of type Ellipse.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup for this LineEnding object is of type Ellipse, @c false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingEllipse(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the LineEnding object of the RenderInformationBase object with the given index of the SBML document is of type Ellipse.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup for this LineEnding object is of type Ellipse, @c false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingEllipse(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the LineEnding object of the RenderInformationBase object with the given index of the SBML document is of type Polygon.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup for this LineEnding object is of type Polygon, @c false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingPolygon(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the LineEnding object of the RenderInformationBase object with the given index of the SBML document is of type Polygon.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup for this LineEnding object is of type Polygon, @c false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingPolygon(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the LineEnding object of the RenderInformationBase object with the given index of the SBML document is of type Image.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup for this LineEnding object is of type Image, @c false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingImage(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the LineEnding object of the RenderInformationBase object with the given index of the SBML document is of type Image.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup for this LineEnding object is of type Image, @c false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingImage(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the LineEnding object of the RenderInformationBase object with the given index of the SBML document is of type RenderCurve.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup for this LineEnding object is of type RenderCurve, @c false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingRenderCurve(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the LineEnding object of the RenderInformationBase object with the given index of the SBML document is of type RenderCurve.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup for this LineEnding object is of type RenderCurve, @c false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingRenderCurve(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the LineEnding object of the RenderInformationBase object with the given index of the SBML document is of type Text.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup for this LineEnding object is of type Text, @c false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingText(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the LineEnding object of the RenderInformationBase object with the given index of the SBML document is of type Text.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup for this LineEnding object is of type Text, @c false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingText(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the X coordinate of the geometric shape for the LineEnding with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to check.
/// @return true if the X coordinate is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeX(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the X coordinate of the geometric shape for the LineEnding with the given identifier and render index is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to check.
/// @return true if the X coordinate is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeX(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the X coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the X coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeX(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the X coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the X coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeX(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the X coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the X coordinate as a double, or \c 0 if the object is \c NULL.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeXAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the X coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the X coordinate as a double, or \c 0 if the object is \c NULL.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeXAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Sets the X coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param x the new X coordinate as a RelAbsVector.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeX(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, const RelAbsVector& x);

/// @brief Sets the X coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param x the new X coordinate as a RelAbsVector.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeX(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& x);

/// @brief Sets the X coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param x the new X coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeXAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, const double& x);

/// @brief Sets the X coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param x the new X coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeXAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, const double& x);

/// @brief Checks if the Y coordinate of the geometric shape for the LineEnding with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to check.
/// @return true if the Y coordinate is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeY(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the Y coordinate of the geometric shape for the LineEnding with the given identifier and render index is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to check.
/// @return true if the Y coordinate is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeY(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the Y coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the Y coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeY(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the Y coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the Y coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeY(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the Y coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the Y coordinate as a double, or \c 0 if the object is \c NULL.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeYAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the Y coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the Y coordinate as a double, or \c 0 if the object is \c NULL.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeYAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Sets the Y coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param y the new Y coordinate as a RelAbsVector.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeY(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& y);

/// @brief Sets the Y coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param y the new Y coordinate as a RelAbsVector.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeY(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& y);

/// @brief Sets the Y coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param y the new Y coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeYAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, const double& y);

/// @brief Sets the Y coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param y the new Y coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeYAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, const double& y);

/// @brief Checks if the width of the geometric shape for the LineEnding with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to check.
/// @return true if the width is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeWidth(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the width of the geometric shape for the LineEnding with the given identifier and render index is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to check.
/// @return true if the width is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeWidth(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the width of the geometric shape for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the width as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeWidth(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the width of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the width as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeWidth(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the width of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the width as a double, or \c 0 if the object is \c NULL.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeWidthAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the width of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the width as a double, or \c 0 if the object is \c NULL.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeWidthAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Sets the width of the geometric shape for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param width the new width as a RelAbsVector.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeWidth(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& width);

/// @brief Sets the width of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param width the new width as a RelAbsVector.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeWidth(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& width);

/// @brief Sets the width of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param width the new width as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeWidthAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, const double& width);

/// @brief Sets the width of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param width the new width as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeWidthAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, const double& width);

/// @brief Checks if the height of the geometric shape for the LineEnding with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to check.
/// @return true if the height is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeHeight(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the height of the geometric shape for the LineEnding with the given identifier and render index is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to check.
/// @return true if the height is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeHeight(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the height of the geometric shape for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the height as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeHeight(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the height of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the height as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeHeight(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the height of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the height as a double, or \c 0 if the object is \c NULL.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeHeightAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the height of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to retrieve.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the height as a double, or \c 0 if the object is \c NULL.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeHeightAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Sets the height of the geometric shape for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param height the new height as a RelAbsVector.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeHeight(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& height);

/// @brief Sets the height of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param height the new height as a RelAbsVector.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeHeight(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& height);

/// @brief Sets the height of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param height the new height as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeHeightAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, const double& height);

/// @brief Sets the height of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param height the new height as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeHeightAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, const double& height);
/// @brief Checks if the ratio of the geometric shape for the LineEnding with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return true if the ratio is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeRatio(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the ratio of the geometric shape for the LineEnding with the given identifier and render index is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return true if the ratio is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeRatio(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the ratio of the geometric shape for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the ratio as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeRatio(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the ratio of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the ratio as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeRatio(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the ratio of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the ratio as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeRatioAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the ratio of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the ratio as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeRatioAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Sets the ratio of the geometric shape for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param ratio the new ratio as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeRatio(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, double ratio);

/// @brief Sets the ratio of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param ratio the new ratio as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeRatio(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, double ratio);

/// @brief Checks if the X curvature radius of the geometric shape corner for the LineEnding with the given identifier is set.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return true if the X curvature radius is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the X curvature radius of the geometric shape corner for the LineEnding with the given identifier and render index is set.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return true if the X curvature radius is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the X curvature radius of the geometric shape corner for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the X curvature radius as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the X curvature radius of the geometric shape corner for the LineEnding with the given identifier and render index.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the X curvature radius as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the X curvature radius of the geometric shape corner for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the X curvature radius as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the X curvature radius of the geometric shape corner for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the X curvature radius as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Sets the X curvature radius of the geometric shape corner for the LineEnding with the given identifier.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param CornerCurvatureRadiusX the new X curvature radius as a RelAbsVector.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& CornerCurvatureRadiusX);

/// @brief Sets the X curvature radius of the geometric shape corner for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param CornerCurvatureRadiusX The new X curvature radius as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& CornerCurvatureRadiusX);

/// @brief Sets the X curvature radius of the geometric shape corner for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param CornerCurvatureRadiusX the new X curvature radius as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, const double& CornerCurvatureRadiusX);

/// @brief Sets the X curvature radius of the geometric shape corner for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param CornerCurvatureRadiusX the new X curvature radius as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, const double& CornerCurvatureRadiusX);

/// @brief Checks if the Y curvature radius of the geometric shape corner for the LineEnding with the given identifier is set.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return True if the Y curvature radius is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the Y curvature radius of the geometric shape corner for the LineEnding with the given identifier and render index is set.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return True if the Y curvature radius is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the Y curvature radius of the geometric shape corner for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The Y curvature radius as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the Y curvature radius of the geometric shape corner for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The Y curvature radius as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the Y curvature radius of the geometric shape corner for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the Y curvature radius as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the Y curvature radius of the geometric shape corner for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the Y curvature radius as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Sets the Y curvature radius of the geometric shape corner for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param CornerCurvatureRadiusY The new Y curvature radius as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& CornerCurvatureRadiusY);

/// @brief Sets the Y curvature radius of the geometric shape corner for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param CornerCurvatureRadiusY The new Y curvature radius as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& CornerCurvatureRadiusY);

/// @brief Sets the Y curvature radius of the geometric shape corner for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param CornerCurvatureRadiusY the new Y curvature radius as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, const double& CornerCurvatureRadiusY);

/// @brief Sets the Y curvature radius of the geometric shape corner for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param CornerCurvatureRadiusY the new Y curvature radius as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, const double& CornerCurvatureRadiusY);

/// @brief Checks if the center X coordinate of the geometric shape for the LineEnding with the given identifier is set.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return True if the center X coordinate is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeCenterX(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the center X coordinate of the geometric shape for the LineEnding with the given identifier and render index is set.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return True if the center X coordinate is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeCenterX(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the center X coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The center X coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeCenterX(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the center X coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The center X coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeCenterX(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the center X coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the center X coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeCenterXAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the center X coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the center X coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeCenterXAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Sets the center X coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param centerX The new center X coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCenterX(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& centerX);

/// @brief Sets the center X coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param centerX The new center X coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCenterX(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& centerX);

/// @brief Sets the center X coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param centerX the new center X coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCenterXAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, const double& centerX);

/// @brief Sets the center X coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param centerX the new center X coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCenterXAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, const double& centerX);

/// @brief Checks if the center Y coordinate of the geometric shape for the LineEnding with the given identifier is set.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return True if the center Y coordinate is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeCenterY(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the center Y coordinate of the geometric shape for the LineEnding with the given identifier and render index is set.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return True if the center Y coordinate is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeCenterY(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the center Y coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The center Y coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeCenterY(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the center Y coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The center Y coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeCenterY(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the center Y coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the center Y coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeCenterYAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the center Y coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the center Y coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeCenterYAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Sets the center Y coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param centerY The new center Y coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCenterY(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& centerY);

/// @brief Sets the center Y coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param centerY The new center Y coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCenterY(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& centerY);

/// @brief Sets the center Y coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param centerY the new center Y coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCenterYAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, const double& centerY);

/// @brief Sets the center Y coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param centerY the new center Y coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeCenterYAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, const double& centerY);

/// @brief Checks if the radius X of the geometric shape for the LineEnding with the given identifier is set.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return True if the radius X is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeRadiusX(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the radius X of the geometric shape for the LineEnding with the given identifier and render index is set.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return True if the radius X is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeRadiusX(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the X radius of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The X radius as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeRadiusX(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the X radius of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The X radius as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeRadiusX(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the X radius of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the X radius as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeRadiusXAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the X radius of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the X radius as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeRadiusXAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Sets the X radius of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param radiusX The new X radius as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeRadiusX(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& radiusX);

/// @brief Sets the X radius of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param radiusX The new X radius as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeRadiusX(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& radiusX);

/// @brief Sets the X radius of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param radiusX the new X radius as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeRadiusXAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, const double& radiusX);

/// @brief Sets the X radius of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param radiusX the new X radius as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeRadiusXAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, const double& radiusX);

/// @brief Checks if the Y radius of the geometric shape for the LineEnding with the given identifier is set.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return True if the Y radius is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeRadiusY(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the Y radius of the geometric shape for the LineEnding with the given identifier and render index is set.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return True if the Y radius is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeRadiusY(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the Y radius of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The Y radius as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeRadiusY(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the Y radius of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The Y radius as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeRadiusY(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the Y radius of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the Y radius as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeRadiusYAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Returns the Y radius of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @return the Y radius as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeRadiusYAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Sets the Y radius of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param radiusY The new Y radius as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeRadiusY(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& radiusY);

/// @brief Sets the Y radius of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param radiusY The new Y radius as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeRadiusY(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, const RelAbsVector& radiusY);

/// @brief Sets the Y radius of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param radiusY the new Y radius as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeRadiusYAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, const double& radiusY);

/// @brief Sets the Y radius of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param radiusY the new Y radius as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeRadiusYAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, const double& radiusY);

/// @brief Gets the number of elements in the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The number of elements as an unsigned int.
LIBSBMLNETWORK_EXTERN const unsigned int getLineEndingGeometricShapeNumElements(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the number of elements in the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The number of elements as an unsigned int.
LIBSBMLNETWORK_EXTERN const unsigned int getLineEndingGeometricShapeNumElements(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the geometric shape element for the LineEnding with the given identifier is a CubicBezier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @param elementIndex An unsigned int representing the index of the element.
/// @return True if the element is a CubicBezier, false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingGeometricShapeElementCubicBezier(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Checks if the geometric shape element for the LineEnding with the given identifier and render index is a CubicBezier.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @param elementIndex An unsigned int representing the index of the element.
/// @return True if the element is a CubicBezier, false otherwise.
LIBSBMLNETWORK_EXTERN bool isLineEndingGeometricShapeElementCubicBezier(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Gets the X coordinate of the geometric shape element for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @param elementIndex An unsigned int representing the index of the element.
/// @return The X coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeElementX(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Gets the X coordinate of the geometric shape element for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @param elementIndex An unsigned int representing the index of the element.
/// @return The X coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeElementX(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the X coordinate of the geometric shape element for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @param elementIndex an unsigned int representing the index of the element.
/// @return the X coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeElementXAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the X coordinate of the geometric shape element for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @param elementIndex an unsigned int representing the index of the element.
/// @return the X coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeElementXAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the X coordinate of the geometric shape element for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex An unsigned int representing the index of the element to modify.
/// @param x The new X coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeElementX(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the X coordinate of the geometric shape element for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex An unsigned int representing the index of the element to modify.
/// @param x The new X coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeElementX(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the X coordinate of the geometric shape element for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex an unsigned int representing the index of the element to modify.
/// @param x the new X coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeElementXAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& x);

/// @brief Sets the X coordinate of the geometric shape element for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex an unsigned int representing the index of the element to modify.
/// @param x the new X coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeElementXAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& x);

/// @brief Gets the Y coordinate of the geometric shape element for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @param elementIndex An unsigned int representing the index of the element.
/// @return The Y coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeElementY(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Gets the Y coordinate of the geometric shape element for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @param elementIndex An unsigned int representing the index of the element.
/// @return The Y coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeElementY(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the Y coordinate of the geometric shape element for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @param elementIndex an unsigned int representing the index of the element.
/// @return the Y coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeElementYAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the Y coordinate of the geometric shape element for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape.
/// @param elementIndex an unsigned int representing the index of the element.
/// @return the Y coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeElementYAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the Y coordinate of the geometric shape element for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex An unsigned int representing the index of the element to modify.
/// @param y The new Y coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeElementY(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the Y coordinate of the geometric shape element for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex An unsigned int representing the index of the element to modify.
/// @param y The new Y coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeElementY(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the Y coordinate of the geometric shape element for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex an unsigned int representing the index of the element to modify.
/// @param y the new Y coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeElementYAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& y);

/// @brief Sets the Y coordinate of the geometric shape element for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex an unsigned int representing the index of the element to modify.
/// @param y the new Y coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeElementYAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& y);

/// @brief Gets the base point 1 X coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex An unsigned int representing the index of the element, defaulting to 0.
/// @return The base point 1 X coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeBasePoint1X(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Gets the base point 1 X coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex An unsigned int representing the index of the element, defaulting to 0.
/// @return The base point 1 X coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeBasePoint1X(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the base point 1 X coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex an unsigned int representing the index of the element, defaulting to 0.
/// @return the base point 1 X coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the base point 1 X coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex an unsigned int representing the index of the element, defaulting to 0.
/// @return the base point 1 X coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the base point 1 X coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex An unsigned int representing the index of the element to modify.
/// @param basePoint1X The new base point 1 X coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint1X(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& basePoint1X);

/// @brief Sets the base point 1 X coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex An unsigned int representing the index of the element to modify.
/// @param basePoint1X The new base point 1 X coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint1X(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& basePoint1X);

/// @brief Sets the base point 1 X coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex an unsigned int representing the index of the element to modify.
/// @param basePoint1X the new base point 1 X coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& basePoint1X);

/// @brief Sets the base point 1 X coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex an unsigned int representing the index of the element to modify.
/// @param basePoint1X the new base point 1 X coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& basePoint1X);

/// @brief Gets the base point 1 Y coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex An unsigned int representing the index of the element, defaulting to 0.
/// @return The base point 1 Y coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeBasePoint1Y(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Gets the base point 1 Y coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex An unsigned int representing the index of the element, defaulting to 0.
/// @return The base point 1 Y coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeBasePoint1Y(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the base point 1 Y coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex an unsigned int representing the index of the element, defaulting to 0.
/// @return the base point 1 Y coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the base point 1 Y coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex an unsigned int representing the index of the element, defaulting to 0.
/// @return the base point 1 Y coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the base point 1 Y coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex An unsigned int representing the index of the element to modify.
/// @param basePoint1Y The new base point 1 Y coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint1Y(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& basePoint1Y);

/// @brief Sets the base point 1 Y coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex An unsigned int representing the index of the element to modify.
/// @param basePoint1Y The new base point 1 Y coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint1Y(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& basePoint1Y);

/// @brief Sets the base point 1 Y coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex an unsigned int representing the index of the element to modify.
/// @param basePoint1Y the new base point 1 Y coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& basePoint1Y);

/// @brief Sets the base point 1 Y coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex an unsigned int representing the index of the element to modify.
/// @param basePoint1Y the new base point 1 Y coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).

LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& basePoint1Y);
/// @brief Gets the base point 2 X coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex An unsigned int representing the index of the element, defaulting to 0.
/// @return The base point 2 X coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeBasePoint2X(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Gets the base point 2 X coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex An unsigned int representing the index of the element, defaulting to 0.
/// @return The base point 2 X coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeBasePoint2X(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the base point 2 X coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex an unsigned int representing the index of the element, defaulting to 0.
/// @return the base point 2 X coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the base point 2 X coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex an unsigned int representing the index of the element, defaulting to 0.
/// @return the base point 2 X coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the base point 2 X coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex An unsigned int representing the index of the element to modify.
/// @param basePoint2X The new base point 2 X coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint2X(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& basePoint2X);

/// @brief Sets the base point 2 X coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex An unsigned int representing the index of the element to modify.
/// @param basePoint2X The new base point 2 X coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint2X(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& basePoint2X);

/// @brief Sets the base point 2 X coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex an unsigned int representing the index of the element to modify.
/// @param basePoint2X the new base point 2 X coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& basePoint2X);

/// @brief Sets the base point 2 X coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex an unsigned int representing the index of the element to modify.
/// @param basePoint2X the new base point 2 X coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& basePoint2X);

/// @brief Gets the base point 2 Y coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex An unsigned int representing the index of the element, defaulting to 0.
/// @return The base point 2 Y coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeBasePoint2Y(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Gets the base point 2 Y coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex An unsigned int representing the index of the element, defaulting to 0.
/// @return The base point 2 Y coordinate as a RelAbsVector.
LIBSBMLNETWORK_EXTERN const RelAbsVector getLineEndingGeometricShapeBasePoint2Y(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the base point 2 Y coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex an unsigned int representing the index of the element, defaulting to 0.
/// @return the base point 2 Y coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the base point 2 Y coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape, defaulting to 0.
/// @param elementIndex an unsigned int representing the index of the element, defaulting to 0.
/// @return the base point 2 Y coordinate as a double.
LIBSBMLNETWORK_EXTERN const double getLineEndingGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the base point 2 Y coordinate of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex An unsigned int representing the index of the element to modify.
/// @param basePoint2Y The new base point 2 Y coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint2Y(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& basePoint2Y);

/// @brief Sets the base point 2 Y coordinate of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex An unsigned int representing the index of the element to modify.
/// @param basePoint2Y The new base point 2 Y coordinate as a RelAbsVector.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint2Y(SBMLDocument* document, unsigned int renderIndex, const std::string& id,  unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& basePoint2Y);

/// @brief Sets the base point 2 Y coordinate of the geometric shape for the LineEnding with the given identifier as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex an unsigned int representing the index of the element to modify.
/// @param basePoint2Y the new base point 2 Y coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& basePoint2Y);

/// @brief Sets the base point 2 Y coordinate of the geometric shape for the LineEnding with the given identifier and render index as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id a string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex an unsigned int representing the index of the geometric shape to modify.
/// @param elementIndex an unsigned int representing the index of the element to modify.
/// @param basePoint2Y the new base point 2 Y coordinate as a double.
/// @return an integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& basePoint2Y);

/// @brief Checks if the Href attribute of the geometric shape for the LineEnding with the given identifier is set.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return True if the Href attribute is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeHref(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Checks if the Href attribute of the geometric shape for the LineEnding with the given identifier and render index is set.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return True if the Href attribute is set, false otherwise.
LIBSBMLNETWORK_EXTERN bool isSetLineEndingGeometricShapeHref(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the Href attribute of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The Href attribute as a string.
LIBSBMLNETWORK_EXTERN const std::string getLineEndingGeometricShapeHref(SBMLDocument* document, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Gets the Href attribute of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape.
/// @return The Href attribute as a string.
LIBSBMLNETWORK_EXTERN const std::string getLineEndingGeometricShapeHref(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex = 0);

/// @brief Sets the Href attribute of the geometric shape for the LineEnding with the given identifier.
/// @param document A pointer to the SBMLDocument object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param href The new Href attribute as a string.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeHref(SBMLDocument* document, const std::string& id,  unsigned int geometricShapeIndex, const std::string& href);

/// @brief Sets the Href attribute of the geometric shape for the LineEnding with the given identifier and render index.
/// @param document A pointer to the SBMLDocument object.
/// @param renderIndex The index number of the RenderInformationBase object.
/// @param id A string representing the identifier of the LineEnding to modify.
/// @param geometricShapeIndex An unsigned int representing the index of the geometric shape to modify.
/// @param href The new Href attribute as a string.
/// @return An integer indicating success (0) or failure (non-zero).
LIBSBMLNETWORK_EXTERN int setLineEndingGeometricShapeHref(SBMLDocument* document, unsigned int renderIndex, const std::string& id, unsigned int geometricShapeIndex, const std::string& href);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one that matches this GraphicalObject attributes
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyle(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Searches among the local styles of the first render information base in the SBML document and returns one that matches this GraphicalObject attributes
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getLocalStyle(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Searches among the global styles of the first render information base in the SBML document and returns one that matches this GraphicalObject attributes
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getGlobalStyle(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Creates a new Style object with the given GraphicalObject attributes and adds it to the styles of the first local render information in the SBML document
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the created Style object.
LIBSBMLNETWORK_EXTERN Style* createLocalStyle(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Creates a new Style object with the given GraphicalObject attributes and adds it to the styles of the first local render information in the SBML document for this TextGlyph object
/// @param document a pointer to the SBMLDocument object.
/// @param textGlyph a pointer to the TextGlyph object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the created Style object.
LIBSBMLNETWORK_EXTERN Style* createLocalStyle(SBMLDocument* document, TextGlyph* textGlyph, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one that matches this GraphicalObject attributes
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyle(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// @brief Searches among the local styles of the render information base with the given index of the SBML document and returns one that matches this GraphicalObject attributes
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getLocalStyle(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// @brief Searches among the global styles of the render information base with the given index of the SBML document and returns one that matches this GraphicalObject attributes
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getGlobalStyle(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// @brief Creates a new Style object with the given GraphicalObject attributes and adds it to the styles of the local render information with the given index in the SBML document
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the created Style object.
LIBSBMLNETWORK_EXTERN Style* createLocalStyle(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one that matches this attribute (id, role, type) of a GraphicalObject
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyle(SBMLDocument* document, const std::string& attribute);

/// @brief Searches among the local styles of the first render information base in the SBML document and returns one that matches this attribute (id, role, type) of a GraphicalObject
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getLocalStyle(SBMLDocument* document, const std::string& attribute);

/// @brief Searches among the global styles of the first render information base in the SBML document and returns one that matches this attribute (id, role, type) of a GraphicalObject
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getGlobalStyle(SBMLDocument* document, const std::string& attribute);

/// @brief Creates a new Style object with the given attribute and adds it to the styles of the first local render information in the SBML document
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the created Style object.
LIBSBMLNETWORK_EXTERN Style* createLocalStyle(SBMLDocument* document, const std::string& attribute);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one that matches this attribute (id, role, type) of a GraphicalObject
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyle(SBMLDocument* document, unsigned int renderIndex, const std::string& attribute);

/// @brief Searches among the local styles of the render information base with the given index of the SBML document and returns one that matches this attribute (id, role, type) of a GraphicalObject
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getLocalStyle(SBMLDocument* document, unsigned int renderIndex, const std::string& attribute);

/// @brief Searches among the global styles of the render information base with the given index of the SBML document and returns one that matches this attribute (id, role, type) of a GraphicalObject
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getGlobalStyle(SBMLDocument* document, unsigned int renderIndex, const std::string& attribute);

/// @brief Creates a new Style object with the given attribute and adds it to the styles of the local render information with the given index in the SBML document
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the created Style object.
LIBSBMLNETWORK_EXTERN Style* createLocalStyle(SBMLDocument* document, unsigned int renderIndex, const std::string& attribute);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one contains the "id" in its idlist.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyleById(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one contains the "id" in its idlist.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyleById(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one contains the "id" in its idlist.
/// @param document a pointer to the SBMLDocument object.
/// @param id the id attribute of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyleById(SBMLDocument* document, const std::string& id);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one contains the "id" in its idlist.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param id the id attribute of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyleById(SBMLDocument* document, unsigned int renderIndex, const std::string& id);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one contains the "role" in its rolelist.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyleByRole(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one contains the "role" in its rolelist.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyleByRole(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one contains the "role" in its rolelist.
/// @param document a pointer to the SBMLDocument object.
/// @param role the role attribute of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyleByRole(SBMLDocument* document, const std::string& role);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one contains the "role" in its rolelist.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param role the role attribute of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyleByRole(SBMLDocument* document, unsigned int renderIndex, const std::string& role);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one contains the "type" in its typelist.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyleByType(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one contains the "type" in its typelist.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyleByType(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// @brief Searches among the styles of the first render information base in the SBML document and returns one contains the "type" in its typelist.
/// @param document a pointer to the SBMLDocument object.
/// @param type the type attribute of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyleByType(SBMLDocument* document, const std::string& type);

/// @brief Searches among the styles of the render information base with the given index of the SBML document and returns one contains the "type" in its typelist.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param type the type attribute of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN Style* getStyleByType(SBMLDocument* document, unsigned int renderIndex, const std::string& type);

/// Returns the value of the "group" element of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the value of the "group" element of the Style for this GraphicalObjet as a RenderGroup, or @c NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN RenderGroup* getRenderGroup(SBMLDocument* document, GraphicalObject* graphicalObject);

/// Returns the value of the "group" element of the Style for this GraphicalObject in the render information base with the givne index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the value of the "group" element of the Style for this GraphicalObjet as a RenderGroup, or @c NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN RenderGroup* getRenderGroup(SBMLDocument* document, unsigned int renderIndex, GraphicalObject* graphicalObject);

/// Returns the value of the "group" element of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN RenderGroup* getRenderGroup(SBMLDocument* document, const std::string& attribute);

/// Returns the value of the "group" element of the Style that matches this attribute (id, role, type) of a GraphicalObject in the render information base with the givne index of the SBML document.
/// @param document a pointer to the SBMLDocument object.
/// @param renderIndex the index number of the RenderInformationBase object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return a pointer to the found Style object.
LIBSBMLNETWORK_EXTERN RenderGroup* getRenderGroup(SBMLDocument* document, unsigned int renderIndex, const std::string& attribute);

/// @brief Predicates returning @c true if the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetStrokeColor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetStrokeColor(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getStrokeColor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getStrokeColor(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param stroke a string value to use as the value of the "stroke" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStrokeColor(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& stroke);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param stroke a string value to use as the value of the "stroke" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStrokeColor(SBMLDocument* document, const std::string& attribute, const std::string& stroke);

LIBSBMLNETWORK_EXTERN const std::string getCompartmentStrokeColor(SBMLDocument* document);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param stroke a string value to use as the value of the "stroke" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentStrokeColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& stroke);

LIBSBMLNETWORK_EXTERN const std::string getSpeciesStrokeColor(SBMLDocument* document);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param stroke a string value to use as the value of the "stroke" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesStrokeColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& stroke);

LIBSBMLNETWORK_EXTERN const std::string getReactionStrokeColor(SBMLDocument* document);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param stroke a string value to use as the value of the "stroke" attribute of the RenderGroup of these Style objects.
/// @param setSpeciesReferenceGlyphs a boolean value to indicate whether to set the "stroke" attribute of the RenderGroup of the Style for SpeciesReferenceGlyph objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionStrokeColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& stroke, bool setSpeciesReferenceGlyphs = true);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of all LineEnding objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param stroke a string value to use as the value of the "stroke" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingStrokeColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& stroke);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param stroke a string value to use as the value of the "stroke" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStrokeColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& stroke);

/// @brief Predicates returning @c true if the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke-width"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetStrokeWidth(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "stroke-width" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke-width"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetStrokeWidth(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c 0.0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const double getStrokeWidth(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "stroke-width" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject, or @c 0.0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN const double getStrokeWidth(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "stroke-width" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param strokeWidth a double value to use as the value of the "stroke-width" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStrokeWidth(SBMLDocument* document, GraphicalObject* graphicalObject, const double& strokeWidth);

/// @brief Sets the value of the "stroke-width" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param strokeWidth a double value to use as the value of the "stroke-width" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStrokeWidth(SBMLDocument* document, const std::string& attribute, const double& strokeWidth);

LIBSBMLNETWORK_EXTERN const double getCompartmentStrokeWidth(SBMLDocument* document);

/// @brief Sets the value of the "stroke-width" attribute of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param strokeWidth a double value to use as the value of the "stroke-width" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentStrokeWidth(SBMLDocument* document, unsigned int layoutIndex, const double& strokeWidth);

LIBSBMLNETWORK_EXTERN const double getSpeciesStrokeWidth(SBMLDocument* document);

/// @brief Sets the value of the "stroke-width" attribute of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param strokeWidth a double value to use as the value of the "stroke-width" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesStrokeWidth(SBMLDocument* document, unsigned int layoutIndex, const double& strokeWidth);

LIBSBMLNETWORK_EXTERN const double getReactionStrokeWidth(SBMLDocument* document);

/// @brief Sets the value of the "stroke-width" attribute of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param strokeWidth a double value to use as the value of the "stroke-width" attribute of the RenderGroup of these Style objects.
/// @param setSpeciesReferenceGlyphs a boolean value to indicate whether to set the "stroke-width" attribute of the RenderGroup of the Style for SpeciesReferenceGlyph objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionStrokeWidth(SBMLDocument* document, unsigned int layoutIndex, const double& strokeWidth, bool setSpeciesReferenceGlyphs = true);

/// @brief Sets the value of the "stroke-width" attribute of the RenderGroup of all LineEnding objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param strokeWidth a double value to use as the value of the "stroke-width" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingStrokeWidth(SBMLDocument* document, unsigned int layoutIndex, const double& strokeWidth);

/// @brief Sets the value of the "stroke-width" attribute of the RenderGroup of the Style for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param strokeWidth a double value to use as the value of the "stroke-width" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStrokeWidth(SBMLDocument* document, unsigned int layoutIndex, const double& strokeWidth);

/// @brief Predicates returning @c true if the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke-dasharray"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetStrokeDashArray(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "stroke-dasharray" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke-dasharray"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetStrokeDashArray(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject object, or an empty vector if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::vector<unsigned int> getStrokeDashArray(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "stroke-dasharray" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject, or an empty vector if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::vector<unsigned int> getStrokeDashArray(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param strokeDashArray a vector to use as the value  of the "stroke-dasharray" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStrokeDashArray(SBMLDocument* document, GraphicalObject* graphicalObject, const std::vector<unsigned int>& strokeDashArray);

/// @brief Sets the value of the "stroke-dasharray" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param strokeDashArray a vector to use as the value  of the "stroke-dasharray" attribute of the the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStrokeDashArray(SBMLDocument* document, const std::string& attribute, const std::vector<unsigned int>& strokeDashArray);

/// @brief Returns the size of the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the size of the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN unsigned int getNumStrokeDashes(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the size of the "stroke-dasharray" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the size of the "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN unsigned int getNumStrokeDashes(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the stroke dash at the given index of the 'stroke-dasharray' attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param dashIndex an unsigned int representing the index of the stroke dash to retrieve.
/// @return the stroke dash at the given index of "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject object, @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN unsigned int getStrokeDash(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int dashIndex = 0);

/// @brief Returns the stroke dash at the given index of the 'stroke-dasharray' attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param dashIndex an unsigned int representing the index of the stroke dash to retrieve.
/// @return the stroke dash at the given index of "stroke-dasharray" attribute of the RenderGroup of the Style for this GraphicalObject, or @c 0 if the object is @c NULL
LIBSBMLNETWORK_EXTERN unsigned int getStrokeDash(SBMLDocument* document, const std::string& attribute, unsigned int dashIndex = 0);

/// @brief Sets the first dash of the 'stroke-dasharray' attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param dash a unsigned int value to use as the first dash of the 'stroke-dasharray' attribute of of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN unsigned int setStrokeDash(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int dash);

/// @brief Sets the dash at the given index of the 'stroke-dasharray' attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param dashIndex an unsigned int representing the index of the stroke dash to retrieve.
/// @param dash a unsigned int value to use as the dash at the given index of the 'stroke-dasharray' attribute of of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN unsigned int setStrokeDash(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int dashIndex, unsigned int dash);

/// @brief Sets the first dash of the 'stroke-dasharray' attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param dash a unsigned int value to use as the first dash of the 'stroke-dasharray' attribute of of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN unsigned int setStrokeDash(SBMLDocument* document, const std::string& attribute, unsigned int dash);

/// @brief Sets the dash at the given index of the 'stroke-dasharray' attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param dashIndex an unsigned int representing the index of the stroke dash to retrieve.
/// @param dash a unsigned int value to use as the dash at the given index of the 'stroke-dasharray' attribute of of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN unsigned int setStrokeDash(SBMLDocument* document, const std::string& attribute, unsigned int dashIndex, unsigned int dash);

/// @brief Predicates returning @c true if the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFontColor(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Predicates returning @c true if the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "stroke"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFontColor(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getFontColor(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getFontColor(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fontColor a string value to use as the value of the "stroke" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontColor(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& fontColor);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fontColor a string value to use as the value of the "stroke" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontColor(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex, const std::string& fontColor);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fontColor a string value to use as the value of the "stroke" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontColor(SBMLDocument* document, const std::string& attribute, const std::string& fontColor);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param fontColor a string value to use as the value of the "stroke" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontColor(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex, const std::string& fontColor);

LIBSBMLNETWORK_EXTERN const std::string getCompartmentFontColor(SBMLDocument* document);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontColor a string value to use as the value of the "stroke" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentFontColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontColor);

LIBSBMLNETWORK_EXTERN const std::string getSpeciesFontColor(SBMLDocument* document);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontColor a string value to use as the value of the "stroke" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesFontColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontColor);

LIBSBMLNETWORK_EXTERN const std::string getReactionFontColor(SBMLDocument* document);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for all ReactionGlyph objects
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontColor a string value to use as the value of the "stroke" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionFontColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontColor);

/// @brief Sets the value of the "stroke" attribute of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontColor a string value to use as the value of the "stroke" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontColor);

/// @brief Predicates returning @c true if the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-family"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFontFamily(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Predicates returning @c true if the "font-family" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-family"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFontFamily(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getFontFamily(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "font-family" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getFontFamily(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Sets the value of the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fontFamily a string value to use as the value of the "font-family" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontFamily(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& fontFamily);

/// @brief Sets the value of the "font-family" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param fontFamily a string value to use as the value of the "font-family" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontFamily(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex, const std::string& fontFamily);

/// @brief Sets the value of the "font-family" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fontFamily a string value to use as the value of the "font-family" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontFamily(SBMLDocument* document, const std::string& attribute, const std::string& fontFamily);

/// @brief Sets the value of the "font-family" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param fontFamily a string value to use as the value of the "font-family" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontFamily(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex, const std::string& fontFamily);

LIBSBMLNETWORK_EXTERN const std::string getCompartmentFontFamily(SBMLDocument* document);

/// @brief Sets the value of the "font-family" attribute of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontFamily a string value to use as the value of the "font-family" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentFontFamily(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontFamily);

LIBSBMLNETWORK_EXTERN const std::string getSpeciesFontFamily(SBMLDocument* document);

/// @brief Sets the value of the "font-family" attribute of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontFamily a string value to use as the value of the "font-family" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesFontFamily(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontFamily);

LIBSBMLNETWORK_EXTERN const std::string getReactionFontFamily(SBMLDocument* document);

/// @brief Sets the value of the "font-family" attribute of the RenderGroup of the Style for all ReactionGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontFamily a string value to use as the value of the "font-family" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionFontFamily(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontFamily);

/// @brief Sets the value of the "font-family" attribute of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontFamily a string value to use as the value of the "font-family" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontFamily(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontFamily);

/// @brief Predicates returning @c true if the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-size"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFontSize(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Predicates returning @c true if the "font-size" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-size"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFontSize(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c RelAbsVector() if the object is @c NULL
LIBSBMLNETWORK_EXTERN const RelAbsVector getFontSize(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "font-size" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if the object is @c NULL
LIBSBMLNETWORK_EXTERN const RelAbsVector getFontSize(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject as a double, or 0.0 if the object is NULL.
LIBSBMLNETWORK_EXTERN const double getFontSizeAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "font-size" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject as a double, or 0.0 if the object is NULL.
LIBSBMLNETWORK_EXTERN const double getFontSizeAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fontSize a RelAbsVector value to use as the value of the "font-size" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontSize(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& fontSize);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param fontSize a RelAbsVector value to use as the value of the "font-size" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontSize(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex, const RelAbsVector& fontSize);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fontSize a RelAbsVector to use as the value of the "font-size" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontSize(SBMLDocument* document, const std::string& attribute, const RelAbsVector& fontSize);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param fontSize a RelAbsVector to use as the value of the "font-size" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontSize(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex, const RelAbsVector& fontSize);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fontSize a double value to use as the value of the "font-size" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontSizeAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& fontSize);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param fontSize a double value to use as the value of the "font-size" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontSizeAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex, const double& fontSize);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fontSize a double value to use as the value of the "font-size" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontSizeAsDouble(SBMLDocument* document, const std::string& attribute, const double& fontSize);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param fontSize a double value to use as the value of the "font-size" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontSizeAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex, const double& fontSize);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentFontSize(SBMLDocument* document);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontSize a RelAbsVector value to use as the value of the "font-size" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentFontSize(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& fontSize);

LIBSBMLNETWORK_EXTERN const double getCompartmentFontSizeAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontSize a double value to use as the value of the "font-size" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentFontSizeAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& fontSize);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesFontSize(SBMLDocument* document);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontSize a RelAbsVector value to use as the value of the "font-size" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesFontSize(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& fontSize);

LIBSBMLNETWORK_EXTERN const double getSpeciesFontSizeAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontSize a double value to use as the value of the "font-size" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesFontSizeAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& fontSize);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionFontSize(SBMLDocument* document);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for all ReactionGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontSize a RelAbsVector value to use as the value of the "font-size" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionFontSize(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& fontSize);

LIBSBMLNETWORK_EXTERN const double getReactionFontSizeAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for all ReactionGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontSize a double value to use as the value of the "font-size" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionFontSizeAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& fontSize);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontSize a RelAbsVector value to use as the value of the "font-size" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontSize(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& fontSize);

/// @brief Sets the value of the "font-size" attribute of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontSize a double value to use as the value of the "font-size" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontSizeAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& fontSize);

/// @brief Predicates returning @c true if the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-weight"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFontWeight(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Predicates returning @c true if the "font-weight" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-weight"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFontWeight(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getFontWeight(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "font-weight" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getFontWeight(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Sets the value of the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fontWeight a string value to use as the value of the "font-weight" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontWeight(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& fontWeight);

/// @brief Sets the value of the "font-weight" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param fontWeight a string value to use as the value of the "font-weight" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontWeight(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex, const std::string& fontWeight);

/// @brief Sets the value of the "font-weight" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fontWeight a string value to use as the value of the "font-weight" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontWeight(SBMLDocument* document, const std::string& attribute, const std::string& fontWeight);

/// @brief Sets the value of the "font-weight" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param fontWeight a string value to use as the value of the "font-weight" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontWeight(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex, const std::string& fontWeight);

LIBSBMLNETWORK_EXTERN const std::string getCompartmentFontWeight(SBMLDocument* document);

/// @brief Sets the value of the "font-weight" attribute of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontWeight a string value to use as the value of the "font-weight" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentFontWeight(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontWeight);

LIBSBMLNETWORK_EXTERN const std::string getSpeciesFontWeight(SBMLDocument* document);

/// @brief Sets the value of the "font-weight" attribute of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontWeight a string value to use as the value of the "font-weight" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesFontWeight(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontWeight);

LIBSBMLNETWORK_EXTERN const std::string getReactionFontWeight(SBMLDocument* document);

/// @brief Sets the value of the "font-weight" attribute of the RenderGroup of the Style for all ReactionGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontWeight a string value to use as the value of the "font-weight" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionFontWeight(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontWeight);

/// @brief Sets the value of the "font-weight" attribute of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontWeight a string value to use as the value of the "font-weight" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontWeight(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontWeight);

/// @brief Predicates returning @c true if the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-style"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFontStyle(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Predicates returning @c true if the "font-style" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "font-style"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFontStyle(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getFontStyle(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "font-style" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getFontStyle(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Sets the value of the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param fontStyle a string value to use as the value of the "font-style" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontStyle(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& fontStyle);

/// @brief Sets the value of the "font-style" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param fontStyle a string value to use as the value of the "font-style" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontStyle(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex, const std::string& fontStyle);

/// @brief Sets the value of the "font-style" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fontStyle a string value to use as the value of the "font-style" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontStyle(SBMLDocument* document, const std::string& attribute, const std::string& fontStyle);

/// @brief Sets the value of the "font-style" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param fontStyle a string value to use as the value of the "font-style" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontStyle(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex, const std::string& fontStyle);

LIBSBMLNETWORK_EXTERN const std::string getCompartmentFontStyle(SBMLDocument* document);

/// @brief Sets the value of the "font-style" attribute of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontStyle a string value to use as the value of the "font-style" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentFontStyle(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontStyle);

LIBSBMLNETWORK_EXTERN const std::string getSpeciesFontStyle(SBMLDocument* document);

/// @brief Sets the value of the "font-style" attribute of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontStyle a string value to use as the value of the "font-style" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesFontStyle(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontStyle);

LIBSBMLNETWORK_EXTERN const std::string getReactionFontStyle(SBMLDocument* document);

/// @brief Sets the value of the "font-style" attribute of the RenderGroup of the Style for all ReactionGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontStyle a string value to use as the value of the "font-style" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionFontStyle(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontStyle);

/// @brief Sets the value of the "font-style" attribute of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fontStyle a string value to use as the value of the "font-style" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFontStyle(SBMLDocument* document, unsigned int layoutIndex, const std::string& fontStyle);

/// @brief Predicates returning @c true if the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "text-anchor"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Predicates returning @c true if the "text-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "text-anchor"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetTextAnchor(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "text-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getTextAnchor(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Sets the value of the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textAnchor a string value to use as the value of the "text-anchor" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& textAnchor);

/// @brief Sets the value of the "text-anchor" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param textAnchor a string value to use as the value of the "text-anchor" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex, const std::string& textAnchor);

/// @brief Sets the value of the "text-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textAnchor a string value to use as the value of the "text-anchor" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setTextAnchor(SBMLDocument* document, const std::string& attribute, const std::string& textAnchor);

/// @brief Sets the value of the "text-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param textAnchor a string value to use as the value of the "text-anchor" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setTextAnchor(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex, const std::string& textAnchor);

LIBSBMLNETWORK_EXTERN const std::string getCompartmentTextAnchor(SBMLDocument* document);

/// @brief Sets the value of the "text-anchor" attribute of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param textAnchor a string value to use as the value of the "text-anchor" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentTextAnchor(SBMLDocument* document, unsigned int layoutIndex, const std::string& textAnchor);

LIBSBMLNETWORK_EXTERN const std::string getSpeciesTextAnchor(SBMLDocument* document);

/// @brief Sets the value of the "text-anchor" attribute of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param textAnchor a string value to use as the value of the "text-anchor" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesTextAnchor(SBMLDocument* document, unsigned int layoutIndex, const std::string& textAnchor);

LIBSBMLNETWORK_EXTERN const std::string getReactionTextAnchor(SBMLDocument* document);

/// @brief Sets the value of the "text-anchor" attribute of the RenderGroup of the Style for all ReactionGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param textAnchor a string value to use as the value of the "text-anchor" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionTextAnchor(SBMLDocument* document, unsigned int layoutIndex, const std::string& textAnchor);

/// @brief Sets the value of the "text-anchor" attribute of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param textAnchor a string value to use as the value of the "text-anchor" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setTextAnchor(SBMLDocument* document, unsigned int layoutIndex, const std::string& textAnchor);

/// @brief Predicates returning @c true if the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "vtext-anchor"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetVTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Predicates returning @c true if the "vtext-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return @c true if the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "vtext-anchor"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetVTextAnchor(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getVTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex = 0);

/// @brief Returns the value of the "vtext-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @return the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getVTextAnchor(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex = 0);

/// @brief Sets the value of the "vtext-anchor" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param vtextAnchor a string value to use as the value of the "vtext-anchor" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setVTextAnchor(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int textGlyphIndex, const std::string& vtextAnchor);

/// @brief Sets the value of the "vtext-anchor" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param textGlyphIndex an unsigned int representing the index of the TextGlyph object.
/// @param vtextAnchor a string value to use as the value of the "vtext-anchor" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setVTextAnchor(SBMLDocument* document, const std::string& attribute, unsigned int textGlyphIndex, const std::string& vtextAnchor);

LIBSBMLNETWORK_EXTERN const std::string getCompartmentVTextAnchor(SBMLDocument* document);

/// @brief Sets the value of the "vtext-anchor" attribute of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param vtextAnchor a string value to use as the value of the "vtext-anchor" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentVTextAnchor(SBMLDocument* document, unsigned int layoutIndex, const std::string& vtextAnchor);

LIBSBMLNETWORK_EXTERN const std::string getSpeciesVTextAnchor(SBMLDocument* document);

/// @brief Sets the value of the "vtext-anchor" attribute of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param vtextAnchor a string value to use as the value of the "vtext-anchor" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesVTextAnchor(SBMLDocument* document, unsigned int layoutIndex, const std::string& vtextAnchor);

LIBSBMLNETWORK_EXTERN const std::string getReactionVTextAnchor(SBMLDocument* document);

/// @brief Sets the value of the "vtext-anchor" attribute of the RenderGroup of the Style for all ReactionGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param vtextAnchor a string value to use as the value of the "vtext-anchor" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionVTextAnchor(SBMLDocument* document, unsigned int layoutIndex, const std::string& vtextAnchor);

/// @brief Sets the value of the "vtext-anchor" attribute of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param vtextAnchor a string value to use as the value of the "vtext-anchor" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setVTextAnchor(SBMLDocument* document, unsigned int layoutIndex, const std::string& vtextAnchor);

/// @brief Predicates returning @c true if the "fill" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "fill" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "fill"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFillColor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "fill" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "fill" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "fill"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFillColor(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "fill" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "fill" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getFillColor(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "fill" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "fill" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getFillColor(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "fill" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fillColor a string value to use as the value of the "fill" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFillColor(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& fillColor);

/// @brief Sets the value of the "fill" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fillColor a string value to use as the value of the "fill" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFillColor(SBMLDocument* document, const std::string& attribute, const std::string& fillColor);

LIBSBMLNETWORK_EXTERN const std::string getCompartmentFillColor(SBMLDocument* document);

/// @brief Sets the value of the "fill" attribute of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fillColor a string value to use as the value of the "fill" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentFillColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& fillColor);

LIBSBMLNETWORK_EXTERN const std::string getSpeciesFillColor(SBMLDocument* document);

/// @brief Sets the value of the "fill" attribute of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fillColor a string value to use as the value of the "fill" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesFillColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& fillColor);

LIBSBMLNETWORK_EXTERN const std::string getReactionFillColor(SBMLDocument* document);

/// @brief Sets the value of the "fill" attribute of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fillColor a double value to use as the value of the "fill" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionFillColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& fillColor);

/// @brief Sets the value of the "fill" attribute of the RenderGroup of all LineEnding objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fillColor a string value to use as the value of the "fill" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingFillColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& fillColor);

/// @brief Sets the value of the "fill" attribute of the RenderGroup of the Style for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fillColor a string value to use as the value of the "fill" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFillColor(SBMLDocument* document, unsigned int layoutIndex, const std::string& fillColor);

/// @brief Predicates returning @c true if the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "fill-rule"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFillRule(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "fill-rule" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "fill-rule"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetFillRule(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getFillRule(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "fill-rule" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getFillRule(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "fill-rule" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param fillRule a string value to use as the value of the "fill-rule" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFillRule(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& fillRule);

/// @brief Sets the value of the "fill-rule" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param fillRule a string value to use as the value of the "fill-rule" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFillRule(SBMLDocument* document, const std::string& attribute, const std::string& fillRule);

LIBSBMLNETWORK_EXTERN const std::string getCompartmentFillRule(SBMLDocument* document);

/// @brief Sets the value of the "fill-rule" attribute of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fillRule a string value to use as the value of the "fill-rule" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentFillRule(SBMLDocument* document, unsigned int layoutIndex, const std::string& fillRule);

LIBSBMLNETWORK_EXTERN const std::string getSpeciesFillRule(SBMLDocument* document);

/// @brief Sets the value of the "fill-rule" attribute of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fillRule a string value to use as the value of the "fill-rule" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesFillRule(SBMLDocument* document, unsigned int layoutIndex, const std::string& fillRule);

LIBSBMLNETWORK_EXTERN const std::string getReactionFillRule(SBMLDocument* document);

/// @brief Sets the value of the "fill-rule" attribute of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fillRule a string value to use as the value of the "fill-rule" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionFillRule(SBMLDocument* document, unsigned int layoutIndex, const std::string& fillRule);

/// @brief Sets the value of the "fill-rule" attribute of the RenderGroup of all LineEnding objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fillRule a string value to use as the value of the "fill-rule" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setLineEndingFillRule(SBMLDocument* document, unsigned int layoutIndex, const std::string& fillRule);

/// @brief Sets the value of the "fill-rule" attribute of the RenderGroup of the Style for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param fillRule a string value to use as the value of the "fill-rule" attribute of the RenderGroup of these Style objects.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setFillRule(SBMLDocument* document, unsigned int layoutIndex, const std::string& fillRule);

/// @brief Predicates returning @c true if the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "startHead"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetStartHead(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "startHead" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "startHead"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetStartHead(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getStartHead(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "startHead" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getStartHead(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "startHead" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param startHead a string value to use as the value of the "startHead" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStartHead(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& startHead);

/// @brief Sets the value of the "startHead" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param startHead a string value to use as the value of the "startHead" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStartHead(SBMLDocument* document, const std::string& attribute, const std::string& startHead);

/// @brief Predicates returning @c true if the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return @c true if the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "endHead"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetEndHead(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Predicates returning @c true if the "endHead" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return @c true if the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject is set, @c false if either the "endHead"
/// attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetEndHead(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the value of the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getEndHead(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns the value of the "endHead" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getEndHead(SBMLDocument* document, const std::string& attribute);

/// @brief Sets the value of the "endHead" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param endHead a string value to use as the value of the "endHead" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setEndHead(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& endHead);

/// @brief Sets the value of the "endHead" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param endHead a string value to use as the value of the "startHead" attribute of the RenderGroup of this Style object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setEndHead(SBMLDocument* document, const std::string& attribute, const std::string& endHead);

/// @brief Returns number of Transformation2D objects in the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @return the number of Transformation2D objects in the RenderGroup of the Style for this GraphicalObject object, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN unsigned int getNumGeometricShapes(SBMLDocument* document, GraphicalObject* graphicalObject);

/// @brief Returns number of Transformation2D objects in the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @return the number of Transformation2D objects in the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN unsigned int getNumGeometricShapes(SBMLDocument* document, const std::string& attribute);

/// @brief Returns the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the Transformation2D at the given index the RenderGroup of the Style for this GraphicalObject object, @c NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN Transformation2D* getGeometricShape(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject, or @c NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN Transformation2D* getGeometricShape(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Add a geometric shape to the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int addGeometricShape(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& shape);

/// @brief Add a geometric shape to the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param shape a string value indicating the shape of the geometric shape to be added.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int addGeometricShape(SBMLDocument* document, const std::string& attribute, const std::string& shape);

/// @brief Remove a geometric shape from the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to remove.
/// @return a pointer to the nth Transformation2D of the RenderGroup of the Style for this GraphicalObject, or @c NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN Transformation2D* removeGeometricShape(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Remove a geometric shape from the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to remove.
/// @return a pointer to the nth Transformation2D of the RenderGroup of the Style for this GraphicalObject, or @c NULL if the object is @c NULL
LIBSBMLNETWORK_EXTERN Transformation2D* removeGeometricShape(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value the type of the geometric shape of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the type of the geometric shape of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getGeometricShapeType(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value the type of the geometric shape of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the type of the geometric shape of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject, or @c "" if the object is @c NULL
LIBSBMLNETWORK_EXTERN const std::string getGeometricShapeType(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the geometric shape as the single geometric shape of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param shape a string value indicating the shape of the geometric shape to be set.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeType(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& shape);

/// @brief Sets the geometric shape as the single geometric shape of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param shape a string value indicating the shape of the geometric shape to be set.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeType(SBMLDocument* document, const std::string& attribute, const std::string& shape);

LIBSBMLNETWORK_EXTERN const std::string getCompartmentGeometricShapeType(SBMLDocument* document);

/// @brief Sets the geometric shape as the single geometric shape of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param shape a string value indicating the shape of the geometric shape to be set.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeType(SBMLDocument* document, unsigned int layoutIndex, const std::string& shape);

LIBSBMLNETWORK_EXTERN const std::string getSpeciesGeometricShapeType(SBMLDocument* document);

/// @brief Sets the geometric shape as the single geometric shape of the RenderGroup of the Style for for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param shape a string value indicating the shape of the geometric shape to be set.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeType(SBMLDocument* document, unsigned int layoutIndex, const std::string& shape);

LIBSBMLNETWORK_EXTERN const std::string getReactionGeometricShapeType(SBMLDocument* document);

/// @brief Sets the geometric shape as the single geometric shape of the RenderGroup of the Style for for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param shape a string value indicating the shape of the geometric shape to be set.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeType(SBMLDocument* document, unsigned int layoutIndex, const std::string& shape);

/// @brief Sets the geometric shape as the single geometric shape of the RenderGroup of the Style for for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param shape a string value indicating the shape of the geometric shape to be set.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeType(SBMLDocument* document, unsigned int layoutIndex, const std::string& shape);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Rectangle.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Rectangle, @c false if
/// it is not of type Rectangle or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isRectangle(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type Rectangle.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Rectangle, @c false if
/// it is not of type Rectangle or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isRectangle(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Square.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Square, @c false if
/// it is not of type Square or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSquare(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type Square.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Square, @c false if
/// it is not of type Square or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSquare(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Ellipse.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Ellipse, @c false if
/// it is not of type Ellipse or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isEllipse(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type Ellipse.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Ellipse, @c false if
/// it is not of type Ellipse or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isEllipse(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Circle.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Circle, @c false if
/// it is not of type Circle or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isCircle(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type Circle.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Circle, @c false if
/// it is not of type Circle or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isCircle(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Polygon.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Polygon, @c false if
/// it is not of type Polygon or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isPolygon(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type Polygon.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Polygon, @c false if
/// it is not of type Polygon or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isPolygon(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type RenderCurve.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type RenderCurve, @c false if
/// it is not of type RenderCurve or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isRenderCurve(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type RenderCurve.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type RenderCurve, @c false if
/// it is not of type RenderCurve or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isRenderCurve(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Image.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Image, @c false if
/// it is not of type Image or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isImage(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type Image.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Image, @c false if
/// it is not of type Image or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isImage(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Text.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Text, @c false if
/// it is not of type Text or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isText(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type Text.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type Text, @c false if
/// it is not of type Text or is or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isText(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "x" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "x" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "x" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "x" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "x" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "x" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "x" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "x" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "x" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "x" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "x" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "x" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

LIBSBMLNETWORK_EXTERN const double getGeometricShapeXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

LIBSBMLNETWORK_EXTERN const double getGeometricShapeXAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "x" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeX(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param x a RelAbsVector to use as the value of the "x" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeX(SBMLDocument* document, const std::string& attribute, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param x a double value to use as the value of the "x" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const double& x);

/// @brief Sets the value of the "x" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param x a double value to use as the value of the "x" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeXAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const double& x);

/// @brief Sets the value of the "x" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a double value to use as the value of the "x" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& x);

/// @brief Sets the value of the "x" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param x a double value to use as the value of the "x" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeXAsDouble(SBMLDocument* document, const std::string& attribute, const double& x);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeX(SBMLDocument* document);

/// @brief Sets the "x" attribute of the geometric shape of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& x);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeXAsDouble(SBMLDocument* document);

/// @brief Sets the "x" attribute of the geometric shape of the RenderGroup of the Style for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param x a double value to use as the value of the "x" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& x);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeX(SBMLDocument* document);

/// @brief Sets the "x" attribute of the geometric shape of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& x);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeXAsDouble(SBMLDocument* document);

/// @brief Sets the "x" attribute of the geometric shape of the RenderGroup of the Style for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param x a double value to use as the value of the "x" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& x);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeX(SBMLDocument* document);

/// @brief Sets the "x" attribute of the geometric shape of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& x);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeXAsDouble(SBMLDocument* document);

/// @brief Sets the "x" attribute of the geometric shape of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param x a double value to use as the value of the "x" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& x);

/// @brief Sets the "x" attribute of the geometric shape of the RenderGroup of the Style for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the geometric shape of the RenderGroup of the Style for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param x a double value to use as the value of the "x" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& x);

/// @brief Predicates returning @c true if the "y" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "y" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "y" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "y" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "y" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "y" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "y" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "y" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "y" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "y" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "y" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "y" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "y" attribute of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "y" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "y" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "y" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "y" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "y" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeYAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "y" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeY(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param y a RelAbsVector to use as the value of the "y" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeY(SBMLDocument* document, const std::string& attribute, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param y a double value to use as the value of the "y" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const double& y);

/// @brief Sets the value of the "y" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param y a double value to use as the value of the "y" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeYAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const double& y);

/// @brief Sets the value of the "y" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param y a double value to use as the value of the "y" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& y);

/// @brief Sets the value of the "y" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param y a double value to use as the value of the "y" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeYAsDouble(SBMLDocument* document, const std::string& attribute, const double& y);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeY(SBMLDocument* document);

/// @brief Sets the "y" attribute of the geometric shape of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "y" attribute of the geometric shape of the RenderGroup of the Style for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param y a double value to use as the value of the "y" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& y);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeY(SBMLDocument* document);

/// @brief Sets the "y" attribute of the geometric shape of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "y" attribute of the geometric shape of the RenderGroup of the Style for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param y a double value to use as the value of the "y" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& y);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeY(SBMLDocument* document);

/// @brief Sets the "y" attribute of the geometric shape of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "y" attribute of the geometric shape of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param y a double value to use as the value of the "y" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& y);

/// @brief Sets the "y" attribute of the geometric shape of the RenderGroup of the Style for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the geometric shape of the RenderGroup of the Style for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param y a double value to use as the value of the "y" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& y);

/// @brief Predicates returning @c true if the "width" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "width" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "width" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeWidth(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "width" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "width" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "width" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeWidth(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "width" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "width" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "width" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeWidth(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "width" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "width" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "width" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeWidth(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "width" attribute of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "width" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "width" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeWidthAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "width" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "width" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "width" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeWidthAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "width" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param width a RelAbsVector to use as the value of the "width" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeWidth(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& width);

/// @brief Sets the value of the "width" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param width a RelAbsVector to use as the value of the "width" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeWidth(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& width);

/// @brief Sets the value of the "width" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param width a RelAbsVector to use as the value of the "width" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeWidth(SBMLDocument* document, const std::string& attribute, const RelAbsVector& width);

/// @brief Sets the value of the "width" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param width a RelAbsVector to use as the value of the "width" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeWidth(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& width);

/// @brief Sets the value of the "width" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param width a double value to use as the value of the "width" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeWidthAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const double& width);

/// @brief Sets the value of the "width" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param width a double value to use as the value of the "width" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeWidthAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const double& width);

/// @brief Sets the value of the "width" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param width a double value to use as the value of the "width" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeWidthAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& width);

/// @brief Sets the value of the "width" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param width a double value to use as the value of the "width" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeWidthAsDouble(SBMLDocument* document, const std::string& attribute, const double& width);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeWidth(SBMLDocument* document);

/// @brief Sets the "width" attribute of the geometric shape of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param width a RelAbsVector to use as the value of the "width" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeWidth(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& width);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeWidthAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "width" attribute of the geometric shape of the RenderGroup of the Style for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param width a double value to use as the value of the "width" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeWidthAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& width);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeWidth(SBMLDocument* document);

/// @brief Sets the "width" attribute of the geometric shape of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param width a RelAbsVector to use as the value of the "width" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeWidth(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& width);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeWidthAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "width" attribute of the geometric shape of the RenderGroup of the Style for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param width a double value to use as the value of the "width" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeWidthAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& width);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeWidth(SBMLDocument* document);

/// @brief Sets the "width" attribute of the geometric shape of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param width a RelAbsVector to use as the value of the "width" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeWidth(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& width);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeWidthAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "width" attribute of the geometric shape of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param width a double value to use as the value of the "width" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeWidthAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& width);

/// @brief Sets the "width" attribute of the geometric shape of the RenderGroup of the Style for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param width a RelAbsVector to use as the value of the "width" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeWidth(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& width);

/// @brief Sets the value of the "width" attribute of the geometric shape of the RenderGroup of the Style for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param width a double value to use as the value of the "width" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeWidthAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& width);

/// @brief Predicates returning @c true if the "height" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "height" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "height" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeHeight(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "height" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "height" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "height" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeHeight(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "height" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "height" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "height" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeHeight(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "height" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "height" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "height" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeHeight(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "height" attribute of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "height" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "height" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeHeightAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "height" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "height" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "height" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeHeightAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "height" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param height a RelAbsVector to use as the value of the "height" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHeight(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& height);

/// @brief Sets the value of the "height" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param height a RelAbsVector to use as the value of the "height" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHeight(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& height);

/// @brief Sets the value of the "height" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param height a RelAbsVector to use as the value of the "height" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHeight(SBMLDocument* document, const std::string& attribute, const RelAbsVector& height);

/// @brief Sets the value of the "height" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param height a RelAbsVector to use as the value of the "height" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHeight(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& height);

/// @brief Sets the value of the "height" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param height a double value to use as the value of the "height" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHeightAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const double& height);

/// @brief Sets the value of the "height" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param height a double value to use as the value of the "height" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHeightAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const double& height);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeHeight(SBMLDocument* document);

/// @brief Sets the "height" attribute of the geometric shape of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param height a RelAbsVector to use as the value of the "height" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeHeight(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& height);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeHeightAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "height" attribute of the geometric shape of the RenderGroup of the Style for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param height a double value to use as the value of the "height" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeHeightAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& height);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeHeight(SBMLDocument* document);

/// @brief Sets the "height" attribute of the geometric shape of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param height a RelAbsVector to use as the value of the "height" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeHeight(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& height);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeHeightAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "height" attribute of the geometric shape of the RenderGroup of the Style for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param height a double value to use as the value of the "height" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeHeightAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& height);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeHeight(SBMLDocument* document);

/// @brief Sets the "height" attribute of the geometric shape of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param height a RelAbsVector to use as the value of the "height" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeHeight(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& height);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeHeightAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "height" attribute of the geometric shape of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param height a double value to use as the value of the "height" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeHeightAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& height);

/// @brief Sets the "height" attribute of the geometric shape of the RenderGroup of the Style for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param height a RelAbsVector to use as the value of the "height" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHeight(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& height);

/// @brief Sets the value of the "height" attribute of the geometric shape of the RenderGroup of the Style for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param height a double value to use as the value of the "height" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHeightAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& height);

/// @brief Predicates returning @c true if the "ratio" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "ratio" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "ratio" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeRatio(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "ratio" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "ratio" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "ratio" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeRatio(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ratio" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ratio" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "ratio" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeRatio(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ratio" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ratio" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "ratio" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeRatio(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "ratio" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param ratio a double to use as the value of the "ratio" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRatio(SBMLDocument* document, GraphicalObject* graphicalObject, const double& ratio);

/// @brief Sets the value of the "ratio" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ratio a double to use as the value of the "ratio" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRatio(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const double& ratio);

/// @brief Sets the value of the "ratio" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param ratio a double to use as the value of the "ratio" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRatio(SBMLDocument* document, const std::string& attribute, const double& ratio);

/// @brief Sets the value of the "ratio" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ratio a double to use as the value of the "ratio" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRatio(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const double& ratio);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeRatio(SBMLDocument* document);

/// @brief Sets the "ratio" attribute of the geometric shape of the RenderGroup of the Style for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ratio a double to use as the value of the "ratio" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeRatio(SBMLDocument* document, unsigned int layoutIndex, const double& ratio);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeRatio(SBMLDocument* document);

/// @brief Sets the "ratio" attribute of the geometric shape of the RenderGroup of the Style for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ratio a double to use as the value of the "ratio" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeRatio(SBMLDocument* document, unsigned int layoutIndex, const double& ratio);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeRatio(SBMLDocument* document);

/// @brief Sets the "ratio" attribute of the geometric shape of the RenderGroup of the Style for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ratio a double to use as the value of the "ratio" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeRatio(SBMLDocument* document, unsigned int layoutIndex, const double& ratio);

/// @brief Sets the "ratio" attribute of the geometric shape of the RenderGroup of the Style for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ratio a double to use as the value of the "ratio" attribute of the geometric shape.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRatio(SBMLDocument* document, unsigned int layoutIndex, const double& ratio);

/// @brief Predicates returning @c true if the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "rx" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "rx" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "rx" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "rx" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "rx" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "rx" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "rx" attribute of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "rx" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "rx" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "rx" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "rx" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, const std::string& attribute, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param rx a double value to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const double& rx);

/// @brief Sets the value of the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param rx a double value to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const double& rx);

/// @brief Sets the value of the "rx" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param rx a double value to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& rx);

/// @brief Sets the value of the "rx" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param rx a double value to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, const std::string& attribute, const double& rx);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document);

/// @brief Sets the "rx" attribute of the geometric shape corner curvature radius for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& rx);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "rx" attribute of the geometric shape corner curvature radius for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a double value to use as the value of the "rx" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& rx);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document);

/// @brief Sets the "rx" attribute of the geometric shape corner curvature radius for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& rx);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "rx" attribute of the geometric shape corner curvature radius for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a double value to use as the value of the "rx" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& rx);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document);

/// @brief Sets the "rx" attribute of the geometric shape corner curvature radius for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& rx);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "rx" attribute of the geometric shape corner curvature radius for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a double value to use as the value of the "rx" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& rx);

/// @brief Sets the "rx" attribute of the geometric shape corner curvature radius for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the geometric shape corner curvature radius for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a double value to use as the value of the "rx" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& rx);

/// @brief Predicates returning @c true if the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "ry" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "ry" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ry" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "ry" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ry" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "ry" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ry" attribute of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "ry" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ry" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "ry" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "ry" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, const std::string& attribute, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ry a double value to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const double& ry);

/// @brief Sets the value of the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ry a double value to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const double& ry);

/// @brief Sets the value of the "ry" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param ry a double value to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& ry);

/// @brief Sets the value of the "ry" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param ry a double value to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, const std::string& attribute, const double& ry);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeCornerCurvatureRadiusX(SBMLDocument* document);

/// @brief Sets the "ry" attribute of the geometric shape corner curvature radius for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& ry);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "ry" attribute of the geometric shape corner curvature radius for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a double value to use as the value of the "ry" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& ry);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document);

/// @brief Sets the "ry" attribute of the geometric shape corner curvature radius for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& ry);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "ry" attribute of the geometric shape corner curvature radius for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a double value to use as the value of the "ry" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& ry);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document);

/// @brief Sets the "ry" attribute of the geometric shape corner curvature radius for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& ry);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "ry" attribute of the geometric shape corner curvature radius for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a double value to use as the value of the "ry" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& ry);

/// @brief Sets the "ry" attribute of the geometric shape corner curvature radius for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the geometric shape corner curvature radius for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a double value to use as the value of the "ry" attribute of the geometric shape corner curvature radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCornerCurvatureRadiusYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& ry);

/// @brief Predicates returning @c true if the "cx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "cx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "cx" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeCenterX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "cx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "cx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "cx" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeCenterX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "cx" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "cx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "cx" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeCenterX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "cx" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "cx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "cx" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeCenterX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "cx" attribute of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "cx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "cx" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeCenterXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "cx" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "cx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "cx" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeCenterXAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "cx" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterX(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& cx);

/// @brief Sets the value of the "cx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& cx);

/// @brief Sets the value of the "cx" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterX(SBMLDocument* document, const std::string& attribute, const RelAbsVector& cx);

/// @brief Sets the value of the "cx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& cx);

/// @brief Sets the value of the "cx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param cx a double value to use as the value of the "cx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const double& cx);

/// @brief Sets the value of the "cx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param cx a double value to use as the value of the "cx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterXAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const double& cx);

/// @brief Sets the value of the "cx" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param cx a double value to use as the value of the "cx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& cx);

/// @brief Sets the value of the "cx" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param cx a double value to use as the value of the "cx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterXAsDouble(SBMLDocument* document, const std::string& attribute, const double& cx);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeCenterX(SBMLDocument* document);

/// @brief Sets the "cx" attribute of the geometric shape center for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeCenterX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& cx);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeCenterXAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "cx" attribute of the geometric shape center for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cx a double value to use as the value of the "cx" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeCenterXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& cx);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeCenterX(SBMLDocument* document);

/// @brief Sets the "cx" attribute of the geometric shape center for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeCenterX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& cx);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeCenterXAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "cx" attribute of the geometric shape center for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cx a double value to use as the value of the "cx" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeCenterXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& cx);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeCenterX(SBMLDocument* document);

/// @brief Sets the "cx" attribute of the geometric shape center for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeCenterX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& cx);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeCenterXAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "cx" attribute of the geometric shape center for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cx a double value to use as the value of the "cx" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeCenterXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& cx);

/// @brief Sets the "cx" attribute of the geometric shape center for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cx a RelAbsVector to use as the value of the "cx" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& cx);

/// @brief Sets the value of the "cx" attribute of the geometric shape center for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cx a double value to use as the value of the "cx" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& cx);

/// @brief Predicates returning @c true if the "cy" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "cy" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "cy" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeCenterY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "cy" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "cy" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "cy" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeCenterY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "cy" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "cy" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "cy" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeCenterY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "cy" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "cy" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "cy" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeCenterY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "cy" attribute of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "cy" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "cy" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeCenterYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "cy" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "cy" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "cy" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeCenterYAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "cy" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterY(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& cy);

/// @brief Sets the value of the "cy" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& cy);

/// @brief Sets the value of the "cy" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterY(SBMLDocument* document, const std::string& attribute, const RelAbsVector& cy);

/// @brief Sets the value of the "cy" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& cy);

/// @brief Sets the value of the "cy" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param cy a double value to use as the value of the "cy" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const double& cy);

/// @brief Sets the value of the "cy" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param cy a double value to use as the value of the "cy" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterYAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const double& cy);

/// @brief Sets the value of the "cy" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param cy a double value to use as the value of the "cy" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& cy);

/// @brief Sets the value of the "cy" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param cy a double value to use as the value of the "cy" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterYAsDouble(SBMLDocument* document, const std::string& attribute, const double& cy);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeCenterY(SBMLDocument* document);

/// @brief Sets the "cy" attribute of the geometric shape center for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeCenterY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& cy);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeCenterYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "cy" attribute of the geometric shape center for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cy a double value to use as the value of the "cy" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeCenterYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& cy);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeCenterY(SBMLDocument* document);

/// @brief Sets the "cy" attribute of the geometric shape center for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeCenterY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& cy);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeCenterYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "cy" attribute of the geometric shape center for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cy a double value to use as the value of the "cy" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeCenterYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& cy);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeCenterY(SBMLDocument* document);

/// @brief Sets the "cy" attribute of the geometric shape center for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeCenterY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& cy);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeCenterYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "cy" attribute of the geometric shape center for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cy a double value to use as the value of the "cy" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeCenterYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& cy);

/// @brief Sets the "cy" attribute of the geometric shape center for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cy a RelAbsVector to use as the value of the "cy" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& cy);

/// @brief Sets the value of the "cy" attribute of the geometric shape center for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param cy a double value to use as the value of the "cy" attribute of the geometric shape center.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeCenterYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& cy);

/// @brief Predicates returning @c true if the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "rx" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "rx" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeRadiusX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "rx" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "rx" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "rx" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "rx" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeRadiusX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "rx" attribute of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "rx" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeRadiusXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "rx" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "rx" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "rx" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeRadiusXAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "rx" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusX(SBMLDocument* document, const std::string& attribute, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param rx a double value to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const double& rx);

/// @brief Sets the value of the "rx" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param rx a double value to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusXAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const double& rx);

/// @brief Sets the value of the "rx" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param rx a double value to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& rx);

/// @brief Sets the value of the "rx" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param rx a double value to use as the value of the "rx" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusXAsDouble(SBMLDocument* document, const std::string& attribute, const double& rx);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeRadiusX(SBMLDocument* document);

/// @brief Sets the "rx" attribute of the geometric shape radius for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeRadiusX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& rx);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeRadiusXAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "rx" attribute of the geometric shape radius for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a double value to use as the value of the "rx" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeRadiusXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& rx);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeRadiusX(SBMLDocument* document);

/// @brief Sets the "rx" attribute of the geometric shape radius for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeRadiusX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& rx);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeRadiusXAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "rx" attribute of the geometric shape radius for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a double value to use as the value of the "rx" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeRadiusXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& rx);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeRadiusX(SBMLDocument* document);

/// @brief Sets the "rx" attribute of the geometric shape radius for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeRadiusX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& rx);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeRadiusXAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "rx" attribute of the geometric shape radius for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a double value to use as the value of the "rx" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeRadiusXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& rx);

/// @brief Sets the "rx" attribute of the geometric shape radius for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a RelAbsVector to use as the value of the "rx" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusX(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& rx);

/// @brief Sets the value of the "rx" attribute of the geometric shape radius for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param rx a double value to use as the value of the "rx" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusXAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& rx);

/// @brief Predicates returning @c true if the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "ry" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "ry" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeRadiusY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ry" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "ry" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ry" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "ry" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeRadiusY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ry" attribute of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "ry" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeRadiusYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "ry" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "ry" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have "ry" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeRadiusYAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "ry" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusY(SBMLDocument* document, const std::string& attribute, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ry a double value to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const double& ry);

/// @brief Sets the value of the "ry" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param ry a double value to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusYAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const double& ry);

/// @brief Sets the value of the "ry" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param ry a double value to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& ry);

/// @brief Sets the value of the "ry" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param ry a double value to use as the value of the "ry" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusYAsDouble(SBMLDocument* document, const std::string& attribute, const double& ry);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeRadiusX(SBMLDocument* document);

/// @brief Sets the "ry" attribute of the geometric shape radius for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeRadiusY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& ry);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeRadiusYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "ry" attribute of the geometric shape radius for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a double value to use as the value of the "ry" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeRadiusYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& ry);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeRadiusY(SBMLDocument* document);

/// @brief Sets the "ry" attribute of the geometric shape radius for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeRadiusY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& ry);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeRadiusYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "ry" attribute of the geometric shape radius for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a double value to use as the value of the "ry" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeRadiusYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& ry);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeRadiusY(SBMLDocument* document);

/// @brief Sets the "ry" attribute of the geometric shape radius for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeRadiusY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& ry);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeRadiusYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "ry" attribute of the geometric shape radius for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a double value to use as the value of the "ry" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeRadiusYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& ry);

/// @brief Sets the "ry" attribute of the geometric shape radius for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a RelAbsVector to use as the value of the "ry" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusY(SBMLDocument* document, unsigned int layoutIndex, const RelAbsVector& ry);

/// @brief Sets the value of the "ry" attribute of the geometric shape radius for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param ry a double value to use as the value of the "ry" attribute of the geometric shape radius.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeRadiusYAsDouble(SBMLDocument* document, unsigned int layoutIndex, const double& ry);

/// @brief Returns the number of elements of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the number of elements of the Transformation2D object at the given index of the RenderGroup of this Style for this GraphicalObject, or @c 0 if
/// either Transformation2D object does not exists, does not have any elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const unsigned int getGeometricShapeNumElements(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the number of elements of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the number of elements of the Transformation2D object at the given index of the RenderGroup of this Style for this GraphicalObject, or @c 0 if
/// either Transformation2D object does not exists, does not have any elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const unsigned int getGeometricShapeNumElements(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is a CubicBezier object.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return @c true if the element at the given index of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is a CubicBezier object,
/// @c false if either the Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isGeometricShapeElementCubicBezier(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Predicates returning @c true if the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is a CubicBezier object.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return @c true if the element at the given index of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is a CubicBezier object,
/// @c false if either the Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isGeometricShapeElementCubicBezier(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeElementX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeElementX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeElementXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeElementXAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the value of the "x" attribute of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementX(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementX(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementX(SBMLDocument* document, const std::string& attribute, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementX(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementX(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a double value to use as the value of the "x" attribute of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& x);

/// @brief Sets the value of the "x" attribute of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const double& x);

/// @brief Sets the value of the "x" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementXAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& x);

/// @brief Sets the value of the "x" attribute of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param x a double value to use as the value of the "x" attribute of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementXAsDouble(SBMLDocument* document, const std::string& attribute, const double& x);

/// @brief Sets the value of the "x" attribute of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementXAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const double& x);

/// @brief Sets the value of the "x" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementXAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& x);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeElementX(SBMLDocument* document);

/// @brief Sets the "x" attribute of the geometric shape element for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeElementX(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& x);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeElementXAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "x" attribute of the geometric shape element for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeElementXAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& x);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeElementX(SBMLDocument* document);

/// @brief Sets the "x" attribute of the geometric shape element for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeElementX(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& x);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeElementXAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "x" attribute of the geometric shape element for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeElementXAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& x);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeElementX(SBMLDocument* document);

/// @brief Sets the "x" attribute of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeElementX(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& x);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeElementXAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "x" attribute of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeElementXAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& x);

/// @brief Sets the "x" attribute of the geometric shape element for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementX(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the geometric shape element for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementXAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& x);

/// @brief Returns the value of the "y" attribute of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeElementY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "y" attribute of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeElementY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "y" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeElementYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "y" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeElementYAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the value of the "y" attribute of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementY(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementY(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementY(SBMLDocument* document, const std::string& attribute, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementY(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementY(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementYAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementYAsDouble(SBMLDocument* document, const std::string& attribute, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementYAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementYAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeElementX(SBMLDocument* document);

/// @brief Sets the "y" attribute of the geometric shape element for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeElementY(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeElementYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "y" attribute of the geometric shape element for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeElementYAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& y);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeElementX(SBMLDocument* document);

/// @brief Sets the "y" attribute of the geometric shape element for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeElementY(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeElementYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "y" attribute of the geometric shape element for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeElementYAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& y);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeElementX(SBMLDocument* document);

/// @brief Sets the "y" attribute of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeElementY(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeElementYAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "y" attribute of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeElementYAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& y);

/// @brief Sets the "y" attribute of the geometric shape element for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementY(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the geometric shape element for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeElementYAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& y);

/// @brief Returns the value of the "x" attribute of base point 1 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the base point 1 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeBasePoint1X(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of base point 1 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the base point 1 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeBasePoint1X(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of base point 1 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of base point 1 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the value of the "x" attribute of the base point 1 of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, const std::string& attribute, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a double value to use as the value of the "x" attribute of the base point 1 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const double& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param x a double value to use as the value of the "x" attribute of the base point 1 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, const std::string& attribute, const double& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const double& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& x);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeBasePoint1X(SBMLDocument* document);

/// @brief Sets the "x" attribute of the base point 1 of the geometric shape element for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeBasePoint1X(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& x);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeBasePoint1XAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "x" attribute of the base point 1 of the geometric shape element for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& x);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeBasePoint1X(SBMLDocument* document);

/// @brief Sets the "x" attribute of the base point 1 of the geometric shape element for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeBasePoint1X(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& x);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeBasePoint1XAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "x" attribute of the base point 1 of the geometric shape element for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& x);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeBasePoint1X(SBMLDocument* document);

/// @brief Sets the "x" attribute of the base point 1 of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeBasePoint1X(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& x);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeBasePoint1XAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "x" attribute of the base point 1 of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& x);

/// @brief Sets the "x" attribute of the base point 1 of the geometric shape element for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1X(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 1 of the geometric shape element for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1XAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& x);

/// @brief Returns the value of the "y" attribute of base point 1 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the base point 1 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeBasePoint1Y(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "y" attribute of base point 1 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the base point 1 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeBasePoint1Y(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "y" attribute of base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of base point 1 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "y" attribute of base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of base point 1 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the value of the "y" attribute of the base point 1 of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the first element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, const std::string& attribute, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param y a double value to use as the value of the "y" attribute of the base point 1 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const double& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param y a double value to use as the value of the "y" attribute of the base point 1 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, const std::string& attribute, const double& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const double& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 1 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& y);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeBasePoint1Y(SBMLDocument* document);

/// @brief Sets the "y" attribute of the base point 1 of the geometric shape element for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeBasePoint1Y(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeBasePoint1YAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "y" attribute of the base point 1 of the geometric shape element for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& y);/// @brief Sets the "y" attribute of the base point 1 of the geometric shape element for all SpeciesGlyph objects.

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeBasePoint1Y(SBMLDocument* document);

/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeBasePoint1Y(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeBasePoint1YAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "y" attribute of the base point 1 of the geometric shape element for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& y);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeBasePoint1Y(SBMLDocument* document);

/// @brief Sets the "y" attribute of the base point 1 of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeBasePoint1Y(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeBasePoint1YAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "y" attribute of the base point 1 of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& y);

/// @brief Sets the "y" attribute of the base point 1 of the geometric shape element for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1Y(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 1 of the geometric shape element for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 1 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint1YAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& y);

/// @brief Returns the value of the "x" attribute of base point 2 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the base point 2 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeBasePoint2X(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of base point 2 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of the base point 2 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeBasePoint2X(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of base point 2 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "x" attribute of base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "x" attribute of base point 2 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the value of the "x" attribute of the base point 2 of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, const std::string& attribute, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param x a double value to use as the value of the "x" attribute of the base point 2 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const double& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param x a double value to use as the value of the "x" attribute of the base point 2 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, const std::string& attribute, const double& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const double& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& x);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeBasePoint2X(SBMLDocument* document);

/// @brief Sets the "x" attribute of the base point 2 of the geometric shape element for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeBasePoint2X(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& x);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeBasePoint2XAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "x" attribute of the base point 2 of the geometric shape element for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& x);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeBasePoint2X(SBMLDocument* document);

/// @brief Sets the "x" attribute of the base point 2 of the geometric shape element for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeBasePoint2X(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& x);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeBasePoint2XAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "x" attribute of the base point 2 of the geometric shape element for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& x);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeBasePoint2X(SBMLDocument* document);

/// @brief Sets the "x" attribute of the base point 2 of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeBasePoint2X(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& x);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeBasePoint2XAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "x" attribute of the base point 2 of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& x);

/// @brief Sets the "x" attribute of the base point 2 of the geometric shape element for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a RelAbsVector to use as the value of the "x" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2X(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& x);

/// @brief Sets the value of the "x" attribute of the base point 2 of the geometric shape element for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param x a double value to use as the value of the "x" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2XAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& x);

/// @brief Returns the value of the "y" attribute of base point 2 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the base point 2 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeBasePoint2Y(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "y" attribute of base point 2 of element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of the base point 2 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const RelAbsVector getGeometricShapeBasePoint2Y(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "y" attribute of base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of base point 2 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Returns the value of the "y" attribute of base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return the "y" attribute of base point 2 of the nth element of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject as a double, or @c 0.0 if
/// either Transformation2D object does not exist, does not have any elements, it has less than n elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const double getGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Sets the value of the "y" attribute of the base point 2 of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, GraphicalObject* graphicalObject, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, const std::string& attribute, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the first element of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param y a double value to use as the value of the "y" attribute of the base point 2 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, const double& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the element at the given index of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int elementIndex, const double& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the first element of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param y a double value to use as the value of the "y" attribute of the base point 2 of the first element of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, const std::string& attribute, const double& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the element at the given index of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int elementIndex, const double& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 2 of the element at the given index of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, unsigned int elementIndex, const double& y);

LIBSBMLNETWORK_EXTERN const RelAbsVector getCompartmentGeometricShapeBasePoint2Y(SBMLDocument* document);

/// @brief Sets the "y" attribute of the base point 2 of the geometric shape element for all CompartmentGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeBasePoint2Y(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const double getCompartmentGeometricShapeBasePoint2YAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "y" attribute of the base point 2 of the geometric shape element for all CompartmentGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& y);

LIBSBMLNETWORK_EXTERN const RelAbsVector getSpeciesGeometricShapeBasePoint2Y(SBMLDocument* document);

/// @brief Sets the "y" attribute of the base point 2 of the geometric shape element for all SpeciesGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeBasePoint2Y(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const double getSpeciesGeometricShapeBasePoint2YAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "y" attribute of the base point 2 of the geometric shape element for all SpeciesGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& y);

LIBSBMLNETWORK_EXTERN const RelAbsVector getReactionGeometricShapeBasePoint2Y(SBMLDocument* document);

/// @brief Sets the "y" attribute of the base point 2 of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeBasePoint2Y(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& y);

LIBSBMLNETWORK_EXTERN const double getReactionGeometricShapeBasePoint2YAsDouble(SBMLDocument* document);

/// @brief Sets the value of the "y" attribute of the base point 2 of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& y);

/// @brief Sets the "y" attribute of the base point 2 of the geometric shape element for all GraphicalObject objects.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a RelAbsVector to use as the value of the "y" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2Y(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const RelAbsVector& y);

/// @brief Sets the value of the "y" attribute of the base point 2 of the geometric shape element for all GraphicalObject objects as a double.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @param y a double value to use as the value of the "y" attribute of the base point 2 of the geometric shape element.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeBasePoint2YAsDouble(SBMLDocument* document, unsigned int layoutIndex, unsigned int elementIndex, const double& y);

/// @brief Add a render point to the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int addRenderPointToGeometricShape(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Add a render point to the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int addRenderPointToGeometricShape(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Add a render cubic bezier to the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int addRenderCubicBezierToGeometricShape(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Add a render cubic bezier to the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int addRenderCubicBezierToGeometricShape(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Remove an element from the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param index an unsigned int representing the index of the element to be removed.
/// @return a pointer to the RenderPoint at the given index of this Transformation2D object, or @c NULL if
/////// either Transformation2D object does not exists, does not have any elements, it has less than index elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN RenderPoint* removeElementFromGeometricShape(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Remove an element from the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param index an unsigned int representing the index of the element to be removed.
/// @return a pointer to the RenderPoint at the given index of this Transformation2D object, or @c NULL if
/////// either Transformation2D object does not exists, does not have any elements, it has less than index elements, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN RenderPoint* removeElementFromGeometricShape(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type RenderCubicBezier.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return @c true if the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type RenderCubicBezier, @c false otherwise
LIBSBMLNETWORK_EXTERN bool isRenderCubicBezier(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Predicates returning @c true if the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is of type RenderCubicBezier.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param elementIndex an unsigned int representing the index of the element to retrieve.
/// @return @c true if the element at the given index of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is of type RenderCubicBezier, @c false otherwise
LIBSBMLNETWORK_EXTERN bool isRenderCubicBezier(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0, unsigned int elementIndex = 0);

/// @brief Predicates returning @c true if the "href" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "href" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "href" attribute is not set or the object is @c NULL.
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeHref(SBMLDocument* document, GraphicalObject* graphicalObject = 0, unsigned int geometricShapeIndex = 0);

/// @brief Predicates returning @c true if the "href" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject is set.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return @c true if the "href" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject is set,
/// @c false if either the "href" attribute is not set or the object is @c NULL .
LIBSBMLNETWORK_EXTERN bool isSetGeometricShapeHref(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "href" attribute of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "href" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "href" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const std::string getGeometricShapeHref(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex = 0);

/// @brief Returns the value of the "href" attribute of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @return the "href" attribute of the Transformation2D object at the given index of the RenderGroup of the Style for this GraphicalObject, or @c RelAbsVector() if
/// either Transformation2D object does not exists, does not have "href" attribute, it is not set, or the object is @c NULL.
LIBSBMLNETWORK_EXTERN const std::string getGeometricShapeHref(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex = 0);

/// @brief Sets the value of the "href" attribute of the first Transformation2D of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param href a string value to use as the value of the "href" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHref(SBMLDocument* document, GraphicalObject* graphicalObject, const std::string& href);

/// @brief Sets the value of the "href" attribute of the Transformation2D at the given index of the RenderGroup of the Style for this GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param graphicalObject a pointer to the GraphicalObject object.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param href a string value to use as the value of the "href" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHref(SBMLDocument* document, GraphicalObject* graphicalObject, unsigned int geometricShapeIndex, const std::string& href);

/// @brief Sets the value of the "href" attribute of the first Transformation2D of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param href a string value to use as the value of the "href" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHref(SBMLDocument* document, const std::string& attribute, const std::string& href);

/// @brief Sets the value of the "href" attribute of the Transformation2D at the given index of the RenderGroup of the Style that matches this attribute (id, role, type) of a GraphicalObject.
/// @param document a pointer to the SBMLDocument object.
/// @param attribute the attribute (id, role, type) of a GraphicalObject.
/// @param geometricShapeIndex an unsigned int representing the index of the Transformation2D to retrieve.
/// @param href a string value to use as the value of the "href" attribute of this Transformation2D object.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHref(SBMLDocument* document, const std::string& attribute, unsigned int geometricShapeIndex, const std::string& href);

LIBSBMLNETWORK_EXTERN const std::string getCompartmentGeometricShapeHref(SBMLDocument* document);

/// @brief Sets the "href" attribute of the geometric shape element for all CompartmentGlyph objects in the specified layout.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param href a string representing the "href" attribute value.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setCompartmentGeometricShapeHref(SBMLDocument* document, unsigned int layoutIndex, const std::string& href);

LIBSBMLNETWORK_EXTERN const std::string getSpeciesGeometricShapeHref(SBMLDocument* document);

/// @brief Sets the "href" attribute of the geometric shape element for all SpeciesGlyph objects in the specified layout.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param href a string representing the "href" attribute value.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setSpeciesGeometricShapeHref(SBMLDocument* document, unsigned int layoutIndex, const std::string& href);

LIBSBMLNETWORK_EXTERN const std::string getReactionGeometricShapeHref(SBMLDocument* document);

/// @brief Sets the "href" attribute of the geometric shape element for all ReactionGlyph objects and their SpeciesReferenceGlyph objects in the specified layout.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param href a string representing the "href" attribute value.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setReactionGeometricShapeHref(SBMLDocument* document, unsigned int layoutIndex, const std::string& href);

/// @brief Sets the "href" attribute of the geometric shape element for all GraphicalObject objects in the specified layout.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param href a string representing the "href" attribute value.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setGeometricShapeHref(SBMLDocument* document, unsigned int layoutIndex, const std::string& href);

/// @brief Sets the general style features of the SBMLDocument object.
/// @param document a pointer to the SBMLDocument object.
/// @param layoutIndex the index number of the Layout object.
/// @param styleName a string representing the name of the style to set.
/// @return integer value indicating success/failure of the function.
LIBSBMLNETWORK_EXTERN int setStyle(SBMLDocument* document, unsigned int layoutIndex, const std::string& styleName);

/// @brief Determines whether the style allows the display of the reaction text label.
/// @param styleName a string representing the name of the style.
/// @return boolean value indicating whether to display the reaction text label.
LIBSBMLNETWORK_EXTERN bool whetherDisplayReactionTextLabel(const std::string& styleName);

}

#endif