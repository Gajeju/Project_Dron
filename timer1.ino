#include <TimerOne.h>

const int fan_pin = 10;

void setup() {
  // put your setup code here, to run once:
  Timer1.initialize();
  Timer1.pwm(fan_pin, 0);

  Timer1.setPeriod(1000000);
  Timer1.setPwmDuty(fan_pin, 511);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
