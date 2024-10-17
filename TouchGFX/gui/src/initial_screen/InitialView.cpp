#include <gui/initial_screen/InitialView.hpp>

InitialView::InitialView()
{

}

void InitialView::setupScreen()
{
    InitialViewBase::setupScreen();
}

void InitialView::tearDownScreen()
{
    InitialViewBase::tearDownScreen();
}

void InitialView::handleTickEvent()
{
		circleProgress1.setValue(circleProgress1.getValue() + 1);

		if(circleProgress1.getValue() == 100)
		{
			changeToScreen1();
		}
}
