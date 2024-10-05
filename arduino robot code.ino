const int motorPin = 3; // PWM pin connected to motor positive terminal

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Gradually increase motor speed
  for (int speed = 0; speed <= 255; speed += 5) {
    analogWrite(motorPin, speed);
    delay(30);
  }
  delay(1000); // Full speed for 1 second

  // Gradually decrease motor speed
  for (int speed = 255; speed >= 0; speed -= 5) {
    analogWrite(motorPin, speed);
    delay(30);
  }
  delay(1000); // Stop for 1 second
}