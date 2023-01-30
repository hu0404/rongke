QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    check.cpp \
    checkfontpage.cpp \
    checkquantityreason.cpp \
    fontpage.cpp \
    form.cpp \
    main.cpp \
    checkquantity.cpp \
    maintainance.cpp \
    ordermanage.cpp \
    productionreport.cpp \
    productionsop.cpp \
    repair.cpp

HEADERS += \
    check.h \
    checkfontpage.h \
    checkquantity.h \
    checkquantityreason.h \
    fontpage.h \
    form.h \
    maintainance.h \
    ordermanage.h \
    productionreport.h \
    productionsop.h \
    repair.h

FORMS += \
    check.ui \
    checkfontpage.ui \
    checkquantity.ui \
    checkquantityreason.ui \
    fontpage.ui \
    form.ui \
    maintainance.ui \
    ordermanage.ui \
    productionreport.ui \
    productionsop.ui \
    repair.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    picture/picture.qrc

DISTFILES +=
