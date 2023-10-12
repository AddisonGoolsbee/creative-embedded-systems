
#include <WiFi.h>
#include <WiFiUdp.h>

const int pin = 34; // Change this to the desired analog pin

const char* ssid = "yale wireless";

const char* udpServerIP = "172.29.134.235"; // Change to the target IP address
const int udpServerPort = 12345; // Change to the target port number

WiFiUDP udp;

void setup() {
  pinMode(pin, INPUT); // Set the pin as an analog input
  Serial.begin(115200); // Initialize serial communication

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Begin the UDP connection
  udp.begin(udpServerPort);
}

void loop() {
  int sensorValue = analogRead(pin); // Read the analog input
  
  Serial.println(sensorValue);
  // Data to be sent
  String message = "Hello, UDP Server!";

  // Send the UDP packet
  udp.beginPacket(udpServerIP, udpServerPort);
  udp.print(message);
  udp.endPacket();

  Serial.print("Allegedly sent: ");
  Serial.println(message);

  delay(1000); // You can adjust the interval between sending packets
}

