// LED and button pin definitions
const int redLED = 2;
const int yellowLED = 4;
const int greenLED = 6;
const int blueLED = 8;
const int redButton = 3;
const int yellowButton = 5;
const int greenButton = 7;
const int blueButton = 9;

int sequence[100]; // Store the random sequence
int playerInput[100]; // Store the player's input sequence
int level = 0; // Current game level
bool gameOver = false; // Flag to check if the game is over

void setup() {
  // Initialize pin modes
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  
  pinMode(redButton, INPUT_PULLUP);
  pinMode(yellowButton, INPUT_PULLUP);
  pinMode(greenButton, INPUT_PULLUP);
  pinMode(blueButton, INPUT_PULLUP);
  
  Serial.begin(9600); // Debugging purpose
  
  // Start the game
  startGame();
}

void loop() {
  if (!gameOver) {
    // Play the current color sequence
    playSequence();
    
    // Check player's input
    if (!getPlayerInput()) {
      endGame();
    } else {
      delay(500); // Shorten delay after player input
    }
  } else {
    // Restart the game after a short delay
    delay(1500); // Shorten restart delay
    startGame();
  }
}

void startGame() {
  // Initialize game state
  level = 1;
  gameOver = false;
  
  // Turn on all LEDs to indicate game start
  digitalWrite(redLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(greenLED, HIGH);
  digitalWrite(blueLED, HIGH);
  
  delay(500); // Shorten the LED on time at the start
  
  // Turn off all LEDs
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
  
  randomSeed(analogRead(A0)); // Use analog pin to generate a random seed
  delay(500); // Shortened delay before game starts
}

void playSequence() {
  // Generate a random LED sequence, ensure the number corresponds to a valid LED
  sequence[level - 1] = random(1, 5); // Generate random value between 1 and 4 for colors
  
  // Play the current LED sequence
  for (int i = 0; i < level; i++) {
    lightUpLED(sequence[i]);
    delay(300); // Shortened delay between each sequence
  }
}

bool getPlayerInput() {
  for (int i = 0; i < level; i++) {
    bool inputReceived = false;
    
    while (!inputReceived) {
      if (digitalRead(redButton) == LOW) {
        playerInput[i] = 1; // Red button pressed
        lightUpLED(1); // Light up corresponding LED
        inputReceived = true;
      } else if (digitalRead(yellowButton) == LOW) {
        playerInput[i] = 2; // Yellow button pressed
        lightUpLED(2); // Light up corresponding LED
        inputReceived = true;
      } else if (digitalRead(greenButton) == LOW) {
        playerInput[i] = 3; // Green button pressed
        lightUpLED(3); // Light up corresponding LED
        inputReceived = true;
      } else if (digitalRead(blueButton) == LOW) {
        playerInput[i] = 4; // Blue button pressed
        lightUpLED(4); // Light up corresponding LED
        inputReceived = true;
      }
    }
    
    // Check if player input matches the sequence
    if (playerInput[i] != sequence[i]) {
      return false; // Player input is incorrect
    }
    delay(200); // Shorten delay after player input confirmation
  }
  level++; // Increase level after correct input
  return true;
}

void endGame() {
  gameOver = true; // Set game over flag
  
  // Flash LEDs to indicate the game is over
  for (int i = 0; i < 5; i++) {
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(greenLED, HIGH);
    digitalWrite(blueLED, HIGH);
    delay(200); // Faster flashing
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, LOW);
    digitalWrite(blueLED, LOW);
    delay(200);
  }
}

void lightUpLED(int color) {
  // Light up the corresponding LED based on the color
  switch (color) {
    case 1: // Red
      digitalWrite(redLED, HIGH);
      break;
    case 2: // Yellow
      digitalWrite(yellowLED, HIGH);
      break;
    case 3: // Green
      digitalWrite(greenLED, HIGH);
      break;
    case 4: // Blue
      digitalWrite(blueLED, HIGH);
      break;
  }
  delay(300); // Shorten LED on time
  
  // Turn off all LEDs
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(blueLED, LOW);
}
