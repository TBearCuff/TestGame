#ifndef TESTGAMELOGIC_H
#define TESTGAMELOGIC_H

#include "../../../GameEngine/Source/GameEngine/BaseGameLogic.h"

class TestGameLogic : public BaseGameLogic
{
public:
    TestGameLogic();

    virtual bool VLoadGame(const char *levelResource){return true;}
    virtual void VSetProxy(){}
};

#endif // TESTGAMELOGIC_H
