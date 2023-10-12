const int pin = 34; // Change this to the desired analog pin

void setup() {
  pinMode(pin, INPUT); // Set the pin as an analog input
  Serial.begin(115200); // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(pin); // Read the analog input
  
  Serial.println(sensorValue);
  
  delay(100); // Delay for one second (adjust as needed)
  
}

