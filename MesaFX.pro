#-------------------------------------------------
#
# Project created by QtCreator 2016-05-06T09:02:43
#
#-------------------------------------------------
TEMPLATE = app

QT       += core gui

INCLUDEPATH += "C:\\Program Files\\Csound6_x64\\include\\csound"

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MesaFX
TEMPLATE = app


SOURCES += main.cpp\
        ventanaprincipal.cpp

include(deployment.pri)

HEADERS  += ventanaprincipal.h

LIBS += -L "C:\\Program Files\\Csound6_x64\\bin"

FORMS    += ventanaprincipal.ui
