#ifndef CONTROLLER_H
#define CONTROLLER_H

#pragma once
#include "Led.h"
#include "string"

enum {LIGHT_OFF, LIGHT_ON};

class Controller
{
private:
    int lightState;
    Led *light;

public:
    Controller(Led *Led);
    virtual ~Controller();
    void updateEvent(std::string strBtn);   // 어떤 버튼이 눌렸는지 문자열로
};

#endif