
int led = 13;

void setup() {
  pinMode(ledPin, OUTPUT); // ERROR: ledPin no existe
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
