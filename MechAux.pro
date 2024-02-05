QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cadastroitems.cpp \
    cadastroveiculos.cpp \
    estoque.cpp \
    estoquewindow.cpp \
    item.cpp \
    main.cpp \
    mainwindow.cpp \
    unit_estoque.cpp \
    unit_item.cpp \
    unit_veiculo.cpp \
    veiculo.cpp

HEADERS += \
    cadastroitems.h \
    cadastroveiculos.h \
    estoque.h \
    estoquewindow.h \
    item.h \
    mainwindow.h \
    unit_estoque.h \
    unit_item.h \
    unit_veiculo.h \
    veiculo.h

FORMS += \
    cadastroitems.ui \
    cadastroveiculos.ui \
    estoquewindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
