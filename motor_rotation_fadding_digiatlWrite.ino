const int fan_pin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(fan_pin, OUTPUT);
}

unsigned long current_millis = 0;
unsigned long prev_millis = 0;
unsigned long interval_milis = 1000;

void loop() {
  // put your main code here, to run repeatedly:
  for(int t_high=0; t_high<=10; t_high++) {
    while(1) {
      digitalWrite(fan_pin, HIGH);
      delay(t_high);
      digitalWrite(fan_pin, LOW);
      delay(10-t_high);

      current_millis = millis();
      if(current_millis - prev_millis >= interval_milis) { 
        prev_millis = current_millis;
        break;
      }
    }
  }
}
