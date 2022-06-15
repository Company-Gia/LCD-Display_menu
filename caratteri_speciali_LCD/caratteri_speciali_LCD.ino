/**
 * @file caratteri_speciali_LCD.ino
 * @author your name (you@domain.com)
 * @brief this shit is a file to test the customized characters of the header file.
 * It will be removed in the future.
 * @version 0.1
 * @date 2022-06-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "characters_code.h"
#include <LiquidCrystal.h>
LiquidCrystal lcd (7, 6, 5, 4 , 3, 2);

void setup() { 
  Serial.begin(9600);
  lcd.createChar(0, arrow_0);
  lcd.createChar(1, u);
  lcd.createChar(2, indicatore);
  lcd.begin(16,2);
}

void loop() { 
  lcd.setCursor(0,0); 
  lcd.write(byte(2));
  
  lcd.setCursor(1,0);
  lcd.print("men"); 
  lcd.setCursor(4,0);
  lcd.write(byte(1));
  
  lcd.setCursor(5,0);
  lcd.write(byte(0));
}
