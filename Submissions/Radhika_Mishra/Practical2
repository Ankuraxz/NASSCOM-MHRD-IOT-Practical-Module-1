//PIR
int sensorState = 0;
//SERVO
#include <Servo.h>
int pos = 0;
int pos1 = 0;
Servo servo_3;
//LDR
int ldr =0;

//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(4,INPUT);
  servo_3.attach(3);
  pinMode(A0, INPUT);
  pinMode(6,OUTPUT);
  digitalWrite(6,LOW);
}
  
 void loop()
 {
  sensorState = 0;
  ldr=100;
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
   
   //PIR + SERVO (Automated DOOR)
   sensorState = digitalRead(4);
   if (sensorState == HIGH)
   {
     for (pos = 0; pos <= 270; pos += 1)
     {
       servo_3.write(pos);
       delay(5);
     }
   }
   else
   {
   for (pos1 = pos; pos1 >= 0; pos1 -= 1)
     {
       servo_3.write(pos1);
       delay(5);
   }
   }
   
   //LDR + BULB (Automated Lights)
   ldr = analogRead(A0);
   if (ldr <30)
   {
     digitalWrite(6,HIGH);
     delay(10);
   }
   else{
        digitalWrite(6,LOW);
   }
 }

   
  
  
  
  
  
