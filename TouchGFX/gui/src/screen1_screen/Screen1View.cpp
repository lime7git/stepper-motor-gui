#include <gui/screen1_screen/Screen1View.hpp>

//#define SIMULATOR

#ifndef SIMULATOR
#define bool LIBRARY_bool
#include "x_nucleo_ihmxx.h"
#undef bool
#endif

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
#ifndef SIMULATOR
	if(flexButton1.getPressed() == true) BSP_MotorControl_Move(0, BACKWARD, 200);
#endif
}
void Screen1View::rightArrow()
{
#ifndef SIMULATOR
	BSP_MotorControl_Move(0, FORWARD, 200);
#endif
}
void Screen1View::stop()
{
#ifndef SIMULATOR
	BSP_MotorControl_CmdSoftHiZ(0);
#endif
}
