#-------------------------------------------------
#
# Project created by QtCreator 2016-04-25T17:26:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PlatformerGame
TEMPLATE = app


SOURCES += main.cc\
        Widgets/firstwindow.cc \
    Actors/characterIF.cc \
    protagonist.cc

HEADERS  += Widgets/firstwindow.hh \
    Actors/characterIF.hh \
    protagonist.hh

FORMS    += Widgets/firstwindow.ui

RESOURCES += \
    resources.qrc
