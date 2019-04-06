TEMPLATE=subdirs
CONFIG += ordered
include(common.pri)
qtsoap-uselib:SUBDIRS=buildlib
SUBDIRS+=examples
INCLUDEPATH += /usr/include/eigen3/ \
