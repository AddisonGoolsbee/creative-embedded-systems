
#include <WiFi.h>
#include <WiFiUdp.h>

const int pin = 34; 

const char* ssid = "yale wireless";

const char* udpServerIP = "172.29.128.94"; 
const int udpServerPort = 12345; 

WiFiUDP udp;

void setup() {
  pinMode(pin, INPUT);
  Serial.begin(115200); 

  WiFi.begin(ssid);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  udp.begin(udpServerPort);
}

void loop() {
  int sensorValue = analogRead(pin); 
  
  Serial.println(sensorValue);

  udp.beginPacket(udpServerIP, udpServerPort);
  udp.print(sensorValue);
  udp.endPacket();

  Serial.println(sensorValue);

}

