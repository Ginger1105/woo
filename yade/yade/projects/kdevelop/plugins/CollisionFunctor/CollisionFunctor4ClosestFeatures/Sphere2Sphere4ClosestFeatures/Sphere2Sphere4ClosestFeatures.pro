# File generated by kdevelop's qmake manager. 
# ------------------------------------------- 
# Subdir relative project main directory: ./plugins/CollisionFunctor/CollisionFunctor4ClosestFeatures/Sphere2Sphere4ClosestFeatures
# Target is a library:  

LIBS += -lSphere \
        -lClosestFeatures \
        -lMath \
        -lGeometry \
        -lInteraction \
        -lMultiMethods \
        -rdynamic 
INCLUDEPATH = ../../../../plugins/GeometricalModel/Sphere \
              ../../../../plugins/InteractionModel/ClosestFeatures \
              ../../../../yade/yade \
              ../../../../yade/Interaction \
              ../../../../yade/Geometry \
              ../../../../yade/MultiMethods \
              ../../../../yade/Factory \
              ../../../../toolboxes/Libraries/Math \
              ../../../../toolboxes/Libraries/Serialization 
MOC_DIR = $(YADECOMPILATIONPATH) 
UI_DIR = $(YADECOMPILATIONPATH) 
OBJECTS_DIR = $(YADECOMPILATIONPATH) 
QMAKE_LIBDIR = ../../../../plugins/GeometricalModel/Sphere/$(YADEDYNLIBPATH) \
               ../../../../plugins/InteractionModel/ClosestFeatures/$(YADEDYNLIBPATH) \
               ../../../../toolboxes/Libraries/Math/$(YADEDYNLIBPATH) \
               ../../../../yade/Geometry/$(YADEDYNLIBPATH) \
               ../../../../yade/Interaction/$(YADEDYNLIBPATH) \
               ../../../../yade/MultiMethods/$(YADEDYNLIBPATH) \
               $(YADEDYNLIBPATH) 
DESTDIR = $(YADEDYNLIBPATH) 
CONFIG += release \
          warn_on \
          dll 
TEMPLATE = lib 
HEADERS += Sphere2Sphere4ClosestFeatures.hpp 
SOURCES += Sphere2Sphere4ClosestFeatures.cpp 
