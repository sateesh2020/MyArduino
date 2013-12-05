#define trigPin 13
#define echoPin 12
#define pin1 8
#define pin2 9
//#define pin3 10
//#define pin4 11
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  //pinMode(pin3, OUTPUT);
  //pinMode(pin4,OUTPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  if(distance < 20)
  {
   digitalWrite(pin1,LOW);
   digitalWrite(pin2,HIGH);
  }
  else
  {
    digitalWrite(pin1,HIGH);
   digitalWrite(pin2,LOW);
  }    
    
  
}
