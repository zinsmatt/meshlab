include (../../shared.pri)

HEADERS       += decorate_background.h cubemap.h

SOURCES      += decorate_background.cpp\
                cubemap.cpp

TARGET        = decorate_background

RESOURCES +=  decorate_background.qrc
INCLUDEPATH += /usr/include/eigen3/ \
