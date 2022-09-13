#include <iostream>
#include <wiringPi.h>
#include "Button.h"
#include "Led.h"
#include "Listener.h"

int main(void)
{
    std::cout << "Stand Light" << std::endl;
    
    Button button1(27);
    Led led1(25);
    Controller control(&led1);
    Listener listener(&button1, &control);

    while (1)
    {
        listener.checkEvent();
        delay(50);
    }

    return 0;
}