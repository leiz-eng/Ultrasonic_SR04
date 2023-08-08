#include "SR04.h"

SR04 sr04 = SR04(2,3);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float distance = sr04.Get();
  Serial.print(distance);
  Serial.print("cm\n");
  delay(1000);
}
