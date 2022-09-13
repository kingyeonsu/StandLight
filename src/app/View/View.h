#ifndef VIEW_H
#define VIEW_H

#pragma once

#include <string>
#include "Led.h"

enum {LIGHT_OFF, LIGHT_ON};

class View
{
private:
    int lightState;
    Led *light;

public:
    View(Led *Led);
    ~View();
    void lightView();
    void updataState(std::string strState);
    void lightOn();
    void lightOff();

};

#endif