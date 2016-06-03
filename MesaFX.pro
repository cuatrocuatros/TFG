#-------------------------------------------------
#
# Project created by QtCreator 2016-05-01T12:25:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MesaFX
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

win64 { # I am not sure, if win64 is valid condition...
INCLUDEPATH += "C:\\Program Files\\Csound6_x64\\include\\csound"
LIBS += L "C:\\Program Files\\Csound6_x64\\bin" # capital L for setting library path
}

linux {
	linux: INCLUDEPATH += /usr/local/include/csound
}
linux|win32|win64: LIBS += -lcsound64 # lowercase l for including the library
