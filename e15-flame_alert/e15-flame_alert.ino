int flame = A5;
int buzzer = 9;
int val;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(flame);
  Serial.println(val);
  if(val > 600){
//    for(int i = 0; i < 80; i++){
//    digitalWrite(buzzer, HIGH);
//    delay(1);
//    digitalWrite(buzzer, LOW);
//    delay(1);
//    }
    tone(buzzer, 50, 500);
//    delay(500);
//    noTone(buzzer);
  }
  else{
    digitalWrite(buzzer, LOW);
  }
  delay(500);
}
