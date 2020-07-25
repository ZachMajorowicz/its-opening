#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int x = 0;    // variable to store the servo position
int y = 12;
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  while (y==12){
  while (x==0){
    for (x = 0; x <= 80; x += 1) { // goes from 0 degrees to 80 degrees
    // in steps of 1 degree
    myservo.write(x);              // tell servo to go to position in variable 'pos'
    delay(25);}                       // waits 25ms for the servo to reach the position
    x++;
  }
  x=80;
    delay(1800000);            // Waits for half an hour before closing
   while (x==80){
    for (x = 80; x >= 0; x -= 1) { // goes from 80 degrees to 0 degrees
    // in steps of 1 degree
    myservo.write(x);              // tell servo to go to position in variable 'pos'
    delay(25);}                      // waits 25ms for the servo to reach the position
    x++;
  }
  y+=3;
  }
    }
