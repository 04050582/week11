#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() 
{
  Serial.begin(9600);
  Serial.print("04050582 chou zhi chen");
  lcd.begin(20, 2);
  lcd.print("04050582");
  lcd.setCursor(0,1);
  lcd.print("chou zhi chen");
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
