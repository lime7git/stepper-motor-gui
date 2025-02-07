#include <gui/main_screen/MainView.hpp>

#ifndef SIMULATOR
#define bool LIBRARY_bool
#include "x_nucleo_ihmxx.h"
#undef bool
#endif

MainView::MainView()
{

}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

void MainView::leftArrow()
{
#ifndef SIMULATOR
	BSP_MotorControl_CmdSetParam(0, 5, ((uint16_t)(((float)(accelerationSlider.getValue())*0.068719476736f)+0.5f)));
	BSP_MotorControl_CmdSetParam(0, 6, ((uint16_t)(((float)(deccelerationSlider.getValue())*0.068719476736f)+0.5f)));
	BSP_MotorControl_CmdSetParam(0, 7, ((uint16_t)(((float)(speedTarget)*0.065536f)+0.5f)));
	//BSP_MotorControl_Move(0, BACKWARD, stepTarget);
	BSP_MotorControl_GoTo(0, BSP_MotorControl_GetPosition(0) - stepTarget);
	//BSP_MotorControl_Run(0, BACKWARD, ((uint32_t)(((float)(speedTarget)*67.108864f)+0.5f)));
#endif
}
void MainView::rightArrow()
{
#ifndef SIMULATOR
	BSP_MotorControl_CmdSetParam(0, 5, ((uint16_t)(((float)(accelerationSlider.getValue())*0.068719476736f)+0.5f)));
	BSP_MotorControl_CmdSetParam(0, 6, ((uint16_t)(((float)(deccelerationSlider.getValue())*0.068719476736f)+0.5f)));
	BSP_MotorControl_CmdSetParam(0, 7, ((uint16_t)(((float)(speedTarget)*0.065536f)+0.5f)));
	//BSP_MotorControl_Move(0, FORWARD, stepTarget);
	BSP_MotorControl_GoTo(0, BSP_MotorControl_GetPosition(0) + stepTarget);
	//BSP_MotorControl_Run(0, FORWARD, ((uint32_t)(((float)(speedTarget)*67.108864f)+0.5f)));
#endif
}
void MainView::stop()
{
#ifndef SIMULATOR
	if(!hardStopButton.getState())
	{
		BSP_MotorControl_CmdHardHiZ(0);
	}
	else
	{
		BSP_MotorControl_CmdSoftHiZ(0);
	}
#endif
}

void MainView::stepButtonUpClicked()
{
	stepTarget = ((stepTarget += stepTargetStep) > stepTargetMax) ? stepTargetMax : stepTarget;
	updateGFXElements();
}

void MainView::stepButtonDownClicked()
{
	stepTarget = ((stepTarget -= stepTargetStep) <= stepTargetMin) ? stepTargetMin : stepTarget;
	updateGFXElements();
}

void MainView::speedButtonUpClicked()
{
	speedTarget = ((speedTarget += speedTargetStep) > speedTargetMax) ? speedTargetMax : speedTarget;
	updateGFXElements();
}

void MainView::speedButtonDownClicked()
{
	speedTarget = ((speedTarget -= speedTargetStep) <= speedTargetMin) ? speedTargetMin : speedTarget;
	updateGFXElements();
}

void MainView::updateGFXElements()
{
	//Counter text area GFX uptade.
	Unicode::snprintf(stepTextBuffer, STEPTEXT_SIZE, "%d", stepTarget);
	Unicode::snprintf(speedTextBuffer, SPEEDTEXT_SIZE, "%d", speedTarget);

	// Invalidate all GFX area, which will result in it being redrawn in next tick.
	stepText.invalidate();
	speedText.invalidate();
}

void MainView::handleTickEvent()
{
#ifndef SIMULATOR
	if(tickCounter > 1 )
	{
	//Counter text area GFX uptade.
	Unicode::snprintf(currentPositionTextBuffer, CURRENTPOSITIONTEXT_SIZE, "%d", BSP_MotorControl_GetPosition(0));
	Unicode::snprintf(currentSpeedTextBuffer, CURRENTSPEEDTEXT_SIZE, "%d", (uint32_t)((float)BSP_MotorControl_CmdGetParam(0, 4)*0.015625f));

	// Invalidate all GFX area, which will result in it being redrawn in next tick.
	currentPositionText.invalidate();
	currentSpeedText.invalidate();

	tickCounter = 0;
	}
	else
	{
		tickCounter++;
	}
#endif
}

void MainView::hardStopButtonClicked()
{
	hardStop = hardStopButton.getState();
}
