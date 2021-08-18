#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int a =0;
int b = 7;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Counter");
  pinMode(b,INPUT);
}

void loop() {
  int button = digitalRead(b);
  
  
   lcd.setCursor(3, 1);
    lcd.print(a);
  
  
  if (button == HIGH) {
    a ++;
    lcd.setCursor(3, 1);
    lcd.print(a);
     delay(200);
    }
}
