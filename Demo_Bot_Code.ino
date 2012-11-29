//***************************DEMO***BOT***CODE*******************************
//******************COPYRIGHT 2012, MICHAEL GILLILAND************************

#include <Servo.h>

Servo leftServo;  // create servo object for left servo
Servo rightServo; //create servo object for right servo

int pos = 0;    // variable to store the servo position 
int spead =127;//define the spead of motor
 
void setup()
{
  leftServo.attach(A0);  // attaches the servo on pin A0 to the servo object 
  rightServo.attach(A1); //attaches servo on pin A1 to the servo object
} 

void loop()
{
  leftServo.write(0); 
  rightServo.write(180);
  delay(3000);
  leftServo.write(180); 
  rightServo.write(0);
  delay(3000);
  leftServo.write(0); 
  rightServo.write(0);
  delay(3000);
  leftServo.write(180); 
  rightServo.write(180);
}