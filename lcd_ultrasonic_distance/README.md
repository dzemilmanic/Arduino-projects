# Arduino Ultrasonic Distance Sensor with LCD Display

his project demonstrates the use of an ultrasonic sensor to measure distances and display the results on an LCD screen in real-time.

## Features

- **Real-Time Distance Measurement**: Measures the distance to an object using the HC-SR04 ultrasonic sensor.
- **LCD Display**: Displays the measured distance in both centimeters and inches on a 16x2 LCD.
- **Simple Setup**: Easy-to-follow circuit and code for quick implementation.

## How It Works

1. **Distance Measurement**:

   - The ultrasonic sensor emits sound waves and measures the time taken for the echo to return.
   - The measured time is used to calculate the distance:
     - Distance in cm: `distance = (duration / 2) / 29.1`
     - Distance in inches: `distanceInch = duration * 0.0133 / 2`

2. **Display**:
   - The LCD shows the distance in centimeters on the first row and inches on the second row.

## Components Needed

- Arduino board
- HC-SR04 Ultrasonic Sensor
- 16x2 LCD with I2C module
- Breadboard and jumper wires

## Circuit Diagram

1. **Ultrasonic Sensor**:
   - `Trig` → Arduino `A0`
   - `Echo` → Arduino `A1`
2. **LCD**:
   - `SDA` → Arduino `A4` (or corresponding pin for your board)
   - `SCL` → Arduino `A5` (or corresponding pin for your board)
   - `VCC` → 5V
   - `GND` → GND

## Code

The Arduino sketch is included in the `ultrasonic_lcd_display.ino` file in this repository. Upload it to your ESP32 board to control the LEDs and RGB LED through the Blynk app.

## Demo Video

Check out the gameplay demo below:

[![Watch the video](https://img.youtube.com/vi/NzaEAsScY9o/0.jpg)](https://www.youtube.com/shorts/NzaEAsScY9o)

## How to Use

1. Setup the Circuit:

- Follow the circuit diagram to connect the ultrasonic sensor and LCD to the Arduino.
- Ensure proper connections and power supply.

2. Upload the code:

- Open the Arduino IDE.
- Upload the provided .ino file to your Arduino board.

3. Run the System:

- The LCD will display the distance in both centimeters and inches in real-time.

## Customization

- Change Distance Units: Modify the calculations to display distances in other units if needed.
- Add Indicators: Incorporate LEDs or buzzers for additional feedback based on distance thresholds.

## License

This project is open-source and available under the MIT License. Feel free to use, modify, and share!
