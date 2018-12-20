#ifndef TESTHUMANVIEW_H
#define TESTHUMANVIEW_H

#include "../../GameEngine/Source/UserInterface/HumanView.h"

class TestHumanView : public HumanView
{
public:
    TestHumanView(QSharedPointer<IRenderer> renderer);
    virtual ~TestHumanView();
    virtual void VOnUpdate(unsigned long deltaMS);
//    virtual bool VOnMsgProc(AppMsg msg){return true;}
};

#endif // TESTHUMANVIEW_H
