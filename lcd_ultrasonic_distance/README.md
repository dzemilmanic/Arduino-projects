# 📏 Arduino Ultrasonic Distance Sensor with LCD Display

This project demonstrates how to use an **HC-SR04 ultrasonic sensor** with an **LCD display** to measure and show distances in real-time using an **Arduino**.

---

## ✨ Features

- 📡 **Real-Time Distance Measurement** using ultrasonic sensor.
- 🖥️ **16x2 LCD Display** (via I2C) shows distance in **centimeters and inches**.
- ⚙️ **Simple Setup**: Easy-to-follow wiring and code.

---

## 🧠 How It Works

1. 📡 **Distance Measurement**:
   - The HC-SR04 sensor emits ultrasonic waves and listens for the echo.
   - Based on the echo duration, the distance is calculated using the formulas:
     - 🧮 **Centimeters**: `distance = (duration / 2) / 29.1`
     - 🧮 **Inches**: `distanceInch = duration * 0.0133 / 2`

2. 🖥️ **Display**:
   - The 16x2 LCD displays:
     - 📏 First row: distance in **centimeters**
     - 📐 Second row: distance in **inches**

---

## 🧰 Components Needed

- 🔌 **Arduino board** (Uno, Nano, etc.)
- 📡 **HC-SR04 Ultrasonic Sensor**
- 🖥️ **16x2 LCD** with **I2C interface**
- 🔩 **Breadboard and jumper wires**

---

## 🛠️ Circuit Diagram

1. 📡 **Ultrasonic Sensor**:
   - `Trig` → Arduino **A0**
   - `Echo` → Arduino **A1**

2. 🖥️ **LCD I2C**:
   - `SDA` → Arduino **A4** (or corresponding SDA pin)
   - `SCL` → Arduino **A5** (or corresponding SCL pin)
   - `VCC` → **5V**
   - `GND` → **GND**

---

## 💻 Code

The Arduino sketch is located in the `ultrasonic_lcd_display.ino` file in this repository.  
Upload it using the Arduino IDE and start measuring distances in real-time!

---

## 🎬 Demo Video

Watch the project in action:

[![Watch the video](https://img.youtube.com/vi/NzaEAsScY9o/0.jpg)](https://www.youtube.com/shorts/NzaEAsScY9o)

---

## 🚀 How to Use

1. 🔌 **Set up the circuit**:
   - Connect the ultrasonic sensor and LCD as shown above.
   - Double-check power and I2C connections.

2. 💻 **Upload the code**:
   - Open `.ino` file in the Arduino IDE.
   - Connect your Arduino board and upload the sketch.

3. 📈 **Run the system**:
   - Observe the real-time distance values on the LCD in both cm and inches.

---

## 🎨 Customization

- 🌍 **Change distance units** (e.g. meters, feet) by modifying conversion formulas.
- 🚨 **Add alerts**: Connect LEDs or buzzers that activate based on distance thresholds.

---

## 📄 License

This project is **open-source** and available under the **MIT License**.  
Feel free to **use, modify, and share** it!

---

🌟 **Happy Tinkering!** 🌟
