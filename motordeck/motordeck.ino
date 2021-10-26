#include <Servo.h>

Servo pwm;

void setup() {
  // put your setup code here, to run once:

  pwm.attach(11);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  pwm.writeMicroseconds(1500);
  delay(1000);
  pwm.writeMicroseconds(1950);
  delay(1000);
  pwm.writeMicroseconds(1050);
  delay(1000);
  pwm.writeMicroseconds(1500);
}
