#include <wiringPi.h>
#include <cstdlib>
#include "libServo.h"

using namespace std;

int pin=24;

int main()
{

    if (wiringPiSetup() == -1)
        exit(1);

    Servo servo(pin);
    servo.init(90);

    servo.move(180);
    servo.move(0);
}
