#ifndef TESTGAMELOGIC_H
#define TESTGAMELOGIC_H

//#include "TestGameStd.h"
#include "../../../GameEngine/Source/GameEngine/BaseGameLogic.h"

class TestGameLogic : public BaseGameLogic
{
public:
    TestGameLogic();

    virtual bool VLoadGame(const char *){return true;}
    virtual void VSetProxy(){}

    virtual void VChangeState(BaseGameState newState);
};

#endif // TESTGAMELOGIC_H
