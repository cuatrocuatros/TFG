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

INCLUDEPATH += "C:\\Program Files\\Csound6_x64\\include\\csound"

LIBS +=  "C:\\Program Files\\Csound6_x64\\bin"
