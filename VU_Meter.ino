int sensorPin = A0;
int ledPins[] = {3, 4, 5, 6, 7, 8, 9, 10};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  
  int ledCount = map(sensorValue, 500, 800, 0, 8);
  ledCount = constrain(ledCount, 0, 8);

  for (int i = 0; i < 8; i++) {
    if (i < ledCount) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }
}
