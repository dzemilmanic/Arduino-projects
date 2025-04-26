# 🌈 ESP32 LED Control with Blynk and RGB Cycling

This project allows you to **control multiple LEDs**, including an **RGB LED**, using the **Blynk app** and an **ESP32** board.  
It also features **automatic RGB color cycling** and **manual RGB control** via sliders.

---

## ✨ Features

- 🔵 Control up to **5 individual LEDs** (LED1 to LED5) via the Blynk app.
- 🌈 Automatic **RGB color cycling** with adjustable speed.
- ⚡ Simple and easy to set up with **ESP32** and **Blynk**.

---

## ⚙️ How It Works

1. 💡 **LED Control**: The Blynk app sends signals to the ESP32 to turn each LED **ON/OFF**.
2. 🎛 **RGB LED Control**: Sliders in the Blynk app allow manual control of **RGB colors**.
3. 🔄 **Automatic RGB Color Change**: Smooth and continuous color cycling when auto-mode is enabled.

---

## 🛠️ Components Needed

- 📟 **ESP32 development board**
- 💡 **5 LEDs**
- 🌈 **1 RGB LED** (3 pins: Red, Green, Blue)
- 🔩 **8 Resistors** (220Ω for LEDs)
- 🔌 **Breadboard and jumper wires**
- 📱 **Blynk app** (mobile or web version)
- 🌐 **Wi-Fi network** for ESP32 connection

---

## 🖥️ Circuit Diagram

- ⚡ Connect each LED to a digital pin on the ESP32 through a **220Ω resistor**.
- 🌈 Connect the RGB LED pins to specific **GPIO pins** on the ESP32 (Red, Green, Blue).
- 🔋 Ensure proper **power supply** to your ESP32 board.

---

## 💻 Code

The Arduino sketch is located in the `ESP32_WiFi.ino` file in this repository.  
Upload it to your ESP32 board to start controlling the LEDs through the Blynk app.

---

## 🎥 Demo Video

Watch the demo video here:  

[![Watch the video](https://img.youtube.com/vi/DCFN3LZFeBg/0.jpg)](https://youtube.com/shorts/DCFN3LZFeBg)

---

## 🚀 How to Use

1. 📲 **Set up Blynk**:
   - Create a new project in the Blynk app.
   - Insert your **BLYNK_TEMPLATE_ID**, **BLYNK_TEMPLATE_NAME**, and **BLYNK_AUTH_TOKEN**.
   - Add buttons for **LEDs (V1 to V5)** and sliders for **RGB control (V6 to V8)**.
   - Add a switch to enable/disable **automatic RGB cycling (V9)**.

2. 🖥 **Upload the code**:
   - Open the provided `.ino` file in the Arduino IDE.
   - Install libraries: `WiFi.h`, `BlynkSimpleEsp32.h`.
   - Upload the code to your ESP32.

3. 💡 **Control the LEDs**:
   - Use the Blynk app to turn LEDs **ON/OFF**.
   - Adjust the **RGB LED color** manually.
   - Toggle **automatic color cycling** with the switch.

---

## 🎨 Customization

- ⏱ Change the **RGB cycling speed** by adjusting the `interval` variable in the code.
- ➕ Add more LEDs or different components.
- 🔧 Modify the **GPIO pins** in the sketch if needed.

---

## 📜 License

This project is **open-source** under the **MIT License**.  
Feel free to **use, modify, and share** it! 🚀

---

🌟 **Happy Making!** 🌟
