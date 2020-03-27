
INCLUDEPATH += $$PWD

HEADERS += $$PWD/tool4dumper.h

win32{
HEADERS += $$PWD/mdump.h
SOURCES += $$PWD/mdump.cpp
}
