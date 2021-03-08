#include <Servo.h>
#include<KrokoPot.h>
Servo myservo;  
KrokoPot pot(0);
void setup() {
  myservo.attach(9);  
}

void loop() {
myservo.write(pot.mapToServo());
}
