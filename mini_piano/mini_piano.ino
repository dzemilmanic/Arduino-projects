#include "pitches.h"

// LED pin numbers (C, D, E, F, G, A)
const int ledPins[6] = {0, 2, 4, 6, 8, 10};

// Button pin numbers (C, D, E, F, G, A)
const int buttonPins[6] = {1, 3, 5, 7, 9, 11};

// Passive buzzer pin
const int buzzerPin = 12;

// Note frequencies (C4 to A4)
const int noteFrequencies[6] = {
  NOTE_C4, NOTE_D4, NOTE_E4,
  NOTE_F4, NOTE_G4, NOTE_A4
};

// Length of each note in milliseconds
const int noteDuration = 250;

// Pause time between notes
const int pauseDuration = 30;

void setup() {
  // Set LED pins as outputs
  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  // Set button pins as inputs with internal pull-up resistors
  for (int i = 0; i < 6; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Check each button
  for (int i = 0; i < 6; i++) {
    // Button is pressed when the pin reads LOW
    if (digitalRead(buttonPins[i]) == LOW) {
      playNote(i);
      delay(150); // Simple debounce delay
    }
  }
}

// Play a note and flash the matching LED
void playNote(int index) {
  tone(buzzerPin, noteFrequencies[index], noteDuration);
  digitalWrite(ledPins[index], HIGH);  // Turn on LED
  delay(noteDuration);                 // Wait for note to finish
  digitalWrite(ledPins[index], LOW);   // Turn off LED
  noTone(buzzerPin);                   // Stop sound
  delay(pauseDuration);               // Short pause between notes
}