#-------------------------------------------------
#
# Project created by QtCreator 2016-11-19T15:13:27
#
#-------------------------------------------------
QT += charts
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FuzzyLogicLoan
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    clientquestionnaire.cpp \
    inputdataruleschart.cpp \
    inputdatarules.cpp

HEADERS  += mainwindow.h \
    clientquestionnaire.h \
    inputdataruleschart.h \
    inputdatarules.h

FORMS    += mainwindow.ui

DISTFILES += \
    LICENSE \
    README.md
