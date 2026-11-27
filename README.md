# FoT Falcon Wing Prosthetic Project

An Arduino-controlled, 3D-printed prosthetic arm and hand assembly designed and built for the FoT Falcon Wing Prosthetic Project and the Falcon Olympics.

## Repository Contents
* `FalconWingProstheticCode.ino` - Main Arduino microcontroller firmware for servo/actuator/button/myoware-sensor control.
* `Falcon Wing Microcontroller CAD/` - Arduino Nano CAD Model and KiCad PCB/schematic files.
* `Falcon Wing Prosthetic Arm CAD/` - Lower Arm CAD Model for wearing purposes.
* `Falcon Wing Prosthetic Hand CAD/` - Hand CAD for the actual hand used for holding and grabbing items.
* `Falcon Wing Prosthetic Upper Arm CAD/` - Upper Arm CAD for connecting the arm and the hand and for housing the servo.
* `Falcon Wing Prosthetic Project Slice.3mf` — Pre-configured 3D printer slicer project file.

## Hardware & Electronics
* **Microcontroller:** Arduino Nano/Uno
* **Actuators:** Tower Pro Micro Servo 9g sg90
* **Sensors / Inputs:** MyoWare 2.0 Muscle Sensor(EMG), MyoWare 2.0 Arduino Shield, SunFounder Button v2.0
* **Power Supply:** One 9V Battery for Uno, 4 Duracell AA Batteries for Nano(with 1 1N400x Series Diode).

## 3D Printing & Slicer Settings
* **File:** `Falcon Wing Prosthetic Project Slice.3mf`, `Falcon Wing Microcontroller CAD/`, `Falcon Wing Prosthetic Arm CAD/`, `Falcon Wing Prosthetic Hand CAD/`, `Falcon Wing Prosthetic Upper Arm CAD/`
* **Recommended Material:** PLA
* **Infill & Layer Height:** 15% infill, 0.2 mm layer height
* **Supports:** No supports included for print.

## Getting Started
1. **3D Print Parts:** Open `Falcon Wing Prosthetic Project Slice.3mf` in your slicer and print the structural components.
2. **Wire Electronics:** Follow wiring diagrams to connect the microcontroller, sensors, and servos.
3. **Upload Firmware:** Open `FalconWingProstheticCode.ino` in the Arduino IDE, select your board and COM port, and click **Upload**.

## Team & Contributors
* `@digammatau34570-code`
* `@shrikaisme`
