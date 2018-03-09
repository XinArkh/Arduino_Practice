#include <Stepper.h>
#define STEPS 100
Stepper stepper(STEPS, 8, 10, 9, 11);
//接线顺序还是8， 9， 10， 11，定义stepper(STEPS, 8, 9, 10, 11)
//时不能逆时针转，换成这种定义或接线时2、3线交换接就可以两个方向转

void setup() {
  stepper.setSpeed(90);
  Serial.begin(9600);
}

void loop() {
  if(Serial.read() == 'a'){
    Serial.println("clockwise");
    stepper.step(2000);
    delay(1000);
    Serial.println("counterclockwise");
    stepper.step(-2000);
    delay(1000);
  }
}
