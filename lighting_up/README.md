# 💡 Arduino LED Sequence

This simple project demonstrates how to sequentially turn on and off three LEDs using an Arduino. The LEDs light up in order, stay on for a short duration, and then turn off in the same sequence.

📁 **File**: `lighting_up.ino`

---

## ✨ Features

- 🔄 Sequential LED lighting pattern
- ⏱️ Customizable delay durations
- 👶 Beginner-friendly and easy to set up

---

## ⚙️ How It Works

1. 🔧 The sketch configures three digital pins (13, 12, and 11) as outputs.
2. 🔁 Inside the `loop()` function:
   - Each LED turns on one after the other with a 200ms delay.
   - After all are lit, they turn off in the same order with a 300ms delay.
3. 🔁 This process loops indefinitely.

---

## 🛠️ Components Needed

- 🧠 Arduino board (e.g., Uno, Nano, Mega)
- 💡 3 LEDs
- 🔧 3 Resistors (220Ω)
- 🔌 Breadboard and jumper wires

---

## 🔌 Circuit Diagram

1. ⚡ Connect each LED to Arduino digital pins 13, 12, and 11 using a 220Ω resistor.
2. ➖ Connect the negative side of each LED to GND.
3. 🖥️ Connect Arduino to your PC or external power supply.

---

## 🧠 Code

The Arduino sketch is provided in the `lighting_up.ino` file.  
📥 Upload it using the Arduino IDE to get started.

---

## 🎥 Demo Video

Watch the LED sequence in action:

[![Watch the video](https://img.youtube.com/vi/VvLbyTwm2pk/0.jpg)](https://www.youtube.com/shorts/VvLbyTwm2pk)

---

## 🎨 Customization

- ⏳ Modify the `delay()` times to speed up or slow down the sequence.
- ➕ Add more LEDs by extending the pin definitions and logic.

---

## 📜 License

This project is **open-source** under the **MIT License**.  
Feel free to **use, modify, and share** it! 🚀

---

🌟 **Enjoy making things blink!** 🌟
