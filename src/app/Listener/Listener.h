#ifndef LISTENER_H
#define LISTENER_H

#pragma once

#include "Button.h"     
#include "Controller.h"  

class Listener
{
private:
    Button *powerButton;
    Controller *controller;
public:
    Listener(Button *button, Controller *controller);
    ~Listener();
    void checkEvent();
};


#endif