# Arduino Memory Game

This is a simple Memory Game built using an Arduino board, LEDs, buttons, and a buzzer. The game challenges players to remember and repeat an increasing sequence of lights and sounds.

## Features

- Randomly generated light sequences.
- Interactive gameplay with buttons for user input.
- Visual feedback through LEDs.
- Audio feedback through a buzzer for each step and error notification.
- Easy to build and modify.

## How It Works

1. The game starts by lighting up a random sequence of LEDs with corresponding buzzer sounds.
2. The player must repeat the sequence by pressing the corresponding buttons.
3. If the player repeats the sequence correctly, the game adds another step to the sequence.
4. If the player makes a mistake, all LEDs blink, the buzzer emits an error tone, and the game resets.

## Components Needed

- Arduino board (e.g., Arduino Uno)
- 3 or more LEDs
- 3 or more push buttons
- 1 buzzer (active or passive)
- Resistors (220Ω for LEDs, 10kΩ for buttons)
- Breadboard and jumper wires

## Circuit Diagram

- Connect each LED to a digital pin through a resistor.
- Connect each button to a digital pin and use a pull-down resistor for stable input.
- Connect the buzzer to a digital pin with the other terminal connected to GND.

## Code

The Arduino sketch is included in the `memory_game_with_buzzer.ino` file in this repository. Upload it to your Arduino board to start playing.

## Demo Video

Check out the gameplay demo below:

[![Watch the video](https://img.youtube.com/vi/HNtZoiYIM40/0.jpg)](https://youtube.com/shorts/HNtZoiYIM40)

## How to Play

1. Power on the Arduino to start the game.
2. Watch and listen to the sequence of LEDs lighting up and corresponding buzzer tones.
3. Press the buttons corresponding to the sequence in the correct order.
4. Continue playing as the sequence grows longer.
5. Challenge yourself to remember as many steps as possible!

## Customization

- Adjust the speed of the sequence in the code to make the game easier or harder.
- Add more LEDs and buttons for a more complex game.
- Customize the buzzer tones for each LED to make the game more engaging.

## License

This project is open-source and available under the MIT License. Feel free to use, modify, and share!
