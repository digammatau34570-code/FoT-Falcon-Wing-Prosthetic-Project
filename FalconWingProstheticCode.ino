/*
 * Team: Shawn Hettiarachchi, Shrika Pilli, Sifali Maskey
 * Date Modified: 11/24/2026
 */

#include <Servo.h>

Servo myServo;

const int servoPin = 9;

const int buttonPin = 2;

const int myowarePin = A0;

int angle = 0;

int rotationSpeed = 15;

int stepDelay= 2;

int buttonReading = HIGH;


void setup() {
  
  myServo.attach(servoPin);

  pinMode(buttonPin, INPUT);

  Serial.begin(115200);
 
}

void loop() {

  buttonReading= digitalRead(buttonPin);
  
  if (buttonReading == LOW) {

    angle++;

    delay(200);

    if (angle % 2 == 0){
        
      for (int pos = 0; pos <= 180; pos++) {
          
        myServo.write(pos);
          
        delay(stepDelay);
          
      }
    
    }
  
    else if (angle % 2 == 1) {
        
      for (int pos = 0; pos <= 180; pos++) {
          
        myServo.write(180 - pos);
          
        delay(stepDelay);
          
      }
    
    }

    else {
        
      delay(50);
        
    }
      
    delay(200);
  
  }

}


