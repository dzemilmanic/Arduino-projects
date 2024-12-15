# Arduino Ultrasonic Sensor Radar Visualization

This project demonstrates the use of an ultrasonic sensor to measure distances and visualize the results in real-time using a radar-like display created in Processing 4.

## Features

- **Real-Time Distance Measurement**: Measures the distance to objects using the HC-SR04 ultrasonic sensor.
- **Radar Visualization**: Displays distance and angle data on a radar-like interface in Processing 4.
- **Interactive Display**: Shows object positions, angles, and distance ranges dynamically.
- **Customizable**: Easily modify the code for different ranges or visualization styles.

## How It Works

### 1. **Distance Measurement**

- The ultrasonic sensor emits sound waves and measures the time taken for the echo to return.
- The Arduino calculates the distance based on the time of flight:
  - Distance in cm: `distance = (duration / 2) / 29.1`

### 2. **Data Transmission**

- The Arduino sends angle and distance data to the Processing application via serial communication.
- Data format: `angle,distance.`

### 3. **Radar Visualization**

- The Processing application reads the data and visualizes it as:
  - Green lines representing the radar sweep.
  - Red dots indicating detected objects within range.
  - Text displaying the angle and distance.

## Components Needed

- Arduino board
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Breadboard and jumper wires
- Processing 4 installed

## Circuit Diagram

1. **Ultrasonic Sensor**:

   - `Trig` → Arduino `10`
   - `Echo` → Arduino `11`
   - `VCC` → 5V
   - `GND` → GND

2. **Servo Motor**:
   - `Signal` → Arduino `12`
   - `VCC` → 5V
   - `GND` → GND

## Code

### Arduino Code

The Arduino sketch handles the distance measurement and servo motor rotation. It sends the angle and distance data to the serial port. The code is included in the `arduino_radar.ino` file in this repository.

### Processing Code

The Processing sketch visualizes the radar data. It reads the angle and distance values from the serial port and creates a radar-like display. The code is included in the `processing_radar.pde` file in this repository.

## Demo Video

Check out the gameplay demo below:

[![Watch the video](https://img.youtube.com/vi/ioOisb6dLVQ/0.jpg)](https://youtube.com/shorts/ioOisb6dLVQ)

## How to Use

### 1. Setup the Circuit

- Connect the ultrasonic sensor and servo motor to the Arduino as per the circuit diagram.
- Ensure proper power supply and connections.

### 2. Upload the Arduino Code

- Open the Arduino IDE.
- Upload the `arduino_radar.ino` sketch to your Arduino board.

### 3. Run the Processing Sketch

- Open the Processing IDE.
- Run the `processing_radar.pde` sketch.
- Ensure the correct COM port is specified in the Processing code for serial communication.

### 4. Observe the Radar Display

- The radar interface will display real-time object positions based on the ultrasonic sensor readings.

## Customization

- **Range Adjustment**: Modify the Arduino code to adjust the maximum distance range.
- **Display Style**: Change colors, fonts, or other visual elements in the Processing sketch.
- **Additional Features**: Add sound alerts or save data logs for detected objects.

## License

This project is open-source and available under the MIT License. Feel free to use, modify, and share!
