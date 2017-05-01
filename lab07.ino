#include <LiquidCrystal.h>
LiquidCrystal lcd(9, 6, 5, 4, 3, 2);
void setup() 
{
  lcd.begin(20, 2);
  lcd.print("04050742 Leo");
  lcd.setCursor(0,1);
  lcd.print("04050582 Leo");
  Serial.begin(9600);
}
void loop() 
{
  if(Serial.available())
  {
    delay(100);
    lcd.clear();
    while(Serial.available()>0)
    {
      lcd.write(Serial.read());
    }
  }
}
