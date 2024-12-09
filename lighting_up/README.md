# Arduino LED Sequence

This simple project demonstrates how to sequentially turn on and off three LEDs using an Arduino. The LEDs light up in order, stay on for a short duration, and then turn off in the same sequence.

## Features
- Sequentially lights up three LEDs.
- Customizable delay durations for turning LEDs on and off.
- Simple and beginner-friendly Arduino project.

## How It Works
1. The code sets up three LEDs connected to digital pins 13, 12, and 11 as output.
2. In the `loop()` function:
   - Each LED turns on sequentially with a delay of 200 milliseconds.
   - After all LEDs are on, they turn off sequentially with a delay of 300 milliseconds.
3. This process repeats indefinitely.

## Components Needed
- Arduino board (e.g., Arduino Uno)
- 3 LEDs
- 3 Resistors (220Ω)
- Breadboard and jumper wires

## Circuit Diagram
1. Connect each LED to a digital pin on the Arduino (e.g., pins 13, 12, and 11) through a 220Ω resistor.
2. Connect the other ends of the LEDs to the ground (GND).
3. Ensure a proper connection of the Arduino to your computer or a power source.

## Code

The Arduino sketch is included in the `lighting_up.ino` file in this repository. Upload it to your Arduino board to start playing.

## Demo Video
Check out the gameplay demo below:

[![Watch the video](https://img.youtube.com/vi/_aMglHOKeqo/0.jpg)](https://www.youtube.com/shorts/VvLbyTwm2pk)


## Customization
- Adjust the `delay()` values in the code to change the timing of the LED sequence.
- Add more LEDs by following the same pattern in the code and circuit.

## License
This project is open-source and available under the MIT License. Feel free to use, modify, and share!
