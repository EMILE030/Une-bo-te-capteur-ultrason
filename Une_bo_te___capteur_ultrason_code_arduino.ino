
 #include "HCSR04.h"
 #include <Servo.h>
 
Servo myservo; 
const int TRIGGER_PIN = 3;
const int ECHO_PIN = 5;

UltraSonicDistanceSensor capteurDistance (TRIGGER_PIN,ECHO_PIN);
void setup() {
  myservo.attach(9);
}

void loop() {
  float distance = 0;
  distance = capteurDistance.measureDistanceCm();
  delay(200);
if(distance < 20){
  myservo.write(150);
  }
else{
  myservo.write(0);
} 
}
