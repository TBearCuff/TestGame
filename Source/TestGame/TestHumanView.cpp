#include "TestGameStd.h"


#include "TestHumanView.h"

TestHumanView::TestHumanView(QSharedPointer<IRenderer> renderer) : HumanView(renderer )
{

}

TestHumanView::~TestHumanView()
{

}

void TestHumanView::VOnUpdate(unsigned long deltaMS)
{
    HumanView::VOnUpdate(deltaMS);
}
