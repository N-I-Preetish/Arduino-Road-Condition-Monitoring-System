# Arduino-Based Road Condition Monitoring and Impact Analysis System

## Overview

This project is an Arduino Uno-based Road Condition Monitoring and Impact Analysis System that detects potholes and road surface irregularities using an HC-SR04 Ultrasonic Sensor and a KY-037 Sound Sensor.

The ultrasonic sensor measures the distance between the sensor and the road surface. An increase in distance indicates a pothole or depression in the road. The sound sensor detects impact intensity when a vehicle encounters the pothole. Based on the sensor readings, the system classifies the road condition into Normal, Moderate, and Severe categories using LED indicators.

## Components Required

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* KY-037 Sound Sensor
* Green LED
* White LED
* Red LED
* 3 × 220Ω Resistors
* Breadboard
* Jumper Wires
* USB Cable

## Circuit Connections

### HC-SR04 Ultrasonic Sensor

* VCC → 5V
* GND → GND
* TRIG → Digital Pin 9
* ECHO → Digital Pin 10

### KY-037 Sound Sensor

* AO → A0
* * → 5V
* G → GND

### LEDs

* Green LED → Digital Pin 3
* White LED → Digital Pin 4
* Red LED → Digital Pin 5

All LED negative terminals and sensor grounds are connected to a common GND rail connected to the Arduino GND.

## Working Principle

The ultrasonic sensor continuously measures the distance to the road surface.

* Distance less than or equal to 10 cm indicates a normal road condition and activates the Green LED.
* Distance greater than 10 cm indicates a moderate pothole and activates the White LED.
* Distance greater than 20 cm along with a sound value greater than 64 indicates a severe pothole impact and activates the Red LED.

The sound sensor is used to confirm impact intensity and reduce false detections.

## Algorithm

1. Measure distance using the HC-SR04 ultrasonic sensor.
2. Read sound intensity using the KY-037 sound sensor.
3. Compare the measured values with predefined thresholds.
4. Determine the road condition.
5. Activate the corresponding LED indicator.
6. Repeat the process continuously.

## Output Indication

| Condition                  | LED Status   |
| -------------------------- | ------------ |
| Normal Road                | Green LED ON |
| Moderate Pothole           | White LED ON |
| Severe Pothole with Impact | Red LED ON   |

## Applications

* Smart Road Monitoring
* Pothole Detection Systems
* Road Maintenance Analysis
* Smart City Infrastructure
* Vehicle Impact Monitoring

## Future Enhancements

* GPS-based pothole location tracking
* ESP32 cloud connectivity
* Mobile application integration
* Data logging using SD cards
* Machine Learning-based road condition classification

## Conclusion

This project combines ultrasonic distance measurement and sound impact analysis to detect road irregularities. The system classifies road conditions into normal, moderate, and severe categories using predefined thresholds and visual LED indicators, providing a simple and low-cost prototype for smart road monitoring applications.
