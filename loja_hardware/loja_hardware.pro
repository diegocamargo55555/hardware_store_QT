QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cpu_window.cpp \
    fonte_window.cpp \
    global.cpp \
    gpu_window.cpp \
    main.cpp \
    mainwindow.cpp \
    placa_mae_window.cpp

HEADERS += \
    cpu_window.h \
    data.h \
    data_main.h \
    data_placa.h \
    fonte_window.h \
    global.h \
    gpu_window.h \
    mainwindow.h \
    ordem.h \
    placa_mae_window.h

FORMS += \
    cpu_window.ui \
    fonte_window.ui \
    gpu_window.ui \
    mainwindow.ui \
    placa_mae_window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
