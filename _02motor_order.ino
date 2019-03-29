void setup() {
  // put your setup code here, to run once:
delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(6,10); delay(1000);
analogWrite(10,10); delay(1000);
analogWrite(9,10); delay(1000);
analogWrite(5,10); delay(1000);

analogWrite(6,0); delay(1000);
analogWrite(10,0); delay(1000);
analogWrite(9,0); delay(1000);
analogWrite(5,0); delay(1000);
delay(2000);
}
