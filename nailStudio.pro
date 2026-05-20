QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    formulariocita.cpp \
    historial.cpp \
    main.cpp \
    nailstudio.cpp \
    pantallaadmin.cpp

HEADERS += \
    Chatbot.h \
    Cita.h \
    Cliente.h \
    Cola.h \
    Diseno.h \
    Header.h \
    Nodo.h \
    Pila.h \
    Servicio.h \
    formulariocita.h \
    gestorCitas.h \
    gestorClientes.h \
    historial.h \
    nailstudio.h \
    pantallaadmin.h

FORMS += \
    formulariocita.ui \
    historial.ui \
    nailstudio.ui \
    pantallaadmin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
