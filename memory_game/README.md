# 🧠 Arduino Memory Game

This is a simple **Memory Game** built using an Arduino board, LEDs, and buttons. The game challenges players to remember and repeat an increasing sequence of lights.

📁 **File**: `memory_game.ino`

---

## ✨ Features

- 🎲 Randomly generated light sequences
- 🎮 Interactive button-based gameplay
- 💡 Visual feedback using LEDs
- 🔧 Easy to build and customize

---

## ⚙️ How It Works

1. 🔦 The game starts by lighting up a random sequence of LEDs.
2. 👆 The player must press the buttons in the same order.
3. ✅ If the sequence is correct, a new step is added to the sequence.
4. ❌ If there's a mistake, all LEDs blink and the game resets.

---

## 🛠️ Components Needed

- 🧠 Arduino board (e.g., Uno, Nano, Mega)
- 💡 3 or more LEDs
- 🔘 3 or more push buttons
- 🔩 Resistors (220Ω for LEDs, 10kΩ for buttons)
- 🔌 Breadboard and jumper wires

---

## 🔌 Circuit Diagram

- Connect each LED to a digital pin via a 220Ω resistor.
- Connect each button to a digital pin with a 10kΩ pull-down resistor to ensure stable input.
- Make sure everything is grounded properly and powered via USB or external source.

---

## 🧠 Code

The Arduino sketch is provided in the `memory_game.ino` file.  
📥 Upload it using the Arduino IDE to begin playing.

---

## 🎥 Demo Video

Watch the game in action:

[![Watch the video](https://img.youtube.com/vi/_aMglHOKeqo/0.jpg)](https://www.youtube.com/shorts/_aMglHOKeqo)

---

## 🎯 How to Play

1. 🔌 Power on your Arduino to start.
2. 👁️ Watch the LEDs light up in a sequence.
3. 🎯 Press the buttons in the same order.
4. 🧩 Repeat and remember longer sequences as the game progresses.
5. 🧠 Keep going and test your memory!

---

## 🛠️ Customization

- ⚙️ Change the speed of the sequence in the code to make it easier or harder.
- ➕ Add more LEDs and buttons to increase complexity.
- 🎵 Add sound feedback using a buzzer for even more interaction.

---

## 📜 License

This project is **open-source** and available under the **MIT License**.  
Feel free to **use, modify, and share** it! 🚀

---

🕹️ **Have fun and challenge your brain!**
