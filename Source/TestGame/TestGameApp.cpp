#include "TestGameStd.h"
#include "TestGameApp.h"
#include "TestGameLogic.h"
#include "../../GameEngine/Source/Actor/TransformComponent.h"
#include "TestHumanView.h"

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

    QSharedPointer<IGameView> testView(GCC_NEW TestHumanView(g_pApp->m_Renderer));
    m_pGame->VAddView(testView);

    return m_pGame;
}
