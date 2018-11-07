#include "TestGameApp.h"
#include "TestGameLogic.h"
#include "../../GameEngine/Source/Actor/TransformComponent.h"

TestGameApp::TestGameApp(int argc, char *argv[]) : GameEngineApp(argc, argv)
{

}

QString TestGameApp::VGetGameAppDirectory()
{
    return QString("/1.0/");
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
