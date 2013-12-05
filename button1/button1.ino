int button = 8;
int ledpin = 13;
boolean lastbut = LOW;
boolean currentbut = LOW;
boolean ledon = false;

void setup()
{
  pinMode(button,INPUT);
  pinMode(ledpin,OUTPUT);
}
boolean debounce(boolean last)
{
   boolean current = digitalRead(button);
   if (last!=current);
   {
     delay(5);
     current = digitalRead(button);
     }
   return current;
  }

void loop()
{
  currentbut = debounce(lastbut);
  if(lastbut == LOW && currentbut == HIGH)
  {
    ledon=!ledon;
      }
      
   lastbut = currentbut;
   }  
      digitalWrite(button,ledon);
}

