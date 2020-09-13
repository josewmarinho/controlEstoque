QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mw_gestaocolaboradores.cpp \
    mw_gestaoestoque.cpp \
    mw_gestaovendas.cpp \
    mw_logar.cpp \
    mw_novavenda.cpp \
    mw_principal.cpp

HEADERS += \
    Conexao.h \
    mw_gestaocolaboradores.h \
    mw_gestaoestoque.h \
    mw_gestaovendas.h \
    mw_logar.h \
    mw_novavenda.h \
    mw_principal.h

FORMS += \
    mw_gestaocolaboradores.ui \
    mw_gestaoestoque.ui \
    mw_gestaovendas.ui \
    mw_logar.ui \
    mw_novavenda.ui \
    mw_principal.ui

TRANSLATIONS += \
    ControlEstoque_pt_BR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    arquivo_de_recursos.qrc
