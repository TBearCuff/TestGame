#ifndef TESTGAMEAPP_H
#define TESTGAMEAPP_H

//#include "TestGameStd.h"


class TestGameApp : public GameEngineApp
{
public:
    TestGameApp(int argc, char* argv[]);
    virtual QString VGetGameTitle() { return QString("TestGame"); }
    virtual QString VGetGameAppDirectory();

//    virtual bool VLoadGame() {return true;}
protected:
    virtual BaseGameLogic *VCreateGameAndView();
};

#endif // TESTGAMEAPP_H
