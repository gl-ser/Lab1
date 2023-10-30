#----------------------------------------------------------------------------#
#                       *** ЛАБОРАТОРНАЯ РАБОТА № 1 ***                      #
#                                                                            #
# Проект для Qt 5                                                            #
#                                                                            #
# Автор ГЛУЩЕНКО Сергей Юрьевич                                              #
#                                                                            #
#                                                   Москва, НИИ ТП, 2023 год #
#----------------------------------------------------------------------------#

QT -= gui

CONFIG += c++11 console

TARGET = Lab1

TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

DESTDIR = $$PWD/APP  #Размещение исполняемого файла

SOURCES += \
    main.cpp \
    GeometricMean.cpp \
    Factorial.cpp \
    Distance.cpp \
    EvenNumber.cpp \
    Palindrom.cpp \
    FindNumber.cpp \
    OtherFunc.cpp

HEADERS += \
    GeometricMean.h \
    Factorial.h \
    Distance.h \
    EvenNumber.h \
    Palindrom.h \
    FindNumber.h \
    OtherFunc.h
