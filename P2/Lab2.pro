QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bonus.cpp \
    problema1.cpp \
    problema10.cpp \
    problema12.cpp \
    problema14.cpp \
    problema16.cpp \
    problema18.cpp \
    problema2.cpp \
    problema4.cpp \
    problema6.cpp \
    problema8.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
