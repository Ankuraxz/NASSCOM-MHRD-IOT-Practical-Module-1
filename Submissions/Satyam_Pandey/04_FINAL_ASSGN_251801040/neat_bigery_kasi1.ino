#include<stdio.h>
const int temperaturePin = 0;
const int motorPin = 9;
const int led = 3;
void setup(){
  Serial.begin(9600);
  pinMode(motorPin , OUTPUT);
  pinMode(led , OUTPUT);
}

float getVoltage(int pin){
  return(analogRead(pin)*0.004882814);
}
void loop(){
  int speed;
  {float voltage, degreesC, degreesF;
   voltage = getVoltage(temperaturePin);
   degreesC = (voltage - 0.5)*100.0;
   degreesF = degreesC * (9.0/5.0)+ 32.0;
   
   if(degreesF > 75)
   {
     digitalWrite(motorPin,HIGH);
     delay(10000);
     digitalWrite(motorPin,LOW);
   }
   Serial.print("voltage: ");
   Serial.print("voltage: ");
   Serial.print("voltage: ");
   Serial.print("voltage: ");
   Serial.print("voltage: ");
   Serial.print("voltage: ");
   
   delay(500);
   
  }
  int sensor_value = analogRead(A1);
  if(sensor_value <150)
  {
    digitalWrite(led,HIGH);
  }
  else 
  {
    digitalWrite(led,LOW);
  }
}
