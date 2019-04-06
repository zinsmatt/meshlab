config += debug_and_release
TEMPLATE      = subdirs
SUBDIRS       = meshlab \
                meshlabplugins/meshlabpluginsv11_plus_quality_mapper.pro
INCLUDEPATH += /usr/include/eigen3/ \
