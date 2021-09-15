int ledPin = 12;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A5);
  int t = map(sensorValue, 0, 1023, 50, 1000);
  digitalWrite(ledPin, HIGH);
  delay(t);
  digitalWrite(ledPin, LOW);
  delay(t);
}
