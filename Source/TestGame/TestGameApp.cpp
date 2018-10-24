#include "TestGameApp.h"

TestGameApp::TestGameApp(int argc, char *argv[]) : GameEngineApp(argc, argv)
{

}

BaseGameLogic *TestGameApp::VCreateGameAndView()
{
    return m_pGame;
}
