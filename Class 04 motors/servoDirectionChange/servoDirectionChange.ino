//include servo library
#include <Servo.h>

//create servo object, named "myservo"
Servo myservo;

// boolean to check if i should move forward or not
boolean forward = false;

//starting motor angle at 90 degrees
int angle = 90;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {
  if (angle <= 0) {
    forward = true;
  }

  if (angle >= 179) {
    forward = false;
  }

  if (forward == false) {
    angle = angle - 1;
  }

  if (forward == true) {
    angle = angle + 1;
  }
  myservo.write(angle);
  Serial.println(angle);

}
