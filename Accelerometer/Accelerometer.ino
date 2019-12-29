#include <Wire.h>
#include "MMA7660.h"
MMA7660 acc;
 
void setup()
{
acc.init();
pinMode(13, OUTPUT);
Serial.begin(9600);
}
 
void loop()
{
 
static long cnt = 0;
static long cntout = 0;
float ax,ay,az;
int8_t x, y, z;
 
acc.getXYZ(&x,&y,&z);
 
Serial.print("x = ");
Serial.println(x);
Serial.print("y = ");
Serial.println(y);
Serial.print("z = ");
Serial.println(z);
 
 
if(acc.getAcceleration(&ax,&ay,&az))
{
Serial.print("get data ok: ");
}
else
{
Serial.print("tiem out: ");
}
 
Serial.println("accleration of X/Y/Z: ");
Serial.print(ax);
Serial.println(" g");
Serial.print(ay);
Serial.println(" g");
Serial.print(az);
Serial.println(" g");
Serial.println();
delay(1000);
 
}
