#ifndef TESTHUMANVIEW_H
#define TESTHUMANVIEW_H
#include "TestGameStd.h"
#include "../../GameEngine/Source/UserInterface/HumanView.h"
//#include <QSharedPointer>


class TestMainMenuUI : public BaseUI
{
public:
    TestMainMenuUI();
    virtual ~TestMainMenuUI();

    // IScreenElement Implementation
    virtual bool VOnLostDevice() { return true; }
    virtual bool VOnRestore() { return true; }
    virtual void VOnRender(double , float ) {return;}
    virtual void VOnUpdate(int ) {return;}
    virtual int VGetZOrder() const { return 1; }
    virtual void VSetZOrder(int const ) { }
    virtual bool VOnMsgProc( AppMsg msg );

//	static void CALLBACK OnGUIEvent( UINT nEvent, int nControlID, CDXUTControl* pControl, void *pUserContext );
//	void CALLBACK _OnGUIEvent( UINT nEvent, int nControlID, CDXUTControl* pControl, void *pUserContext );

};


class TestHumanView : public HumanView
{
protected:
    QSharedPointer<TestMainMenuUI> m_MainMenuUI;

public:
    TestHumanView(QSharedPointer<IRenderer> renderer);
    virtual ~TestHumanView();
    virtual void VOnUpdate(unsigned long deltaMS);
    virtual bool VOnMsgProc(AppMsg msg){return true;}
};

#endif // TESTHUMANVIEW_H
