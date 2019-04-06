system(cmake ..)
system(make)
system(cp lib/libfreenect.* ../../lib)
INCLUDEPATH += /usr/include/eigen3/ \
