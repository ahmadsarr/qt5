#-------------------------------------------------
#
# Project created by QtCreator 2018-11-16T08:25:23
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Anki
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    utilisateur.cpp \
    carte.cpp \
    administrateur.cpp \
    jeudecartes.cpp

HEADERS += \
    utilisateur.h \
    carte.h \
    administrateur.h \
    jeudecartes.h
