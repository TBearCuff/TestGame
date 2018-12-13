

QT       += widgets
QT      += xml


TARGET = TestGame
TEMPLATE = app
QMAKE_CXXFLAGS += -Wno-literal-suffix -Wno-ignored-qualifiers
CONFIG += c++11

DESTDIR = ../../Game

INCLUDEPATH += ../
INCLUDEPATH += $$PWD/../../../GameEngine/UBGEngineLib
#INCLUDEPATH += $$PWD/../../../UBGEngine/3rdParty/tinyxml2
#LIBS += -ldl
LIBS += -L$$PWD/../../../GameEngine/Lib -lGameEngine

unix {
CONFIG(debug) {
#LIBS += -L$$PWD/../../../GameEngine/Lib/LinuxDebug -ltinyxml2d
LIBS += -L$$PWD/../../../GameEngine/Lib/LinuxDebug -lz
#LIBS += -L$$PWD/../../../GameEngine/Lib/Linux64Debug -llua53d
} else {
#LIBS += -L$$PWD/../../../GameEngine/Lib/LinuxRelease -ltinyxml2
LIBS += -L$$PWD/../../../GameEngine/Lib/LinuxRelease -lz
#LIBS += -L$$PWD/../../../GameEngine/Lib/Linux64Release -llua53
}
}


PRECOMPILED_HEADER = TestGameStd.h

HEADERS += \
    TestGameApp.h \
    TestGameLogic.h \
    TestGameStd.h \
    TestHumanView.h

SOURCES += \
    TestGameApp.cpp \
    TestGame.cpp \
    TestGameLogic.cpp \
    TestHumanView.cpp

RESOURCES += \
    resources.qrc


