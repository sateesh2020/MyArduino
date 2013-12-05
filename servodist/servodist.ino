//Incude servo library
// Create a Servo object
#inclu  <Servo.h>
Servo satheesh;
//Define the pins
int servopin = 9;
int distpin = 0;

void setup()
{
  //Attach servo
  satheesh.attach(servopin);
}

void loop()
{
  int dist = analogRead(distpin);
 int pos = map(dist, 0, 1023, 0, 180);
 satheesh.write(pos);
}
  
