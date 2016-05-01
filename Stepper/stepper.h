#ifndef STEPPER_H
#define STEPPER_H

#include "../GPIO/gpio.h"
#include "../utils/utils.h"

typedef struct stepper_t * stepper;

stepper stepperCreate(pinNumber in1, pinNumber in2, pinNumber in3, pinNumber in4);
void step(stepper s, int steps);
int stepperDestroy(stepper s);

#endif
