#include <Stepper.h>  /*Stepper Motor Library*/



//defines how many steps there is per revolution. 
//1.8deg per step
//increase by 200^n to increase resolution
//400/800/1600
const int stepsPerRevolution = 200;


//initializes pins 8-11 on arduino
Stepper myStepper(stepsPerRevolution, 8, 9,10, 11);

void setup()
{
  //set speed at 60rpm
  myStepper.setSpeed(60);
  //Initializes serial monitor
  Serial.begin(9600);
}

void loop()
{
  //one revolution in clockwise and prints on monitor then delay for half a second
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);
  
  
  //one revolution in CCW and prints on monitor then delay for half a second
  Serial.Println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}
