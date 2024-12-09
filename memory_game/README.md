# Arduino Memory Game

This is a simple **Memory Game** built using an Arduino board, LEDs, and buttons. The game challenges players to remember and repeat an increasing sequence of lights.

## Features

- Randomly generated light sequences.
- Interactive gameplay with buttons for user input.
- Visual feedback through LEDs.
- Easy to build and modify.

## How It Works

1. The game starts by lighting up a random sequence of LEDs.
2. The player must repeat the sequence by pressing the corresponding buttons.
3. If the player repeats the sequence correctly, the game adds another step to the sequence.
4. If the player makes a mistake, the game resets.

## Components Needed

- Arduino board (e.g., Arduino Uno)
- 3 or more LEDs
- 3 or more push buttons
- Resistors (220Ω for LEDs, 10kΩ for buttons)
- Breadboard and jumper wires

## Circuit Diagram

- Connect each LED to a digital pin through a resistor.
- Connect each button to a digital pin and use a pull-down resistor for stable input.

## Code

The Arduino sketch is included in the `memory_game.ino` file in this repository. Upload it to your Arduino board to start playing.

## Demo Video
Check out the gameplay demo below:

[![Watch the video](https://img.youtube.com/vi/_aMglHOKeqo/0.jpg)](https://www.youtube.com/shorts/_aMglHOKeqo)


## How to Play

1. Power on the Arduino to start the game.
2. Watch the sequence of LEDs lighting up.
3. Press the buttons corresponding to the sequence in the correct order.
4. Continue playing as the sequence grows longer.
5. Challenge yourself to remember as many steps as possible!

## Customization

- Adjust the speed of the sequence in the code to make the game easier or harder.
- Add more LEDs and buttons for a more complex game.

## License

This project is open-source and available under the MIT License. Feel free to use, modify, and share!
