/*
  -------------------------------------------------------
  LPG Gas Leakage Detection System using Arduino UNO
  -------------------------------------------------------

  Description:
  This project detects the presence of LPG gas using the MQ-5 gas sensor
  (configured to digital output mode). If the gas level exceeds a preset
  threshold (set via the potentiometer on the sensor), the sensor's
  digital pin goes LOW, triggering an alarm.

  Features:
  - Detects LPG gas using MQ-5 sensor (digital mode)
  - Activates buzzer and LED alert upon gas detection
  - Prints status on Serial Monitor for monitoring
  - Simple and beginner-friendly implementation

  Components Used:
  - Arduino Uno
  - MQ-5 Gas Sensor (Digital output)
  - LED with 220Ω resistor
  - Buzzer
  - Jumper wires, Breadboard

  Developed by: CircuitDigest/me_RK
  Date: 05-06-2025

*/

// Pin Definitions 
const int gasSensorDigitalPin = A2; // MQ-5 sensor digital output connected to A2
const int ledPin = A1;              // LED connected to A1 (through 220Ω resistor)
const int buzzerPin = A0;           // Buzzer connected to A0 (through 1KΩ resistor)

void setup() {
  // Set up pin modes
  pinMode(gasSensorDigitalPin, INPUT);  // MQ-5 sensor as input
  pinMode(ledPin, OUTPUT);              // LED as output
  pinMode(buzzerPin, OUTPUT);           // Buzzer as output

  // Start Serial Monitor
  Serial.begin(9600);
  Serial.println("Gas Detection System Initialized (Digital Mode)");
}

void loop() {
  // Read the sensor's digital output
  int gasState = digitalRead(gasSensorDigitalPin);  // LOW = Gas detected

  // Check if gas is detected
  if (gasState == LOW) {
    digitalWrite(ledPin, HIGH);     // Turn on LED
    digitalWrite(buzzerPin, HIGH);  // Turn on Buzzer
    Serial.println("!! Gas Leak Detected !!");
  } else {
    digitalWrite(ledPin, LOW);      // Turn off LED
    digitalWrite(buzzerPin, LOW);   // Turn off Buzzer
    Serial.println("Environment Normal");
  }

  delay(800);  // Delay to avoid flooding Serial Monitor
}
