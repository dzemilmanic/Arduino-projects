# 🎹 Mini Piano with LEDs and Buzzer

This is a simple **Arduino mini piano** project using 6 push buttons, 6 LEDs, and a passive buzzer. Each button plays a different musical note (C4 to A4), lights up a corresponding LED, and produces sound using a passive buzzer.

📁 **File Name:** `mini_piano.ino`

---

## 🔧 Features

- 🎵 **Plays 6 musical notes**: C4, D4, E4, F4, G4, A4
- 💡 **LED indicators**: Each note lights up a unique LED
- 🎛️ **Push button control**: Each button triggers a note
- 🔊 **Passive buzzer output**: Produces sound corresponding to each note
- 🛡️ **Debounce delay**: Reduces false triggers

---

## 🧰 Components Used

| Component        | Quantity |
|------------------|----------|
| Arduino (Uno/Nano) | 1        |
| Push Buttons      | 6        |
| LEDs              | 6        |
| Resistors (220Ω for LEDs, 10kΩ optional for buttons) | 6+ |
| Passive Buzzer    | 1        |
| Jumper Wires      | Several  |
| Breadboard        | 1        |

---

## 🚀 How It Works

1. The user presses one of the 6 buttons.
2. The Arduino detects a LOW signal (button press).
3. A tone is played on the buzzer using the `tone()` function.
4. The corresponding LED turns on while the note plays.
5. LED and sound turn off after a short duration, ready for the next input.

---

## 🎥 Demo Video

Watch the mini piano in action:

[![Watch the video](https://img.youtube.com/vi/-_8KB8qRQIQ/0.jpg)](https://www.youtube.com/shorts/-_8KB8qRQIQ)

---

## 📄 Dependencies

Make sure you have the `pitches.h` file in your project. It defines note frequencies like `NOTE_C4`, `NOTE_D4`, etc.

---

## 🤝 Contributing

Feel free to improve the piano, add more notes, or implement polyphony and scales! PRs are welcome.

---

## 🪪 License

This project is open-source and available under the MIT License.

---

Enjoy making music with your mini Arduino piano! 🎶
