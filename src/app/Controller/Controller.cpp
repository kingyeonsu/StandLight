#include "Controller.h"

Controller::Controller(View *viewer)
{
    view = viewer;
    lightState = LIGHT_OFF;
}

Controller::~Controller()
{

}

void Controller::updateEvent(std::string strBtn)
{
    switch (lightState)
    {
    case LIGHT_OFF:
        if (strBtn == "powerButton") {
            lightState = LIGHT_ON1;
            view->updataState("StateOn1");
        }
        break;

    case LIGHT_ON1:
        if (strBtn == "powerButton") {
            lightState = LIGHT_ON2;
            view->updataState("StateOn2");
        }
        break;
    case LIGHT_ON2:
        if (strBtn == "powerButton") {
            lightState = LIGHT_ON3;
            view->updataState("StateOn3");
        }
        break;
    case LIGHT_ON3:
        if (strBtn == "powerButton") {
            lightState = LIGHT_ON4;
            view->updataState("StateOn4");
        }
        break;
    case LIGHT_ON4:
        if (strBtn == "powerButton") {
            lightState = LIGHT_ON5;
            view->updataState("StateOn5");
        }
        break;
    case LIGHT_ON5:
        if (strBtn == "powerButton") {
            lightState = LIGHT_OFF;
            view->updataState("StateOff");
        }
        break;
    }
}