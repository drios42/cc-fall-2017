#include <Servo.h>

Servo myservo;

boolean forward = false;

int angle = 90;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {
int pot = analogRead(A0);


 angle = random(0,179);
 delay(300);
  myservo.write(angle);

  Serial.println(angle);

}
