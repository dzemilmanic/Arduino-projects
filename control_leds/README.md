# 💡 Arduino LED Control with Button

This project demonstrates how to control an LED using a button on an Arduino. The LED turns on when the button is pressed and turns off when the button is released.

## ✨ Features

- 🔴 LED turns on when the button is pressed.
- ⚪ LED turns off when the button is released.
- 📚 Simple and beginner-friendly project to learn about digital input and output.

## 🧠 How It Works

1. 🔌 The LED is connected to a digital pin (pin 2).
2. 🎛️ The button is connected to another digital pin (pin 4).
3. 🔁 In the `loop()` function:
   - If the button is pressed (i.e., the button input reads `HIGH`), the LED is turned on.
   - If the button is not pressed (i.e., the button input reads `LOW`), the LED is turned off.

## 🧰 Components Needed

- Arduino board (e.g., Arduino Uno)
- 1 LED
- 1 push button
- Resistors (220Ω for the LED, 10kΩ for the button)
- Breadboard and jumper wires

## 🛠️ Circuit Diagram

- 🔴 Connect the LED to digital pin 2 through a 220Ω resistor.
- 🔘 Connect one side of the button to digital pin 4 and the other side to the ground.
- 🛡️ Use a 10kΩ pull-down resistor to ensure a stable input when the button is not pressed.

## 📜 Code

- The Arduino sketch is included in the `control_leds.ino` file in this repository.
- Upload it to your Arduino board to start playing.

## 🎬 Demo Video

Check out the demo of the project below:

[![Watch the video](https://img.youtube.com/vi/AZBxvVLXUeA/0.jpg)](https://www.youtube.com/shorts/AZBxvVLXUeA)

## 🎮 How to Play

1. 🔌 Power on the Arduino to start the project.
2. ✋ Press the button to turn on the LED.
3. 🖐️ Release the button to turn off the LED.
4. 🛠️ Experiment with modifying the project to control multiple LEDs or add different behaviors.

## 🎨 Customization

- ➕ You can modify the project to control more LEDs or add additional buttons.
- 🧠 Adjust the behavior of the LED (e.g., blink on button press) by changing the logic in the program.

## 📄 License

This project is open-source and available under the MIT License. Feel free to use, modify, and share!
