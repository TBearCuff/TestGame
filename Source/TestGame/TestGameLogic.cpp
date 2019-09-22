#include "TestGameStd.h"
#include "TestGameLogic.h"

TestGameLogic::TestGameLogic()
{

}

void TestGameLogic::VChangeState(BaseGameState newState)
{
    BaseGameLogic::VChangeState(newState);
}
