# Smart Home Automation System

## Overview

An ESP32-based smart home automation system designed to remotely control four electrical appliances using Arduino IoT Cloud.

## Components Used

- ESP32 Development Board
- 4-Channel Relay Module
- Jumper Wires
- Breadboard
- 5V Power Supply
- Arduino IoT Cloud
- LEDs / Bulbs

## How It Works

The ESP32 connects to Wi-Fi and communicates with Arduino IoT Cloud. Four ON/OFF switches on the cloud dashboard control four relay channels.

Each relay is connected to an appliance, allowing the appliances to be controlled remotely.

## Relay Pin Configuration

| Relay | ESP32 Pin |
|---|---|
| Relay 1 | GPIO 13 |
| Relay 2 | GPIO 12 |
| Relay 3 | GPIO 14 |
| Relay 4 | GPIO 27 |

## Technologies Used

- ESP32
- Arduino
- C/C++
- Arduino IoT Cloud
- Wi-Fi

## Project Status

Prototype / IoT project.

## Future Enhancements

- Voice control
- Temperature and motion sensors
- Gas sensors
- Energy monitoring
- Automatic scheduling
