#-------------------------------------------------
#
# Project created by QtCreator 2016-04-25T17:26:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PlatformerGame
TEMPLATE = app
CONFIG += C+11


SOURCES += main.cc\
        Widgets/firstwindow.cc \
    Actors/protagonist.cc \
    Widgets/playscreen.cc \
    Obstacles/horizontalbrickwall.cc

HEADERS  += Widgets/firstwindow.hh \
    Actors/protagonist.hh \
    Widgets/playscreen.hh \
    Interface/obstacleif.hh \
    Interface/characterif.hh \
    Obstacles/horizontalbrickwall.hh

FORMS    += Widgets/firstwindow.ui \
    Widgets/playscreen.ui

RESOURCES += \
    resources.qrc

