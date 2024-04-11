const int irSensorPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(irSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int irSensorValue = digitalRead(irSensorPin);

  if (irSensorValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Object detected!");
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}
