int relay1 = 7; // Light
int relay2 = 8; // Fan

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
}

void loop() {
  // Demo automation
  digitalWrite(relay1, HIGH); // Light ON
  delay(2000);

  digitalWrite(relay2, HIGH); // Fan ON
  delay(2000);

  digitalWrite(relay1, LOW);  // Light OFF
  digitalWrite(relay2, LOW);  // Fan OFF
  delay(2000);
}
_