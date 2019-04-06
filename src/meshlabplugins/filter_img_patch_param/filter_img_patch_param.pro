include (../../shared.pri)


SOURCES = filter_img_patch_param.cpp \
          VisibleSet.cpp \
          VisibilityCheck.cpp \
          TexturePainter.cpp

HEADERS = filter_img_patch_param.h \
          VisibleSet.h \
          VisibilityCheck.h \
          TexturePainter.h \
          Patch.h
INCLUDEPATH += /usr/include/eigen3/ \

TARGET = filter_img_patch_param
INCLUDEPATH += /usr/include/eigen3/ \
