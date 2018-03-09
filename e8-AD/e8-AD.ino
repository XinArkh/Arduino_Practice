int potpin = 0;
int val;

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(potpin);
  Serial.println(val);
  delay(100);
}
