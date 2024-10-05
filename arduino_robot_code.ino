const int motorPin = 3; 
void setup() {
  pinMode(motorPin, OUTPUT);
}
void loop() {
  for (int speed = 0; speed <= 255; speed += 5) {
    analogWrite(motorPin, speed);
    delay(30);
  }
  delay(1000);
  for (int speed = 255; speed >= 0; speed -= 5) {
    analogWrite(motorPin, speed);
    delay(30);
  }
  delay(1000); 
}