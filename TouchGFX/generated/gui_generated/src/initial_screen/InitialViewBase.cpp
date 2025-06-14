/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/initial_screen/InitialViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

InitialViewBase::InitialViewBase() :
    interaction7EndedCallback(this, &InitialViewBase::interaction7EndedCallbackHandler),
    buttonCallback(this, &InitialViewBase::buttonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_PUZZLE_ID));
    background.setPosition(0, 0, 480, 272);
    background.setOffset(0, 0);
    background.setAlpha(0);
    add(background);

    initializeProgress.setXY(185, 155);
    initializeProgress.setProgressIndicatorPosition(0, 0, 110, 110);
    initializeProgress.setRange(0, 100, 50, 0);
    initializeProgress.setCenter(55, 55);
    initializeProgress.setRadius(50);
    initializeProgress.setLineWidth(10);
    initializeProgress.setStartEndAngle(-90, 270);
    initializeProgress.setCapPrecision(10);
    initializeProgress.setBackground(touchgfx::Bitmap(BITMAP_DARK_THEME_IMAGES_WIDGETS_CIRCLEPROGRESS_BACKGROUNDS_SMALL_ID));
    initializeProgressPainter.setColor(touchgfx::Color::getColorFromRGB(8, 9, 9));
    initializeProgress.setPainter(initializeProgressPainter);
    initializeProgress.setValue(0);
    initializeProgress.setAlpha(0);
    add(initializeProgress);

    initializeButton.setXY(210, 180);
    initializeButton.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_TINY_OUTLINE_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUND_TINY_OUTLINE_PRESSED_ID));
    initializeButton.setLabelText(touchgfx::TypedText(T___SINGLEUSE_V3V5));
    initializeButton.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    initializeButton.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    initializeButton.setAlpha(0);
    initializeButton.setAction(buttonCallback);
    add(initializeButton);

    logo.setXY(50, 75);
    logo.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    logo.setLinespacing(0);
    logo.setTypedText(touchgfx::TypedText(T___SINGLEUSE_C4VB));
    logo.setAlpha(0);
    add(logo);
}

InitialViewBase::~InitialViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void InitialViewBase::setupScreen()
{
    transitionBegins();
}

void InitialViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &initializeButton)
    {
        //Interaction6
        //When initializeButton clicked fade initializeButton
        //Fade initializeButton to alpha:0 with CubicOut easing in 200 ms (12 Ticks)
        initializeButton.clearFadeAnimationEndedAction();
        initializeButton.startFadeAnimation(0, 12, touchgfx::EasingEquations::cubicEaseOut);
        //Interaction7
        //When initializeButton clicked fade initializeProgress
        //Fade initializeProgress to alpha:150 with CubicIn easing in 200 ms (12 Ticks)
        initializeProgress.clearFadeAnimationEndedAction();
        initializeProgress.startFadeAnimation(150, 12, touchgfx::EasingEquations::cubicEaseIn);
        initializeProgress.setFadeAnimationEndedAction(interaction7EndedCallback);
    }
}

void InitialViewBase::changeToScreen1()
{
    //Interaction1
    //When changeToScreen1 is called change screen to Main
    //Go to Main with block transition
    application().gotoMainScreenBlockTransition();
}

void InitialViewBase::transitionBegins()
{
    //Interaction3
    //When screen transition begins fade background
    //Fade background to alpha:255 with LinearIn easing in 1000 ms (60 Ticks)
    background.clearFadeAnimationEndedAction();
    background.setFadeAnimationDelay(15);
    background.startFadeAnimation(255, 60, touchgfx::EasingEquations::linearEaseIn);

    //Interaction5
    //When screen transition begins fade initializeButton
    //Fade initializeButton to alpha:200 with LinearIn easing in 1000 ms (60 Ticks)
    initializeButton.clearFadeAnimationEndedAction();
    initializeButton.setFadeAnimationDelay(15);
    initializeButton.startFadeAnimation(200, 60, touchgfx::EasingEquations::linearEaseIn);

    //Interaction8
    //When screen transition begins fade logo
    //Fade logo to alpha:200 with LinearIn easing in 1000 ms (60 Ticks)
    logo.clearFadeAnimationEndedAction();
    logo.setFadeAnimationDelay(15);
    logo.startFadeAnimation(200, 60, touchgfx::EasingEquations::linearEaseIn);
}

void InitialViewBase::interaction7EndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::CircleProgress>& comp)
{
    //Interaction4
    //When Interaction7 completed call screenTransitionEnds on Initial
    //Call screenTransitionEnds
    screenTransitionEnds();

}
