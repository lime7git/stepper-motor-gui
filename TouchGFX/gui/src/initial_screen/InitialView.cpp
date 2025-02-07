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
	if(transitionEnds)
	{
		initializeProgress.setValue(initializeProgress.getValue() + 1);

		if(initializeProgress.getValue() == 100)
		{
			changeToScreen1();
		}
	}
}

void InitialView::screenTransitionEnds()
{
	transitionEnds = true;
}
