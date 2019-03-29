#include <HM10BLE.h>
#define THROTTLE_IMI 10

HM10BLE Ble;

void setup() {
  // put your setup code here, to run once:
Ble.begin(115200);
init_motor_speed(THROTTLE_IMI);

}

void loop() {
  // put your main code here, to run repeatedly:
int roll, pitch, yaw, throttle;
Ble.receive_user_rpyt(roll, pitch, yaw, throttle);

update_motor_speed(throttle);

}

int motorA_pin = 6;
int motorB_pin = 10;
int motorC_pin = 9;
int motorD_pin = 5;

void init_motor_speed(int speed){
  analogWrite(motorA_pin, speed);
  analogWrite(motorB_pin, speed);
  analogWrite(motorC_pin, speed);
  analogWrite(motorD_pin, speed);
}

void update_motor_speed(int speed) {
  analogWrite(motorA_pin, speed);
  analogWrite(motorB_pin, 0);
  analogWrite(motorC_pin, speed);
  analogWrite(motorD_pin, 0);
}

