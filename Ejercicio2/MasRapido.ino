void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  
  for (int i=8 ; i <= 10+1 ; i++)
  {
         digitalWrite( i , HIGH) ; 
  }
  
  delay (1000) ;

  for (int i=8 ; i <= 10+1 ; i++){
    digitalWrite( i , LOW);
  }
  delay (1000) ;
}
