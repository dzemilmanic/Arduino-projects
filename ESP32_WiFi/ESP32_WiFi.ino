#define BLYNK_PRINT Serial

/* Fill in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPL47GKxvstz"
#define BLYNK_TEMPLATE_NAME "LED on and off"
#define BLYNK_AUTH_TOKEN "KkBb7A2g-7ZK78laN3VwqJ1XgQ3E-mM0"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Your WiFi credentials.
char ssid[] = "Manic";
char pass[] = "fazafara";

// Define pin numbers for the LEDs
const int LED1 = 13;
const int LED2 = 14;
const int LED3 = 26;
const int LED4 = 33;
const int LED5 = 32; // New LED pin

// RGB LED pins
const int RED_PIN = 15;
const int GREEN_PIN = 17;
const int BLUE_PIN = 19;

// Variables for RGB color cycling
bool autoColorChange = false; // Flag for auto color change
unsigned long previousMillis = 0; // Timer for color change
const long interval = 20; // Interval for color change (ms)
int redValue = 255, greenValue = 0, blueValue = 0; // Initial RGB values

void setup()
{
  // Debug console
  Serial.begin(9600);

  // Initialize Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  // Set LED pins as output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);

  // Set RGB LED pins as output
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

  // Turn off all LEDs initially
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);

  // Turn off RGB LED initially
  analogWrite(RED_PIN, 0);
  analogWrite(GREEN_PIN, 0);
  analogWrite(BLUE_PIN, 0);
}

void loop()
{
  Blynk.run();

  // Handle automatic RGB color change
  if (autoColorChange)
  {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval)
    {
      previousMillis = currentMillis;
      cycleColors();
    }
  }
}

// Function to cycle through RGB colors
void cycleColors()
{
  if (redValue > 0 && blueValue == 0)
  {
    redValue--;
    greenValue++;
  }
  else if (greenValue > 0 && redValue == 0)
  {
    greenValue--;
    blueValue++;
  }
  else if (blueValue > 0 && greenValue == 0)
  {
    blueValue--;
    redValue++;
  }

  analogWrite(RED_PIN, redValue);
  analogWrite(GREEN_PIN, greenValue);
  analogWrite(BLUE_PIN, blueValue);
}

// Blynk virtual pin handlers
BLYNK_WRITE(V1)
{
  int value = param.asInt();
  digitalWrite(LED1, value);
}

BLYNK_WRITE(V2)
{
  int value = param.asInt();
  digitalWrite(LED2, value);
}

BLYNK_WRITE(V3)
{
  int value = param.asInt();
  digitalWrite(LED3, value);
}

BLYNK_WRITE(V4)
{
  int value = param.asInt();
  digitalWrite(LED4, value);
}

BLYNK_WRITE(V5)
{
  int value = param.asInt();
  digitalWrite(LED5, value);
}

// Handler for RGB LED manual control (V6, V7, V8)
BLYNK_WRITE(V6)
{
  int value = param.asInt();
  analogWrite(RED_PIN, value);
}

BLYNK_WRITE(V7)
{
  int value = param.asInt();
  analogWrite(GREEN_PIN, value);
}

BLYNK_WRITE(V8)
{
  int value = param.asInt();
  analogWrite(BLUE_PIN, value);
}

// Handler for toggling automatic RGB color change (V9)
BLYNK_WRITE(V9)
{
  autoColorChange = param.asInt();
  if (!autoColorChange)
  {
    // Turn off RGB LED when auto color change is disabled
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 0);
  }
}
