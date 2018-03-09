int potpin = A0;
int ledpin = 11;
int val;

void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(potpin);
  Serial.println(val);
  analogWrite(ledpin, val/4);
  delay(10);
}
