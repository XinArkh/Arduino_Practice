int inpin = 10;
int greenled = 4;
int val;

void setup() {
  pinMode(inpin, INPUT);
  pinMode(greenled, OUTPUT);
//  Serial.begin(9600);
}

void loop() {
  val = digitalRead(inpin);
  if(val == LOW){
    digitalWrite(greenled, LOW);
  }
  else{
    digitalWrite(greenled, HIGH);
  }
//  Serial.println(val);
//  delay(300);
}
