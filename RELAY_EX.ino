#define r1 8
void setup() {
  pinMode(r1, OUTPUT);
}
void loop() {
  digitalWrite(r1,LOW); 
  delay(1000);
  digitalWrite(r1,HIGH);
  delay(1000);
  digitalWrite(r1,LOW); 
  delay(1000);
  digitalWrite(r1,HIGH);
  delay(1000);
}
