void setup() {

  for ( int i = 8 ; i <= 10+1 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  
  for (int i=8 ; i <= 10+1 ; i++)
  {
       digitalWrite( i , HIGH) ;
       delay (50) ;
       digitalWrite( i , LOW);
       delay (50) ;
  }
}
