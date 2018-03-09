int buzzer = 9;
int lightControlResistor = A0;
int val;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  val = analogRead(lightControlResistor);
  if(val < 700){
    voice(val);
  }
}

void voice(int del){
  digitalWrite(buzzer, HIGH);
  delay(del);
  digitalWrite(buzzer, LOW);
  delay(del);
}
