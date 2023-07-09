#include <Servo.h>

Servo servo1; 
const int servo1PotPin =A0;
const int servo1Pin = 3;
int servo1Value;



Servo servo2; 
const int servo2PotPin =A1;
const int servo2Pin = 5;
int servo2Value;



Servo servo3; 
const int servo3PotPin =A2;
const int servo3Pin = 6;
int servo3Value;



Servo servo4; 
const int servo4PotPin =A3;
const int servo4Pin = 9;
int servo4Value;



void setup() {
  
  servo1.attach(servo1Pin); 
  servo2.attach(servo2Pin);
  servo3.attach(servo3Pin);
  servo4.attach(servo4Pin);
   
}



void loop() {
  
  servo1Value = analogRead(servo1PotPin);
  servo1Value = map(servo1Value, 0, 1023, 0, 180);
  servo1.write(servo1Value);

  servo2Value = analogRead(servo2PotPin); 
  servo2Value = map(servo2Value, 0, 1023, 50, 180);
  servo2.write(servo2Value);

  servo3Value = analogRead(servo3PotPin); 
  servo3Value = map(servo3Value, 0, 1023, 0, 180);
  servo3.write(servo3Value);

  servo4Value = analogRead(servo4PotPin); 
  servo4Value = map(servo4Value, 0, 1023, 95, 150);
  servo4.write(servo4Value);
  
  delay(15);
 
}
