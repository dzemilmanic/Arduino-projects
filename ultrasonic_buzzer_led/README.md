# Arduino Ultrasonic Distance Sensor with Buzzer and LED Indicator

This project uses an ultrasonic distance sensor to measure the distance to an object and triggers a buzzer and LED indicator based on the measured distance. The system activates the buzzer and LED when the object is within a specified safe distance.

## Features

- Measure the distance using an ultrasonic sensor (HC-SR04).
- Activate a buzzer and LED when the object is within a defined safe distance (10 cm).
- Display the measured distance on the Serial Monitor for real-time feedback.

## How It Works

1. Distance Measurement: The ultrasonic sensor sends out a pulse and measures the time it takes for the pulse to return. This time is used to calculate the distance to the object.
2. Buzzer and LED Control: When the measured distance is less than or equal to a predefined safe distance (10 cm in this case), the buzzer and LED are activated to indicate proximity.
3. Distance Display: The distance is continuously printed to the Serial Monitor for monitoring.

## Components Needed

- Arduino board
- Ultrasonic sensor (HC-SR04)
- 1 Buzzer
- 1 LED
- 1 Resistor (220Ω for the LED)
- Breadboard and jumper wires

## Circuit Diagram

- Connect the ultrasonic sensor's Trig pin to a digital pin on the Arduino (pin 9).
- Connect the Echo pin to another digital pin on the Arduino (pin 10).
- Connect the Buzzer to a digital pin (pin 11).
- Connect the LED to a digital pin (pin 13) through a 220Ω resistor.
- Ensure proper power supply to the Arduino board.

## Code

The Arduino sketch is included in the `ultrasonic_buzzer_led.ino` file in this repository. Upload it to your ESP32 board to control the LEDs and RGB LED through the Blynk app.

## Demo Video

Check out the gameplay demo below:

[![Watch the video](https://img.youtube.com/vi/GrfeFefpolU/0.jpg)](https://www.youtube.com/shorts/GrfeFefpolU)

## How to Use

1. Setup the Circuit:

- Connect the ultrasonic sensor, buzzer, and LED to the Arduino as described in the circuit diagram.
- Ensure the correct wiring and power supply.

2. Upload the code:

- Open the provided code in the Arduino IDE.
- Select the correct board and port in the IDE.
- Upload the code to your Arduino board.

3. Monitor the Distance:

- Open the Serial Monitor to view the real-time distance readings.
- The buzzer and LED will activate when an object is detected within the safe distance.

## Customization

- Change the safe distance by modifying the if (safetyDistance <= 10) condition in the code.
- Adjust the behavior of the buzzer and LED by modifying the logic in the code.
- Add more LEDs or sensors for different applications.

## License

This project is open-source and available under the MIT License. Feel free to use, modify, and share!
