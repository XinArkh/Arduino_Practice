int led = 4;
int ledpin = 10;
int reset = 7;
int val;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(ledpin, INPUT);
}

void loop() {
  val = digitalRead(ledpin);
  if(val == HIGH) LED_YES();
}

void LED_YES(){
  while(digitalRead(reset) == LOW){
    digitalWrite(led, HIGH);
  }
  CLEAR_LED();
}

void CLEAR_LED(){
  digitalWrite(led, LOW);
}

