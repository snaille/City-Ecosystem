#-------------------------------------------------
#
# Project created by QtCreator 2015-05-01T19:57:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = City-Ecosystem
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    user.cpp \
    dbmanager.cpp \
    settings.cpp

HEADERS  += mainwindow.h \
    user.h \
    dbmanager.h \
    settings.h

FORMS    += mainwindow.ui
