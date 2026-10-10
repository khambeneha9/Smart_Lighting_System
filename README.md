# Smart Lighting System Using Arduino and LDR

## 📌 Project Overview
The Smart Lighting System is a mini project that automatically controls an LED based on ambient light intensity. It uses an LDR sensor and Arduino Uno to demonstrate automatic lighting control.

## 🎯 Objectives
- Detect changes in surrounding light intensity.
- Automatically switch an LED ON or OFF.
- Understand analog sensor interfacing with Arduino.
- Demonstrate a basic energy-saving lighting concept.

## 🧰 Components Required
- Arduino Uno
- LDR (Light Dependent Resistor)
- 10 kΩ resistor
- LED
- 220 Ω resistor
- Breadboard and jumper wires
- USB cable

## ⚙️ Working Principle
The LDR senses the surrounding light and provides a corresponding analog voltage to Arduino pin A0. The Arduino compares the sensor reading with a threshold value of 100. Based on the programmed condition, it switches the LED connected to digital pin 13 ON or OFF.

Note: The threshold and condition should be calibrated according to the LDR circuit and actual sensor readings.

## 🔌 Circuit Connections
- LDR voltage-divider output → A0
- LED control pin → Digital pin 13
- Connect the LDR and resistors as shown in the circuit diagram.
- Connect the LED with an appropriate current-limiting resistor.

See `circuit-diagram.png` for the circuit.

## 💻 Programming
Language: Arduino C/C++

Platform: Tinkercad

Source code: `SmartLighting.ino`

## 🌍 Applications
- Automatic street lighting
- Smart home lighting
- Corridor and staircase lighting
- Energy-saving lighting systems

## 📚 Learning Outcomes
- LDR sensor interfacing
- Analog input reading
- Conditional statements
- Digital output control
- Basic embedded-system development

## 👩‍💻 Author
Neha Khambe
