include (../../shared.pri)


HEADERS       += filter_trioptimize.h \
		curvedgeflip.h \
		curvdata.h 

SOURCES       += filter_trioptimize.cpp  
		 

TARGET        = filter_trioptimize
INCLUDEPATH += /usr/include/eigen3/ \
