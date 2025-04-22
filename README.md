# 515 Final Project: SleePose

## Overview

This project demonstrates how to read a simple piezoresistive (pressure-sensitive) sensor using a Seeed Studio XIAO ESP32-C3 board and the Arduino IDE. The sensor's changing resistance under pressure is measured using a voltage divider circuit, and the raw analog reading is printed to the Serial Monitor.

This setup uses two parallel conductive threads, with the sensor element bridging them.

## Hardware Requirements

* 1 x Seeed Studio XIAO ESP32-C3 (or other ESP32 board, pin numbers may vary)
* 1 x Piezoresistive Sensor Element (material that changes resistance under pressure)
* 2 x Lengths of Conductive Thread (e.g., silver-coated nylon)
* 1 x Fixed Resistor (e.g., 10kΩ - value might need adjustment based on your sensor's resistance range)
* Breadboard
* Jumper Wires
* Laptop/Computer running Arduino IDE
* USB-C Cable (must support data transfer)

## Software Requirements

* [Arduino IDE](https://www.arduino.cc/en/software) (Version 1.8.x or 2.x recommended)
* ESP32 Board Support Package for Arduino IDE
* USB-to-Serial Drivers (CH340 or CP210x, depending on your specific XIAO model - often required for Windows/macOS)

## Wiring Instructions

Connect the components as follows. **Ensure the XIAO is disconnected from USB while wiring.**

1.  **Power Line (Thread A):** Connect a jumper wire from the **`3V3`** pin on the XIAO to one end of Conductive Thread 'A'.
2.  **Sense Line (Thread B):** Connect a jumper wire from the **`A0/D1`** pin (GPIO 1) on the XIAO to one end of Conductive Thread 'B'.
3.  **Pulldown Resistor:** Connect the Fixed Resistor (e.g., 10kΩ) between the **Sense Line (Thread B / Pin A0/D1)** and **`GND`** (Ground) on the XIAO.
    * *One leg of the resistor connects to the same point as Thread B.*
    * *The other leg of the resistor connects to GND.*
4.  **Sensor Placement:** Place the Piezoresistive Sensor element so that it physically **bridges across** the parallel Conductive Threads 'A' and 'B'. When pressure is applied, the sensor should make electrical contact between Thread A and Thread B.

**Simplified Diagram:**
