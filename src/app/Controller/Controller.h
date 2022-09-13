#ifndef CONTROLLER_H
#define CONTROLLER_H

#pragma once
#include "View.h"
#include "string"

class Controller
{
private:
    int lightState;
    View *view;

public:
    Controller(View *viewer);
    virtual ~Controller();
    void updateEvent(std::string strBtn);   // 어떤 버튼이 눌렸는지 문자열로
};

#endif