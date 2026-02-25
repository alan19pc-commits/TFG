
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrit(led, HIGH); // ERROR: digitalWrit no existe
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
