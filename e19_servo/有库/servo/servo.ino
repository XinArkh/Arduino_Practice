#include <Servo.h>
Servo myservo;
int val = 0;
int flag = 0;

void setup() {
  myservo.attach(9);
  Serial.begin(9600);
  Serial.println("servo  ready");
}

void loop() {
  while(Serial.available() > 0){
    int tmp = Serial.read();
    if(tmp >= '0' && tmp <= '9'){
      val = val * 10 + tmp - '0';
    }
    flag = 1;
    delay(2);
  }
  if(flag > 0){
    Serial.print("servo moving to ");
    Serial.print(val, DEC);
    Serial.println();
    myservo.write(val);
    flag = 0;
    val = 0;
  }
  
}
