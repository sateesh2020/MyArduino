int ldrpin = 0;
int ledpin = 8;

void setup()
{
  analogReference(DEFAULT);
  
  pinMode(ledpin , OUTPUT);
}
void loop()
{
  int val = analogRead(ldrpin);
  
  if(val < 800) digitalWrite(ledpin,HIGH);
  else digitalWrite(l pin,LOW);
}

