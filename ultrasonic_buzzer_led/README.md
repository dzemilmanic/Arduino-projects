# 🛡️ Arduino Ultrasonic Distance Sensor with Buzzer and LED Indicator

This project uses an **HC-SR04 ultrasonic sensor** to measure the distance to nearby objects and activates a **buzzer** and **LED** when an object is within a defined "safe" distance. It's ideal for basic obstacle detection systems or proximity alerts.

---

## 🚀 Features

- 📏 Measures distance using an **HC-SR04** ultrasonic sensor  
- 🔊 Activates **buzzer** and **LED** if object is closer than **10 cm**  
- 📟 Displays real-time distance on the **Serial Monitor**  
- 🔧 Easily customizable threshold distance and logic  

---

## 🧠 How It Works

1. **Distance Measurement**  
   The ultrasonic sensor sends a pulse and measures the echo time to calculate the distance.

2. **Proximity Detection**  
   If the distance is **≤ 10 cm**, the buzzer and LED are turned ON to alert the user.

3. **Serial Feedback**  
   The measured distance is continuously printed to the Serial Monitor for feedback and debugging.

---

## 🔩 Components Required

| Component         | Quantity |
|------------------|----------|
| Arduino UNO/Nano | 1        |
| HC-SR04 Sensor   | 1        |
| Buzzer           | 1        |
| LED              | 1        |
| 220Ω Resistor    | 1        |
| Breadboard       | 1        |
| Jumper Wires     | As needed |

---

## 🔌 Circuit Connections

| Component    | Arduino Pin |
|--------------|-------------|
| HC-SR04 Trig | 9           |
| HC-SR04 Echo | 10          |
| Buzzer       | 11          |
| LED (+)      | 13 (via 220Ω resistor) |

> Make sure to connect GND and VCC properly for all components (5V for the sensor and buzzer).

---

## 💻 Code

The code for this project can be found in the file `ultrasonic_buzzer_led.ino` included in the repository. Open it using the Arduino IDE and upload it to your board.

---

## ▶️ Demo

📽️ Watch a short video demonstration:  
[![Watch the video](https://img.youtube.com/vi/GrfeFefpolU/0.jpg)](https://www.youtube.com/shorts/GrfeFefpolU)

---

## 🛠️ How to Use

1. **Assemble the Circuit** according to the diagram above.  
2. **Open the Arduino IDE** and upload the provided code.  
3. Open the **Serial Monitor** to view real-time distance data.  
4. Move an object closer to the sensor — the buzzer and LED will activate if within 10 cm.

---

## ⚙️ Customization

- You can easily adjust the safe distance by modifying the threshold value inside the code.
- You can expand the logic to include multiple sensors, more LEDs, or control servos and motors based on distance.

---

## 📄 License

This project is licensed under the **MIT License**. Feel free to use, modify, and share!
