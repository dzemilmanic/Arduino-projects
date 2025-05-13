# 🧠 Arduino Memory Game with Buzzer

This is a simple **Memory Game** built using an Arduino board, LEDs, buttons, and a buzzer.  
The game challenges players to remember and repeat an increasing sequence of lights and sounds.

📁 **File**: `memory_game_with_buzzer.ino`

---

## ✨ Features

- 🎲 Randomly generated LED sequences  
- 🔘 Interactive gameplay via button inputs  
- 💡 Visual feedback through LEDs  
- 🔊 Audio feedback via buzzer tones for each step and error signal  
- 🔧 Simple to build and fully customizable  

---

## ⚙️ How It Works

1. 💡🔊 A random LED lights up with a buzzer tone.
2. 👆 The player presses the buttons in the same order.
3. ✅ Correct input adds a new step to the sequence.
4. ❌ On error, all LEDs blink and the buzzer emits an error tone.
5. 🔁 The game resets and starts over.

---

## 🛠️ Components Needed

- 🧠 Arduino board (e.g., Uno, Nano, Mega)
- 💡 3 or more LEDs
- 🔘 3 or more push buttons
- 🔊 1 buzzer (active or passive)
- 🔩 Resistors: 220Ω (LEDs), 10kΩ (buttons)
- 🔌 Breadboard and jumper wires

---

## 🔌 Circuit Diagram

- 🔴 Connect each LED to a digital pin via a 220Ω resistor.
- 🔘 Each button connects to a digital pin with a 10kΩ pull-down resistor.
- 🔊 Connect the buzzer to a digital pin; the other terminal goes to **GND**.
- ⚡ Ensure the Arduino is properly powered via USB or external supply.

---

## 🧠 Code

The Arduino sketch is in the `memory_game_with_buzzer.ino` file.  
📥 Upload it using the Arduino IDE to start the game.

---

## 🎥 Demo Video

Watch the memory game in action:

[![Watch the video](https://img.youtube.com/vi/HNtZoiYIM40/0.jpg)](https://youtube.com/shorts/HNtZoiYIM40)

---

## 🎯 How to Play

1. 🔌 Power on the Arduino.
2. 👁️🔊 Watch and listen to the sequence.
3. 🎯 Press buttons in the same order.
4. 🧩 Repeat as the sequence gets longer.
5. 🧠 See how far your memory can go!

---

## 🛠️ Customization

- ⏱️ Adjust `delay()` values in the code to change game speed.
- ➕ Add more LEDs and buttons to increase complexity.
- 🎵 Customize buzzer tones per LED for a musical challenge.

---

## 📜 License

This project is **open-source** under the **MIT License**.  
Feel free to **use, modify, and share** it! 🚀

---

🎉 **Have fun testing your memory and reflexes!**
