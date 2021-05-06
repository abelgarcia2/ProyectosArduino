#include <Servo.h>
Servo servo;

int pulsador = 7;
int pinServo = 8;
int angulo = 0;

void setup() {
  pinMode(pulsador, INPUT);
  servo.attach(pinServo);
  Serial.begin(9600);
}

void loop() {
  while(digitalRead(pulsador)){
      Serial.println(servo.read());

    angulo++;
    servo.write(angulo);
    if(servo.read() == 180){
      servo.write(0);
      angulo = 0;
    }
  }

}