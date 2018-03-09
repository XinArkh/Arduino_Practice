int ledpin = 8;
int potpin = A5;
int val;

void setup() {
  pinMode(ledpin, OUTPUT);
}

void loop() {
  while(1){
    val = analogRead(potpin);
    if(val > 512){
      digitalWrite(ledpin, LOW);
    }
    else{
      digitalWrite(ledpin, HIGH);
    }
  }
}
