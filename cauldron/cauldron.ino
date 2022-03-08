#define RED_LED_PIN 11
#define GREEN_LED_PIN 9
#define BLUE_LED_PIN 10

int light_mode = 0;

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
}

void loop() {

  int pulse = 0;

  if(light_mode == 0){
    for(pulse = 20; pulse < 120; pulse += 1){
      setColor(0, pulse, 0);
      delay(20);
    }
    for(pulse = 120; pulse > 20; pulse -= 1){
      setColor(0, pulse, 0);
      delay(20);
    }
  }

}

void setColor(int r, int g, int b){
  analogWrite(RED_LED_PIN, r);
  analogWrite(GREEN_LED_PIN, g);
  analogWrite(BLUE_LED_PIN, b);
}
