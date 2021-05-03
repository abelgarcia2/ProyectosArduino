int led = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:   
  digitalWrite(led, HIGH);
  delay(200);       
  digitalWrite(led, LOW);
  delay(200);   

  digitalWrite(led, HIGH);
  delay(200);       
  digitalWrite(led, LOW);
  delay(1000);  
}
