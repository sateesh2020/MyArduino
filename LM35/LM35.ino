float tempC;
int tempPin = 0;

void setup()
{
Serial.begin(9600); //opens serial port, sets data rate to 9600 bps
}

void loop()
{
tempC = analogRead(tempPin);           //read the value from the sensor
tempC = (5.0 * temp * 100.0)/1024.0;  //convert the analog data to temperature
Serial.println(tempC);             //send the data to the computer
delay(1000);                           //wait one second before sending new data
}
