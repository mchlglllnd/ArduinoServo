#include <Servo.h>

Servo leftServo;  // create servo object for left servo
Servo rightServo; //create servo object for right servo

int pos = 0;    // variable to store the servo position 
 
void setup()
{
  leftServo.attach(A0);  // attaches the servo on pin A0 to the servo object 
  rightServo.attach(A1); //attaches servo on pin A1 to the servo object
} 