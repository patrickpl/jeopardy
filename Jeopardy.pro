#-------------------------------------------------
#
# Project created by QtCreator 2013-12-28T14:56:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Jeopardy
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    game.cpp

HEADERS  += mainwindow.h \
    game.h

FORMS    += mainwindow.ui

QMAKE_CXXFLAGS += -std=c++11

OTHER_FILES += \
    stylesheet.css
