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
            lightState = LIGHT_ON;
            view->updataState("StateOn");
        }
        break;
            
    case LIGHT_ON:
        if (strBtn == "powerButton") {
            lightState = LIGHT_OFF;
            view->updataState("StateOff");
        }
        break;
    }
}