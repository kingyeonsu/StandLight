#include <iostream>
#include "Button.h"
#include "Led.h"
#include "Listener.h"
#include <wiringPi.h>

int main(void)
{
    std::cout << "Stand Light" << std::endl;
    
    Button button1(27);
    Led led1(25);
    Listener listener(&button1, &led1);

    while (1)
    {
        listener.checkEvent();
        delay(50);
    }

    return 0;
}