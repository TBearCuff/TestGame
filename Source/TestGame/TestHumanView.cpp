#include "TestGameStd.h"

#include "../../GameEngine/Source/GameEngine/GameEngineApp.h"

#include "TestHumanView.h"

TestMainMenuUI::TestMainMenuUI() : BaseUI()
{

}

TestMainMenuUI::~TestMainMenuUI()
{
}

bool TestMainMenuUI::VOnMsgProc(AppMsg msg)
{
//    return BaseUI::VOnMsgProc(msg);
    return true;
}

TestHumanView::TestHumanView(QSharedPointer<IRenderer> renderer) : HumanView(renderer )
{
    m_MainMenuUI.reset(GCC_NEW TestMainMenuUI);
    VPushElement(m_MainMenuUI);
}

TestHumanView::~TestHumanView()
{

}

void TestHumanView::VOnUpdate(unsigned long deltaMS)
{
    HumanView::VOnUpdate(deltaMS);
}

