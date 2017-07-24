#   QtCreator project options
#   Custom variables
#       Source code directory
SOURCEDIR = $${PWD}/../Source
#       Include headers directory
#       Base path for includes
BASE_INCLUDE_DIR = $${PWD}/../Include
#       Path to ide includings
IDE_INCLUDE_DIR = $${BASE_INCLUDE_DIR}/PythonIDE
#       Libraries directory
LIB_BASE_DIR = $${PWD}/../Libs

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
INCLUDEPATH += $${BASE_INCLUDE_DIR}
#       Declaration of used source files
SOURCES += $${SOURCEDIR}/Main.cpp\
           $${SOURCEDIR}/IDEWindow.cpp
#       Declaration of used header files
HEADERS += $${IDE_INCLUDE_DIR}/IDEWindow.h
#       Declaration of used libraries
#       NOTE: (alex) currently I am using windows to build app
#       Moreover, at the moment I decided to built-in python37 lib inside this ide
#       Maybe it is not proper way, but you should correctly include python files and libs
LIBS    += $${LIB_BASE_DIR}/python37_d.lib
