#include <gui/screen1_screen/Screen1View.hpp>

#define bool LIBRARY_bool
#include "x_nucleo_ihmxx.h"
#undef bool

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::leftArrow()
{
	// Override and implement this function in Screen1
	BSP_MotorControl_Move(0, BACKWARD, 1600);
}
void Screen1View::rightArrow()
{
	// Override and implement this function in Screen1
	BSP_MotorControl_Move(0, FORWARD, 1600);
}
void Screen1View::stop()
{
	// Override and implement this function in Screen1
	BSP_MotorControl_CmdSoftHiZ(0);
}
