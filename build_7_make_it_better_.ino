/*
  Button
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 13, when pressing a pushbutton attached to pin 7. 
 
 
 The circuit:
 * LED attached from pin 13 to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 
 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.
 
 
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 17 Jun 2009
 by Tom Igoe
 
  http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin1 = 1;     // the number of the pushbutton pin
const int buttonPin2 = 2;     
const int buttonPin3 = 3;     
const int buttonPin4 = 4;     
const int ledPinYellow = 13;      // the number of the LED pin
const int ledPinRed = 12;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPinYellow, OUTPUT);   
  pinMode(ledPinRed, OUTPUT);   
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);     
  pinMode(buttonPin2, INPUT); 
  pinMode(buttonPin3, INPUT); 
  pinMode(buttonPin4, INPUT); 
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin1);
  
/*
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == LOW) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
}
*/
int buttonState2 = digitalRead(buttonPin2);
int buttonState3 = digitalRead(buttonPin3);
int buttonState4 = digitalRead(buttonPin4); 

if (buttonState == HIGH) {   digitalWrite(ledPinYellow, LOW);
  if(buttonState2 == HIGH) {   digitalWrite(ledPinYellow, LOW);
    if(buttonState3 == HIGH) {    digitalWrite(ledPinYellow, LOW);
      if(buttonState4 == LOW){    digitalWrite(ledPinYellow, LOW);
            digitalWrite(ledPinYellow, HIGH);
          }
          else {
            digitalWrite(ledPinYellow, LOW);
          }
        }
      } 
    }
if (buttonState != HIGH) {     digitalWrite(ledPinRed, LOW);
  if(buttonState2 != HIGH) {     digitalWrite(ledPinRed, LOW);
    if(buttonState3 != HIGH) {      digitalWrite(ledPinRed, LOW);
      if(buttonState4 != HIGH){
            digitalWrite(ledPinRed, HIGH);
          }
          else {
            digitalWrite(ledPinRed, LOW);
          }
        }
      } 
    }
}
        






