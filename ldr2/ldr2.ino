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
  
  val = constrain(val ,  0, 900);
  int ledlevel = map(val, 750 ,900, 255, 0);
  
  analogWrite(ledpin,ledlevel);
}

