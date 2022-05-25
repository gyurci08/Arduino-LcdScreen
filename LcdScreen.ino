
#include <LiquidCrystal.h>

const int rs = 0, en = 1, d4 = 13, d5 = 12, d6 = 11, d7 = 10;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  

}

void loop() {
    // Print a message to the LCD.
  lcd.setCursor(0,0);
  lcd.print("12");
  
  lcd.setCursor(0,1);
  lcd.print("2");
}
