//***************************DEMO***BOT***CODE*******************************
//******************COPYRIGHT 2012, MICHAEL GILLILAND************************

#include <Servo.h>

Servo leftServo;  // create servo object for left servo
Servo rightServo; //create servo object for right servo

int pos = 0;    // variable to store the servo position 
 
void setup()
{
  leftServo.attach(A0);  // attaches the servo on pin A0 to the servo object 
  rightServo.attach(A1); //attaches servo on pin A1 to the servo object
} 

void loop()
{
  leftServo.write(0); //As a side note 0 and 180 are full speed in either direction for continuous rot. servos. 90 result in no movement
  rightServo.write(180);
  delay(3000); //There is a three second run time for each of these commands
  leftServo.write(180); 
  rightServo.write(0);
  delay(3000);
  leftServo.write(0); 
  rightServo.write(0);
  delay(3000);
  leftServo.write(180); 
  rightServo.write(180);
}