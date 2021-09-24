#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(9);
}

void loop() {
  // rotate back and forth
  myservo.write(0);
  myservo.write(180);
  // pot control
  int angle = analogRead(5);
  angle = map(angle, 0, 1023, 0, 180);
  myservo.write(angle);
  delay(15);
}
