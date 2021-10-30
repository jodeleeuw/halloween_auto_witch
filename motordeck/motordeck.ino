#include <Servo.h>

Servo pwm;

void setup() {
  // put your setup code here, to run once:
  pwm.attach(11);
}


// 1050 is clockwise looking at the motor
// 1950 is counterclockwise looking at the motor

// 1500 is neutral.

void loop() {
  // put your main code here, to run repeatedly:
  
  sendDown(5000);

  delay(5000);

  sendUp(5000);

  delay(5000);
}

void sendDown(int duration){
  int total_time = 0;
  for(int pulse = 1500; pulse < 1950; pulse +=10){
    pwm.writeMicroseconds(pulse);
    delay(100);
    total_time += 100;
  }

  delay(duration - total_time);

  for(int pulse = 1950; pulse >= 1500; pulse -=10){
    pwm.writeMicroseconds(pulse);
    delay(100);
  }
}

void sendUp(int duration){
  int total_time = 0;
  for(int pulse = 1500; pulse > 1050; pulse -=10){
    pwm.writeMicroseconds(pulse);
    delay(100);
    total_time += 100;
  }

  delay(duration - total_time);

  for(int pulse = 1050; pulse <= 1500; pulse +=10){
    pwm.writeMicroseconds(pulse);
    delay(100);
  }
}
