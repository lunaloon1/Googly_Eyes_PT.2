onst int ledPin = 11; 
const int servoPin1 = 4; 
const int buttonAPin = 13; 
int buttonAState = 0; 
int lastButtonAState = 0; 
bool A = false; 

#include <Servo.h> 
Servo myservo; 
const int buttonAPin = 13; 

void setup() {
  myservo.attach(4)
  pinMode(buttonPin, INPUT);
}

void loop (){
  if (digitalRead(buttonPin) == HIGH){
    myservo.attach(4);
    pinMode(buttonPin, INPUT);
  }
}
 
 if (buttonState != lastButtonState) {
    if (buttonState == High) {
      servo = !servo; 
    }
  }


}

void loop() {
  buttonState = digitalRead(buttonPin);

}
