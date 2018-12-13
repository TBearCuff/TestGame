#include "TestGameStd.h"


#include "TestHumanView.h"

TestHumanView::TestHumanView() : HumanView(QSharedPointer<IRenderer>() )
{

}

TestHumanView::~TestHumanView()
{

}

void TestHumanView::VOnUpdate(unsigned long deltaMS)
{
    HumanView::VOnUpdate(deltaMS);
}
