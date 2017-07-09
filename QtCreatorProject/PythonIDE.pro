#   QtCreator project options
#   Custom variables
#       Source code directory
SOURCEDIR = $${PWD}/../Source
#       Include headers directory
INCLUDEDIR = $${PWD}/../Include

#   Qt options
#       Project type
TEMPLATE = app
#       Name of executable for the application
TARGET = PythonIDE
#       Destination folder (stores all target files)
DESTDIR = $${PWD}/../Bin
#       Temporary objects directory
OBJECTS_DIR = $${PWD}/../Temp
#       Directory of generated makefiles
OUT_PWD = $${PWD}/../Temp
#       Declaration of qt libraries
QT       += core gui
#       Conditional including widgets library
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
#       Adding flag to emit warnings in the case of usage deprecated api
DEFINES += QT_DEPRECATED_WARNINGS
#       Additional include path for compiler to find headers
INCLUDEPATH += $${INCLUDEDIR}
#       Declaration of used source files
SOURCES += $${SOURCEDIR}/Main.cpp\
           $${SOURCEDIR}/IDEWindow.cpp
#       Declaration of used header files
HEADERS  += $${INCLUDEDIR}/IDEWindow.h

