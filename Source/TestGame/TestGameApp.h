#ifndef TESTGAMEAPP_H
#define TESTGAMEAPP_H

#include "../../../GameEngine/Source/GameEngine/GameEngineApp.h"

class TestGameApp : public GameEngineApp
{
public:
    TestGameApp(int argc, char* argv[]);

//    virtual bool VLoadGame() {return true;}
protected:
    virtual BaseGameLogic *VCreateGameAndView();
};

#endif // TESTGAMEAPP_H
