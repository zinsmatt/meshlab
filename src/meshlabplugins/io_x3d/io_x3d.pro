include (../../shared.pri)
INCLUDEPATH += /usr/include/eigen3/ \

HEADERS       += io_x3d.h import_x3d.h\
		export_x3d.h util_x3d.h \
		./vrml/Parser.h \
		./vrml/Scanner.h
				
SOURCES       += io_x3d.cpp ./vrml/Parser.cpp ./vrml/Scanner.cpp
				
TARGET        = io_x3d

INCLUDEPATH += /usr/include/eigen3/ \
