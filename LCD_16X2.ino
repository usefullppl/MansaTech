#include <LiquidCrystal_I2C.h>//panggil library LCD I2C yang dipakai
LiquidCrystal_I2C lcd(0x27, 16, 2); // set address I2C (0x27 atau 0x3F)kemungkinan perbedaan alamat  dan besar karakter untuk lcd 16×2 
int ir=8;
void setup() {
  lcd.begin(16, 2);
  pinMode(ir,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lcd.setCursor(2,0);//setting tulisan berada pada baris ke2 kolom ke 0
  lcd.print("hello, world!");//tulisan yang akan di display
  digitalWrite(ir,LOW);
  delay(1000);
  lcd.clear();
  digitalWrite(ir,HIGH);
  lcd.setCursor(1,1);//setting tulisan berada pada baris ke1 kolom ke 1
  lcd.print("dunia tipung2");//tulisannya 
  delay(1000);
}
