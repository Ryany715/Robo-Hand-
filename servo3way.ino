//code created in my robotics club to move and control 3 servos at once.
//First time coding in C!
//The base of the cose was taken from an open source arduino library, but has been modified
//Ryan Yeung 11/14/17

#include <Servo.h> //loads servo library
Servo myservo1;  //creates 3 servo objects for each servo
Servo myservo2;
Servo myservo3;
int pos1 =0;    // intializes 3 positions for the servos, all starting at 0, this is representative of the degress of turn
int pos2=0;
int pos3=0;

void setup() {
  myservo1.attach(A1); // attaches the servos to the needed pins on the arduino. Be sure to attch them to the correct pins, or modify the pins I used 
  myservo2.attach(A2);
    myservo3.attach(A3); 
}

void loop() { //creates and starts our loop

  
  for (pos1 = 0; pos1 <= 120; pos1 += 1) { // for 1 to 120 by 1 degree increments 
    myservo1.write(pos1);              //makes the servo turn to the position variable pos
    delay(6);                       // waits 6ms before it roates another degree
  }
  for (pos1 = 120; pos1 >= 0; pos1 -= 1) { // goes from 120 to 0
    myservo1.write(pos1);              // same as loop before 
    delay(6);                      
  }
    ///////////////////////////

    
    for (pos2 = 0; pos2 <= 80; pos2 += 1) { // Does the same as the loops aboce, except with different angles. These next 2 loops are for servo 2
    // in steps of 1 degree
    myservo2.write(pos2);             
    delay(6);                       
  }

  for (pos2 = 80; pos2 >= 0; pos2 -= 1) { // make sure this uses negative to decrease the angle and make it turn back the other way 
    myservo2.write(pos2);              
    delay(6);
    //////////////////////////////

  }
    for (pos3 = 0; pos3 <= 50; pos3 += 1) {  // these loops are for servo 3
    // in steps of 1 degree
    myservo3.write(pos3);             
    delay(6);                       
  }
 
  for (pos3 = 50; pos3 >= 0; pos3 -= 1) { 
    myservo3.write(pos3);              
    delay(6);
  }
}

 


