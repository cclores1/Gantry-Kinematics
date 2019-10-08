#include <Stepper.h>  /*Stepper Motor Library*/



//defines how many steps there is per revolution. 
//1.8deg per step
//increase by 200^n to increase resolution
//400/800/1600
const int stepsPerRevolution = 400;


//initializes pins 8-11 on arduino
Stepper Step1(stepsPerRevolution, 8, 9,10, 11);
Stepper Step2(stepsPerRevolution, 2, 3,4, 5);


void setup()
{
  //set speed at 60rpm
  Step1.setSpeed(60);
  Step2.setSpeed(60);
  //Initializes serial monitor
  Serial.begin(9600);
}

void loop()
{
  //one revolution in clockwise and prints on monitor then delay for half a second
  Serial.println("clockwise");
  Step1.step(stepsPerRevolution);
  delay(100);
  Step1.step(stepsPerRevolution);
  delay(500);
  
  
  //one revolution in CCW and prints on monitor then delay for half a second
  Serial.Println("counterclockwise");
  Step1.step(-stepsPerRevolution);
  delay(100);
  Step2.step(-stepsPerRevolution);
  delay(500);
}
