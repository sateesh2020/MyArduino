void setup() {               
   pinMode(0, OUTPUT);
   pinMode(1, OUTPUT);
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT); 
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
   
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);

}
void loop() 
{
  digitalWrite(4, HIGH);  //Mode 1
  delay(1);             
 digitalWrite(9, LOW);  
  delay(100);             
 digitalWrite(4, LOW);   //Mode 1 off 
  delay(1);            
 digitalWrite(9,HIGH);
 
 digitalWrite(7, HIGH);   //Mode 2
  delay(1);
 digitalWrite(5, HIGH); 
  delay(1); 
 digitalWrite(3, HIGH); 
  delay(1); 
 digitalWrite(1, HIGH);
 delay(1);              
 digitalWrite(10,LOW);   
  delay(100);
  digitalWrite(7, LOW);  //Mode 2 off
  delay(1);
  digitalWrite(5, LOW); 
  delay(1); 
  digitalWrite(3, LOW); 
  delay(1); 
 digitalWrite(1, LOW);
 delay(1);              
 digitalWrite(10,HIGH);
  delay(1);
  digitalWrite(11, LOW);   //Mode 3
  delay(1);
  digitalWrite(0, HIGH); 
  delay(1); 
  digitalWrite(1, HIGH); 
  delay(1); 
 digitalWrite(2, HIGH);
 delay(1);              
 digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(4, HIGH); 
  delay(1);
  digitalWrite(5, HIGH); 
  delay(1); 
  digitalWrite(6, HIGH); 
  delay(1); 
 digitalWrite(7, HIGH);
 delay(1);              
 digitalWrite(8,HIGH);
  delay(100);
  digitalWrite(11, HIGH);  //Mode 3 off
  delay(1);
  digitalWrite(0, LOW); 
  delay(1); 
  digitalWrite(1, LOW); 
  delay(1); 
 digitalWrite(2, LOW);
 delay(1);              
 digitalWrite(3,LOW);
  delay(100);
  digitalWrite(4,LOW); 
  delay(1);
  digitalWrite(5,LOW); 
  delay(1); 
  digitalWrite(6,LOW); 
  delay(1); 
 digitalWrite(7,LOW);
 delay(1);              
 digitalWrite(8,LOW);
 
 delay(200);
 
}
