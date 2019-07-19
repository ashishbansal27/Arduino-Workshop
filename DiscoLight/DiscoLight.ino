int soundsensor = 3;int led = 13;                // defining pin numbers
void setup() 
{ 
  pinMode (soundsensor, INPUT);
  pinMode (led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorvalue = digitalRead (soundsensor);            //if the sound intensity is higher than threshold which is set by us, 
   Serial.println(   sensorvalue);                                                    //then sensor would return the value as 1
  if (sensorvalue == 1)                                    
  {
    digitalWrite(led, HIGH);
  }
  
  else
  {
    digitalWrite(led, LOW);
  }
  
}

