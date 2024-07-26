# Lamp Control with Sound Sensor

This Arduino project allows you to control a lamp using a IR Sensor. The lamp can be toggled between three different states based on the light level detected by the sensor.

## Components Used

- Arduino board (e.g., Arduino Uno)
- IR sensor module
- Lamp (or any load you want to control)
- Motor driver module (e.g., L298N)
- Jumper wires
- Power supply (e.g., 12V DC)

## Setup

1. Connect the IR sensor to an analog pin on the Arduino board (e.g., A0).
2. Connect the lamp to the outputs of the motor driver.
3. Connect the motor driver to the Arduino board according to its datasheet.
4. Ensure proper power supply to the Arduino board and the motor driver.
5. Upload the provided Arduino sketch to the board.

## Usage

1. When the IR sensor detects light above a certain threshold, the lamp state will toggle.
2. The lamp can be in one of three states: 
    - State 1: Only 5V is supplied.
    - State 2: 5V and GND2 are supplied.
    - State 3: 5V, GND1, and GND2 are supplied.
3. View the sensor readings and lamp states via the serial monitor at 9600 baud rate.

