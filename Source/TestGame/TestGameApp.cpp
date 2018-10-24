#include "TestGameApp.h"
#include "TestGameLogic.h"

TestGameApp::TestGameApp(int argc, char *argv[]) : GameEngineApp(argc, argv)
{

}

BaseGameLogic *TestGameApp::VCreateGameAndView()
{
    m_pGame = new TestGameLogic();
    return m_pGame;
}
