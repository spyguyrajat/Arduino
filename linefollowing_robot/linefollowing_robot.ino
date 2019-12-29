#include<AFMotor.h>

AF_DCMotor motor3(3); //Motors
AF_DCMotor motor4(4);


int sensorPin1 = A4; //LDR 
int sensorPin2 = A5;



void setup() 

 {
  
  Serial.begin(9600);   // Start Serial & set pin to output  
  motor3.setSpeed(255); 
  motor4.setSpeed (255);
  
  }

void loop() 

{
  int sensorValue1 = analogRead(sensorPin1);// Read the sensor pin
  int sensorValue2 = analogRead(sensorPin2);
 
  
  //if light intensity it High 
  if (sensorValue1 > 50)
  {
  motor3.run(FORWARD);
  }
  else
  {
    motor3.run(RELEASE);
  }
   
  if (sensorValue2 > 50)
  {
    motor4.run(FORWARD);
  }
  else
  {
    motor4.run(RELEASE);
  }
}
