//include servo library
#include <Servo.h>

//create servo object, named "myservo"
Servo myservo;

//variable for determining the servo's position
int angle;

void setup() {
  Serial.begin(9600);
  //tell arduino where the servo is connected
  myservo.attach(9);
}

void loop() {
  // read the potentiometer
  int pot = analogRead(A0);

  // map the potentiometer range to the range of the servo and save that value in the angle variable
  angle = map(pot,0,1023,0,179);

  //write the servo to the mapped position
  myservo.write(angle);

  Serial.println(angle);

}
