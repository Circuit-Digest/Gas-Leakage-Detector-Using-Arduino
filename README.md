Gas Leakage Detector Using Arduino
==================================

Build a simple and effective **gas leakage detector using Arduino** with MQ-5 sensor for LPG leak detection. This beginner-friendly project provides instant alerts with buzzer and LED indicators when gas is detected.

![Arduino Gas Leakage Detector](https://circuitdigest.com/sites/default/files/inlineimages/u5/Working-Gas-Leakage-Detector.png)

🚀 Project Features
-------------------

-   **Real-time LPG gas detection** using MQ-5 sensor
-   **Dual alert system** - buzzer and LED warnings
-   **Digital threshold detection** with adjustable sensitivity
-   **Budget-friendly** - under $20 total cost
-   **Beginner-friendly** Arduino project

🛠️ Components Required
-----------------------

| Component | Qty | Purpose |
| --- | --- | --- |
| [Arduino Uno](https://circuitdigest.com/arduino-projects) | 1 | Main controller |
| MQ-5 Gas Sensor | 1 | Detects LPG/propane |
| Buzzer | 1 | Audio alert |
| LED | 1 | Visual indicator |
| 220Ω Resistor | 1 | LED protection |
| Breadboard & Wires | - | Connections |

📋 Circuit Connections
----------------------

![Circuit Diagram](https://circuitdigest.com/sites/default/files/circuitdiagram_mic/Gas-Leakage-Detection-Circuit-Diagram.png)

| Component | Arduino Pin |
| --- | --- |
| MQ-5 Digital Out | A2 |
| LED | A1 (via 220Ω) |
| Buzzer | A0 |
| MQ-5 VCC | 5V |
| All GND | GND |

💻 Quick Start
--------------

1.  **Wire the circuit** following the diagram above
2.  **Upload the code** from `Arduino_Code/gas_detector.ino`
3.  **Tune the sensor** using the onboard potentiometer
4.  **Test with gas** (lighter) to verify detection

🔧 Sensor Calibration
---------------------

The **MQ-5 gas sensor** requires proper tuning:

-   Turn potentiometer **clockwise** in clean air until LED turns OFF
-   Bring gas source near sensor - LED should turn ON
-   Adjust sensitivity as needed for your environment

📁 Repository Files
-------------------

```
├── Arduino_Code/
│   └── gas_detector.ino          # Main Arduino sketch
├── Circuit_Diagrams/
│   └── schematic.png             # Wiring diagram
├── Images/
│   └── assembled_project.jpg     # Build photos
└── README.md

```

🎯 How It Works
---------------

1.  **MQ-5 sensor** continuously monitors air for LPG/propane
2.  When gas detected, sensor digital output goes **LOW**
3.  **Arduino activates** buzzer and LED alerts instantly
4.  **System resets** automatically when gas clears

🏠 Applications
---------------

-   **Home kitchens** near gas stoves and cylinders
-   **Small restaurants** and food service areas
-   **RV and camping** portable gas detection
-   **Educational projects** for learning Arduino
-   **Workshop safety** backup gas monitoring

⚡ Code Overview
---------------

```
// Pin definitions
const int gasSensorPin = A2;
const int ledPin = A1;
const int buzzerPin = A0;

// Main detection logic
if (digitalRead(gasSensorPin) == LOW) {
  digitalWrite(ledPin, HIGH);    // Turn on LED
  digitalWrite(buzzerPin, HIGH); // Sound alarm
}

```

🔍 Troubleshooting
------------------

**No sensor response?**

-   Check 5V power to MQ-5
-   Verify pin connections match diagram
-   Allow 24+ hours sensor warm-up time

**False alarms?**

-   Adjust potentiometer sensitivity
-   Ensure stable power supply
-   Check for air currents

📖 Complete Tutorial
--------------------

For detailed step-by-step instructions, visit: **[Gas Leakage Detector Using Arduino - Complete Guide](https://circuitdigest.com/microcontroller-projects/gas-leakage-detector-using-arduino-complete-diy-guide)**

🔗 Related Projects
-------------------

-   [Arduino Air Quality Monitor](https://circuitdigest.com/microcontroller-projects/arduino-based-air-quality-monitoring-system)
-   [MQ-135 CO2 Sensor Tutorial](https://circuitdigest.com/microcontroller-projects/interfacing-mq135-gas-sensor-with-arduino-to-measure-co2-levels-in-ppm)
-   [Arduino Gas Sensors Guide](https://circuitdigest.com/tags/gas-sensors)
-   [Arduino Programming Basics](https://circuitdigest.com/article/getting-started-with-arduino-programming-using-arduino-ide)

⚠️ Safety Notice
----------------

This **DIY gas detector** is for educational and supplementary monitoring only. Always use certified commercial gas detectors for critical safety applications.

🤝 Contributing
---------------

1.  Fork this repository
2.  Create feature branch (`git checkout -b feature/improvement`)
3.  Commit changes (`git commit -m 'Add enhancement'`)
4.  Push to branch (`git push origin feature/improvement`)
5.  Open Pull Request

📞 Support & Community
----------------------

-   **Tutorial**: [CircuitDigest.com](https://circuitdigest.com/)
-   **Issues**: Use GitHub Issues for bugs
-   **Arduino Help**: [Arduino IDE Tutorial](https://circuitdigest.com/article/getting-started-with-arduino-programming-using-arduino-ide)
-   **Gas Sensors**: [MQ Sensor Guide](https://circuitdigest.com/tags/gas-sensors)

📜 License
----------

MIT License - Free for educational and personal use

* * * * *

⭐ **Star this repo** if it helped you build your gas detector project!
