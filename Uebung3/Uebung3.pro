TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
        tree.cpp \
        treeiterator.cpp \
        treenode.cpp \  
    map.cpp

HEADERS += \
        pair.h \
        MapToFirst.h \
        less.h \
        pair.h \
        tree.h \
        treeiterator.h \
        treenode.h \
        greater.h \
    map.h
