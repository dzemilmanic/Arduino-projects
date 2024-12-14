# ESP32 LED Control with Blynk and RGB Cycling

This project allows you to control multiple LEDs, including an RGB LED, using the Blynk app and an ESP32 board. It also features automatic RGB color cycling and manual control over the RGB LED colors.

## Features

- Control up to 5 individual LEDs (LED1 to LED5) using the Blynk app.
- Automatic RGB color cycling with adjustable speed.
- Simple and easy to set up with ESP32 and Blynk.

## How It Works

1. LED Control: The Blynk app sends signals to the ESP32 to control the state of each LED (ON/OFF).
2. RGB LED Control: The user can manually adjust the RGB LED's color using sliders in the Blynk app. The RGB LED can also cycle through colors automatically when enabled.
3. Automatic RGB Color Change: When the automatic color change is enabled, the RGB LED smoothly cycles through different colors based on a timer.

## Components Needed

- ESP32 development board
- 5 LEDs
- 1 RGB LED (3 pins: Red, Green, Blue)
- 8 resistors (220Ω for LEDs)
- Breadboard and jumper wires
- Blynk app installed on your phone or launched on the web
- Wi-Fi network for ESP32

## Circuit Diagram

- Connect each LED to a digital pin on the ESP32 through a resistor (220Ω).
- Connect the RGB LED pins to the ESP32 (Red, Green, Blue pins connected to specific GPIO pins).
- Ensure proper power supply to the ESP32 board.

## Code

The Arduino sketch is included in the `ESP32_WiFi.ino` file in this repository. Upload it to your ESP32 board to control the LEDs and RGB LED through the Blynk app.

## Demo Video

Check out the gameplay demo below:

[![Watch the video](https://img.youtube.com/vi/DCFN3LZFeBg/0.jpg)](https://youtube.com/shorts/DCFN3LZFeBg)

## How to Use

1. Set up Blynk:

- Create a new project in the Blynk app.
- Use the provided BLYNK_TEMPLATE_ID, BLYNK_TEMPLATE_NAME, and BLYNK_AUTH_TOKEN for authentication.
- Add buttons in the Blynk app for controlling LEDs (V1 to V5) and the RGB LED (V6 to V8).
- Add a switch for enabling/disabling automatic RGB color change (V9).

2. Upload the code:

- Open the provided code in Arduino IDE.
- Install the necessary libraries (WiFi.h, BlynkSimpleEsp32.h).
- Upload the code to your ESP32 board.

3. Control LEDs:

- Use the Blynk app to turn on/off the LEDs.
- Use sliders for controlling the RGB LED colors manually.
- Toggle automatic RGB color cycling with the switch in the Blynk app.

## Customization

- Adjust the RGB color cycling speed by changing the interval variable in the code.
- Add more LEDs or modify the existing ones for different applications.
- Change the pins if you need to use different GPIOs for the LEDs or RGB LED.

## License

This project is open-source and available under the MIT License. Feel free to use, modify, and share!
