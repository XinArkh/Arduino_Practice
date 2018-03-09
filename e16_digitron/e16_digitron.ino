int standard = 11;
int a = 8;
int b = 7;
int c = 6;
int d = 4;
int e = 3;
int f = 9;
int g = 10;
int dp = 5;

void digital_0(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);

  digitalWrite(g, HIGH);
  digitalWrite(dp, HIGH);
}

void digital_1(){
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);

  digitalWrite(a, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, HIGH);
}

void digital_2(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);

  digitalWrite(c, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(dp, HIGH);
}

void digital_3(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);

  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(dp, HIGH);
}

void digital_4(){
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);

  digitalWrite(a, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(dp, HIGH);
}

void digital_5(){
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);

  digitalWrite(b, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(dp, HIGH);
}

void digital_6(){
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);

  digitalWrite(b, HIGH);
  digitalWrite(dp, HIGH);
}

void digital_7(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);

  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(dp, HIGH);
}

void digital_8(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  
  digitalWrite(dp, HIGH);
}

void digital_9(){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  
  digitalWrite(e, HIGH);
  digitalWrite(dp, HIGH);
}

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);

  pinMode(standard, OUTPUT);
  digitalWrite(standard, HIGH);
}

void loop() {
  digital_0();
  delay(200);
  digital_1();
  delay(200);
  digital_2();
  delay(200);
  digital_3();
  delay(200);
  digital_4();
  delay(200);
  digital_5();
  delay(200);
  digital_6();
  delay(200);
  digital_7();
  delay(200);
  digital_8();
  delay(200);
  digital_9();
  delay(200);
}
