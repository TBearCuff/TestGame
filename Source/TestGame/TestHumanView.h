#ifndef TESTHUMANVIEW_H
#define TESTHUMANVIEW_H
//#include "TestGameStd.h"
#include "../../GameEngine/Source/UserInterface/HumanView.h"
//#include <QSharedPointer>
#include <QOpenGLBuffer>
#include <QOpenGLTexture>

class TestMainMenuUI : public BaseUI
{
public:
    TestMainMenuUI();
    virtual ~TestMainMenuUI();

    // IScreenElement Implementation
    virtual bool VOnLostDevice() { return true; }
    virtual bool VOnRestore();
    virtual void VOnRender(double , float );
    virtual void VOnUpdate(int ) {return;}
    virtual int VGetZOrder() const { return 1; }
    virtual void VSetZOrder(int const ) { }
    virtual bool VOnMsgProc( AppMsg msg );

private:
    QOpenGLBuffer m_vertex;
    QOpenGLBuffer *m_index;
    QOpenGLTexture *texture;
    //	static void CALLBACK OnGUIEvent( UINT nEvent, int nControlID, CDXUTControl* pControl, void *pUserContext );
//	void CALLBACK _OnGUIEvent( UINT nEvent, int nControlID, CDXUTControl* pControl, void *pUserContext );

};


class TestHumanView : public HumanView
{
protected:
    QSharedPointer<TestMainMenuUI> m_MainMenuUI;

public:
    TestHumanView(QSharedPointer<OpenGLRenderWindow> renderer);
    virtual ~TestHumanView();
    virtual void VOnUpdate(unsigned long deltaMS);
    virtual bool VOnMsgProc(AppMsg msg){ Q_UNUSED(msg);return true;}
};

#endif // TESTHUMANVIEW_H
