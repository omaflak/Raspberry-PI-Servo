#include <wiringPi.h> // don't forget
#include <cstdlib>
#include "libServo.h"

using namespace std;

int pin=24;

int main()
{

    if (wiringPiSetup() == -1)
        exit(1);

    Servo servo(pin);
    servo.init(90); // initialize the servo to an angle. Need to be called only once

    servo.move(180); // Then move the servo to any angle
    servo.move(0);
}
