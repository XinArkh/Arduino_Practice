int potpin = A0;
int val;
int dat;

void setup()
{
Serial.begin(9600);
}
void loop()
{

val=analogRead(potpin);
dat=(125*val)>>8;//温度计算公式
Serial.print("Tep:");
Serial.print(dat);
Serial.println("C");
delay(500);
}

