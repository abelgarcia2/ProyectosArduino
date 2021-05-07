#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);
void setup() {
    lcd.init();
    lcd.backlight();
    lcd.print("Dani TE QUIERO ");
}

void loop(){

}