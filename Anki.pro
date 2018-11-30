#-------------------------------------------------
#
# Project created by QtCreator 2018-11-26T11:34:06
#
#-------------------------------------------------

QT       += core


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Anki
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    administrateur.cpp \
    carte.cpp \
    GestionnaireAnki.cpp \
    jeuDeCartes.cpp \
    utilisateur.cpp

HEADERS  += mainwindow.h\
    administrateur.h \
    carte.h \
    GestionnaireAnki.h \
    jeuDeCartes.h \
    utilisateur.h

FORMS    += mainwindow.ui

RESOURCES += \
    data.qrc
