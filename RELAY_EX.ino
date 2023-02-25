#define r1 8
int Trig=4;
int Echo=5;
int LED=6;
void setup() {
  pinMode(r1, OUTPUT);
  pinMode(Trig, OUTPUT);  
  pinMode(Echo, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(Trig, HIGH); // Ini menembakkan ultrasound.
      delayMicroseconds(10); //Ultrasonografi dihasilkan hanya dalam 10 mikrodetik
  digitalWrite(Trig, LOW); // Hentikan USG.
  
  int cm = pulseIn(Echo, HIGH)/58; // Ubah waktu yang diukur dgn ultrasound menjadi cm
  
  if(cm<5){ // Saat rintangan masuk dalam jarak 20cm, alarm berbunyi.
  digitalWrite(r1,LOW); 
  }else{
  digitalWrite(r1,HIGH);
  }
}
