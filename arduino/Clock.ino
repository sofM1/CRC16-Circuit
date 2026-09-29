// Generates 1Hz Square Wave on Pin 13

void setup() {
  pinMode(13, OUTPUT);  // Sets pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH);  // Sets pin 13 HIGH
  delay(500);              // Waits 0.5 seconds
  digitalWrite(13, LOW);   // Sets pin 13 LOW
  delay(500);              // Waits 0.5 seconds
}
