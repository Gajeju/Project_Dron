#include <MPU6050Sensor.h>

MPU6050Sensor Sensor;

void setup() {
  // put your setup code here, to run once:
  Sensor.begin(0x68);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  float roll_angle, pitch_angle, yaw_angle;
  Sensor.read_rpy_angular_velocity(roll_angle, pitch_angle, yaw_angle);
  
  unsigned long current_millis = millis();
  static unsigned long prev_millis = 0;
  static unsigned long interval = 100;
  if(current_millis - prev_millis >= interval) {
    prev_millis = current_millis;
    
    print_rpy_angle(roll_angle, pitch_angle, yaw_angle);
  }
}

void print_rpy_angle(float roll_angle, float pitch_angle, float yaw_angle) {
  Serial.print("#ROY:");
  Serial.print(roll_angle);
  Serial.print(",");
  Serial.print(pitch_angle);
  Serial.print(",");
  Serial.print(yaw_angle);

  Serial.println();
}

