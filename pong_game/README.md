# 🕹️ OLED Pong Game (Arduino)

A classic Pong-style game built for small OLED displays using an Arduino. Control your paddle using physical buttons and compete against a simple AI-controlled paddle.

📁 **File Name:** `pong_game.ino`

---

## 📦 Components Used

- 🧠 **Microcontroller**: Arduino Uno (or compatible)
- 🖥️ **Display**: OLED SSD1306 (128x64 pixels, I2C interface)
- 🎮 **Buttons**: 2 pushbuttons (Up/Down)
- 🔌 **Wiring**: Breadboard & jumper wires


## 🧰 Components Used

| Component        | Quantity |
|------------------|----------|
| Arduino (Uno/Nano) | 1        |
| Display      | 1        |
| Buttons              | 2        |
| Resistors (10kΩ) | 2 |
| Jumper Wires      | Several  |
| Breadboard        | 1        |

---

## 🔧 Libraries Required

Install the following Arduino libraries via the Library Manager:

- `Adafruit_GFX`
- `Adafruit_SSD1306`

---

## 🔌 Pin Configuration

| Component    | Pin         |
|--------------|-------------|
| Up Button    | D3          |
| Down Button  | D2          |
| OLED SDA     | A4 (Uno)    |
| OLED SCL     | A5 (Uno)    |
| OLED RESET   | D4          |

---

## ▶️ How to Play

- Move your paddle up and down using the buttons.
- Block the ball from hitting your side of the screen.
- First to 3 points wins!
- CPU paddle will try to follow the ball.
- Game ends with a message: `You win!` or `You lose!`.

---

## 🚀 Getting Started

1. Connect the OLED screen and buttons to the correct pins.
2. Upload the code to your Arduino using the Arduino IDE.
3. Game starts after a short delay.
4. Watch the score update at the top of the screen.

---

## 🎯 Game Logic Highlights

- Ball speed increases with each paddle hit.
- CPU paddle tracks ball position gradually.
- Collision detection for top/bottom screen edges.
- Game-over condition after either side reaches 3 points.

---

## 📃 License

This project is open-source and free to use under the MIT License.

---
