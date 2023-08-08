#if ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#include "SR04.h"

SR04::SR04(int TP, int EP) {
    pinMode(TP, OUTPUT);
    pinMode(EP, INPUT);
    Trig_Pin = TP;
    Echo_Pin = EP;
}

float SR04::Get() {
    digitalWrite(Trig_Pin, LOW);
    delayMicroseconds(2);
    digitalWrite(Trig_Pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(Trig_Pin, LOW);
    distance = pulseIn(Echo_Pin, HIGH) / 58.00;
    return distance;
}