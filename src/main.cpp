#include <iostream>
#include <wiringPi.h>
#include "Button.h"
#include "Listener.h"
#include "Controller.h"
#include "View.h"
#include "Led.h"

int main(void)
{
    std::cout << "Stand Light" << std::endl;
    
    Button button1(27);
    Led led1(25);
    View view(&led1);
    Controller control(&view);
    Listener listener(&button1, &control);

    while (1)
    {
        listener.checkEvent();
        view.lightView();
        delay(50);
    }

    return 0;
}