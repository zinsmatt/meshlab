include (../../shared.pri)
INCLUDEPATH += /usr/include/eigen3/ \

HEADERS       += io_pdb.h \
		$$VCGDIR/wrap/ply/plylib.h 
				
SOURCES       += io_pdb.cpp \
		$$VCGDIR//wrap/ply/plylib.cpp\ 
		

TARGET        = io_pdb
INCLUDEPATH += /usr/include/eigen3/ \
