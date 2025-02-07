#ifndef MAINVIEW_HPP
#define MAINVIEW_HPP

#include <gui_generated/main_screen/MainViewBase.hpp>
#include <gui/main_screen/MainPresenter.hpp>

class MainView : public MainViewBase
{
public:
    MainView();
    virtual ~MainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void leftArrow();
    virtual void rightArrow();
    virtual void stop();
    virtual void stepButtonUpClicked();
    virtual void stepButtonDownClicked();
    virtual void speedButtonUpClicked();
    virtual void speedButtonDownClicked();
    virtual void handleTickEvent();
    virtual void hardStopButtonClicked();

    void updateGFXElements();
protected:
    unsigned int speedTarget = 48;
    unsigned int stepTarget = 3072;
    unsigned int const speedTargetMax = 10000;
    unsigned int const speedTargetMin = 48;
    unsigned int const speedTargetStep = 100;
    unsigned int const stepTargetMax = 24576;
    unsigned int const stepTargetMin = 512;
    unsigned int const stepTargetStep = 512;
    unsigned int tickCounter = 0;
    bool hardStop = false;
};

#endif // MAINVIEW_HPP
