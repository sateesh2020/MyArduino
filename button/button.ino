int button = 8;
int ledpin = 13;

void setup()
{
  pinMode(button,INPUT);
  pinMode(ledpin,OUTPUT);
}

void loop()
{
  if(digitalRead(button)==HIGH)
  
      digitalWrite(button,HIGH);
    
    else
    
      digitalWrite (button,LOW);
}

