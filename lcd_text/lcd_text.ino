#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Inicijalizacija LCD-a sa adresom 0x27 (proveri adresu ako ne radi)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();        // Inicijalizacija LCD-a
  lcd.backlight();   // Uključivanje pozadinskog osvetljenja
  lcd.clear();       // Čišćenje ekrana
}

void loop() {
  String message = "a svi kako ste"; // Tekst za pomeranje
  int messageLength = message.length();         // Dužina poruke
  
  // Petlja za pomeranje teksta s leva na desno
  for (int i = 0; i < messageLength + 16; i++) {
    lcd.clear(); // Očisti ekran pre svakog novog prikaza
    
    // Prikaz teksta od i-te pozicije
    lcd.setCursor(16 - i, 0); // Postavi početak prikaza na liniju 0
    lcd.print(message);       // Prikaz teksta
    
    delay(300); // Pauza između pomeranja (u milisekundama)
  }

  // Pauza pre nego što se tekst ponovo pojavi
  delay(1000);
}
