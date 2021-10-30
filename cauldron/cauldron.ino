#define RED_LED_PIN 10
#define GREEN_LED_PIN 9
#define BLUE_LED_PIN 8


void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int r = 0;
  for(r = 0; r < 255; r++){
    setColor(r, 0,0);
    delay(10);
  }
  for(r = 255; r > 0; r--){
    setColor(r, 0,0);
    delay(10);
  }
}

void setColor(int r, int g, int b){
  analogWrite(RED_LED_PIN, r);
  analogWrite(GREEN_LED_PIN, g);
  analogWrite(BLUE_LED_PIN, b);
}
