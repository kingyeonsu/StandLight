#include "View.h"
#include <wiringPi.h>

View::View(Led *Led)
{
    light = Led;
    lightState = LIGHT_OFF;
}

View::~View()
{

}

void View::updataState(std::string strState)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if (strState == "StateOn") {
            lightState = LIGHT_ON;
        }
        break;

    case LIGHT_ON:
        if (strState == "StateOff") {
            lightState = LIGHT_OFF;
        }
        break;
    }  
}

void View::lightView()
{
    switch (lightState)
    {
    case LIGHT_OFF:
        lightOff();
        break;

    case LIGHT_ON:
        lightOn();
        break;
    }
}

void View::lightOn()
{
    static unsigned int prevTime = 0;

    if (millis() - prevTime < 300)  return;
    prevTime = millis();    // 1msec 간격으로 계속 증가
    light->Toggle();
}

void View::lightOff()
{
    light->Off();
}