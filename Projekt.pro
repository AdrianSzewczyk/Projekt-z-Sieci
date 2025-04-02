QT       += core gui charts


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets charts

CONFIG += c++17
#QMAKE_CXXFLAGS += -Wall -Wextra -Wpedantic
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0  //w tej linijce moze byc blad!!!! <-----------

SOURCES += \
    generator.cpp \
    main.cpp \
    mainwindow.cpp \
    obiektarx.cpp \
    oknoobiektarx.cpp \
    regulator.cpp \
    symulator.cpp \
    warstwauslug.cpp \
    wykresy.cpp \

HEADERS += \
        generator.h \
        mainwindow.h \
        obiektarx.h \
        oknoobiektarx.h \
        regulator.h \
        symulator.h \
        warstwauslug.h \
        wykresy.h \

FORMS += \
    mainwindow.ui \
    oknoobiektarx.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
