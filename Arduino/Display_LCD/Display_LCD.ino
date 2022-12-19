#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
byte customChar[8] = {
  B00100,
  B10101,
  B01010,
  B10001,
  B01010,
  B10101,
  B00100,
  B00000
};

long randNumber;
long ran_1;

void setup() {
  lcd.createChar(0,customChar);
  lcd.begin(16, 2);
  Serial.begin(9600);
  randomSeed(analogRead(0));
  randomSeed(analogRead(1));
  
}

void loop() {

// change the positions of each charcter randomly
randNumber = random(0,15);
ran_1 = random(0,10);


Serial.println(randNumber);
lcd.setCursor(2,0);
lcd.write(byte(0));
delay(300);
lcd.clear();
delay(100);
lcd.setCursor(2,1);
lcd.write(byte(0));

  
  

}
