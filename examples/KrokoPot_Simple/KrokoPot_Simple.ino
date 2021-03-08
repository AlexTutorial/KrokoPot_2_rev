#include<KrokoPot.h>
KrokoPot pot(0);
void setup() {
 Serial.begin(9600);

}

void loop() {
  Serial.println(pot.getPotVaule());

}
