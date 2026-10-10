const int ldrPin = A0;  // LDR sensor input
int sensorValue;        // Stores sensor reading
void setup() {
  pinMode(13, OUTPUT);       // Set LED as output
}
void loop() {
  sensorValue = analogRead(ldrPin);  // Read LDR value
  if (sensorValue > 100) {
    digitalWrite(13, HIGH);  // Turn LED ON in darkness
  } else {
    digitalWrite(13, LOW);   // Turn LED OFF in brightness
  }
  Serial.println(sensorValue);   // Display sensor value
  delay(1000);                   // Wait 1000 milliseconds
}
