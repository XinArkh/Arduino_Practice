int potpin = A0;
int val, mV;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(potpin);
  mV = map(val, 0, 1023, 0, 5000);
  Serial.println(mV);
  delay(50);
}
