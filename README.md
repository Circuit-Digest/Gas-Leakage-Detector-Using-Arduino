# Gas-Leakage-Detector-Using-Arduino

![Project Image](/TitleImage.png)

## Description
This project detects the presence of LPG gas using the MQ-5 gas sensor configured in digital output mode. When gas levels exceed a preset threshold (adjustable via the sensor's onboard potentiometer), the system triggers both visual and audio alarms to alert users of potential gas leaks.

## Components Required
- Arduino Uno
- MQ-5 Gas Sensor
- LED with 220Ω resistor
- Buzzer
- 18650 Battery (7.2V)
- Jumper wires
- Breadboard

## Circuit Connections
| Component | Arduino Pin |
|-----------|-------------|
| MQ-5 Sensor (Digital) | A2 |
| LED | A1 |
| Buzzer | A0 |

## How It Works
The MQ-5 sensor continuously monitors air quality for LPG gas. When gas concentration exceeds the threshold, the sensor's digital output goes LOW, triggering the Arduino to activate both LED and buzzer alarms.

## Setup
1. Connect components according to circuit diagram
2. Upload the Arduino code
3. Adjust sensor sensitivity using onboard potentiometer
4. Monitor status via Serial Monitor (9600 baud)

## Developer
- **Developed by:** CircuitDigest/me_RK
