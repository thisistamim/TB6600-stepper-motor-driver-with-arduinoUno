const int dirPin = 8;
const int pulPin = 9;

void setup() {
  pinMode(dirPin, OUTPUT); 
  pinMode(pulPin, OUTPUT);
}

void loop() {
  for (int x = 0; x < 6400; x++) {
    digitalWrite(dirPin, 1);
    digitalWrite(pulPin, 1);
    delay(50);
    digitalWrite(pulPin, 0);
    delay(50);
  }
  delay(1000);
}
