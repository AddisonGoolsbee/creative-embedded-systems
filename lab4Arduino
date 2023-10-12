#define BUTTON_PIN 33 
#define SWITCH_PIN 25

#define VRX_PIN  36 // ESP32 pin GPIO36 (ADC0) connected to VRX pin
#define VRY_PIN  39 // ESP32 pin GPIO39 (ADC0) connected to VRY pin

int valueX = 0; // to store the X-axis value
int valueY = 0; // to store the Y-axis value


void setup() {
  Serial.begin(9600);
  // initialize the pushbutton pin as an pull-up input
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(SWITCH_PIN, INPUT_PULLUP);

}
  

void loop() {
  Serial.print("Button: ");
  Serial.print(digitalRead(BUTTON_PIN));
  Serial.print("    Switch: ");
  Serial.println(digitalRead(SWITCH_PIN));

  valueX = analogRead(VRX_PIN);
  valueY = analogRead(VRY_PIN);
  Serial.print("x = ");
  Serial.print(valueX);
  Serial.print(", y = ");
  Serial.println(valueY);
  delay(200);
}
