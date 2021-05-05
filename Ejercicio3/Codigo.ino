void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  for (int i=8 ; i <= 10 ; i++)
  {
       digitalWrite( i , HIGH) ;
       delay (200) ;
       digitalWrite( i , LOW);
       delay (200) ;
  }
  
  digitalWrite(11, HIGH);
  tone(7, 440);
  delay(200);
  noTone(7);
  digitalWrite(11, LOW);

}