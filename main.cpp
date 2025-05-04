/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     200ms


int main()
{
    // Initialise the digital pin LED1 as an output
#ifdef LED1
    DigitalOut led(LED1);
    DigitalOut led2(LED2);
    DigitalOut led3(LED3);
#else
    bool led, led2, led3;
#endif
int count = 0;
    while (true) {
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE);
        led = !led;
        led2 = !led2;
        ThisThread::sleep_for(BLINKING_RATE);
        led2 = !led2;
        led3 = !led3;
        ThisThread::sleep_for(BLINKING_RATE);
        led3 = !led3;
        count = count + 1;
        if (count == 5){
            break;
            }
    }
    led = true;
    led2 = false;
    led3 = false;
}
