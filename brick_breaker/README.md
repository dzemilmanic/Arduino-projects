# 🕹️ OLED Brick Breaker Game (Arduino)

This project is a simple version of the classic "Breakout" game built for Arduino using an **OLED display** and **joystick module**. The player moves a paddle left and right using the joystick to bounce the ball and break all the bricks. If the ball falls below the paddle – the game is lost. If all bricks are destroyed – you win!

📁 **File**: `brick_breaker.ino`

---

## 🧰 Components Used

| Component        | Quantity |
|------------------|----------|
| Arduino (Uno/Nano) | 1        |
| Display      | 1        |
| Joystick module              | 1        |
| Jumper Wires      | Several  |
| Breadboard        | 1        |

---

## ⚙️ Wiring

| Component     | Arduino Pin |
|---------------|-------------|
| OLED VCC      | 5V          |
| OLED GND      | GND         |
| OLED SDA      | A4 (SDA)    |
| OLED SCL      | A5 (SCL)    |
| Joystick Y    | A1          |
| Joystick SW   | D8          |
| Random seed   | A2 (unconnected) |

---

## 🧠 Features

- Paddle control using joystick (left/right)
- Ball bounces off paddle, walls, and bricks
- 3 rows x 6 columns of bricks (18 total)
- Ball speed increases after hitting the paddle
- Win condition: all bricks broken
- Lose condition: ball falls below paddle
- Press joystick button to reset game

---

## 🎮 Controls

- **Move paddle:** Joystick (left/right on Y-axis)
- **Reset game:** Press joystick button (SW)

---

## 📚 Libraries

Make sure you have the following libraries installed in the Arduino IDE:

- `Adafruit GFX`
- `Adafruit SSD1306`

Install via:  
**Arduino IDE > Tools > Manage Libraries...**

---

## 🎥 Demo Video

Watch the memory game in action:

[![Watch the video](https://img.youtube.com/vi/Pwg9WEZFZWk/0.jpg)](https://www.youtube.com/shorts/Pwg9WEZFZWk)

---

## 🚀 Getting Started

1. Connect components according to the wiring table above.
2. Open the Arduino IDE and paste the sketch into a new `.ino` file.
3. Select your board and COM port.
4. Upload the code.
5. Enjoy the game on your OLED display!

---

## 📝 License

This project is free to use and modify for educational purposes.
