#include "TestGameApp.h"
#include "TestGameLogic.h"

TestGameApp::TestGameApp(int argc, char *argv[]) : GameEngineApp(argc, argv)
{

}

BaseGameLogic *TestGameApp::VCreateGameAndView()
{
    m_pGame = new TestGameLogic();
    //initialize the game logic
    m_pGame->Init();

//    shared_ptr<IGameView> menuView(GCC_NEW MainMenuView());
//	m_pGame->VAddView(menuView);

    return m_pGame;
}
