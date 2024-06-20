/*
    Project name : ESP8266 Hunt sensor module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-hunt-sensor-module
*/

// Define the pin connected to the hunt sensor module
const int huntSensorPin = D2; // GPIO pin D2 on NodeMCU

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(huntSensorPin, INPUT_PULLUP); // Set hunt sensor pin as input with internal pull-up resistor
}

void loop() {
  // Read the state of the hunt sensor module
  int sensorState = digitalRead(huntSensorPin);

  // Print the state to Serial Monitor
  Serial.print("Hunt Sensor State: ");
  Serial.println(sensorState == HIGH ? "Not Detected" : "Detected");

  delay(500); // Delay for stability
}
