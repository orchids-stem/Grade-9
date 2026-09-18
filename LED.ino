#define LED 2   // Onboard LED pin for ESP32

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);   // Initialize Serial Monitor
}

void loop() {
  digitalWrite(LED, HIGH);          // Turn LED ON
  Serial.println("LED ON");         // Print LED status
  delay(1000);                      // Wait 1 second

  digitalWrite(LED, LOW);           // Turn LED OFF
  Serial.println("LED OFF");        // Print LED status
  delay(1000);                      // Wait 1 second
}
