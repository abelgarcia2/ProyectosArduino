int led = 7;
int trigger = 8;
int echo = 9;
void setup(){
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
}

void loop(){
  long duracion, distancia;
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  duracion = pulseIn(echo, HIGH);
  distancia = duracion / 2 / 29.1;
  Serial.print(distancia);
  Serial.println("cm");

  if(distancia <= 20){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  delay(300);
}