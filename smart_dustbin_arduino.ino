#include <Servo.h>

const int trigPin = 9;    
const int echoPin = 10;   
const int servoPin = 6;   
const int greenLedPin = 7;
const int redLedPin = 8;  

long duration;
int distance;
Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  
  myServo.attach(servoPin);
  myServo.write(0); 
  
  digitalWrite(redLedPin, HIGH); 
  digitalWrite(greenLedPin, LOW);
  
  Serial.begin(9600); 
}

void loop() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  
  duration = pulseIn(echoPin, HIGH);
  
  
  distance = duration * 0.034 / 2;
  
  
  Serial.print("Distance: ");
  Serial.println(distance);
  
  
  if (distance <= 30) {
    
    myServo.write(90); 
    digitalWrite(greenLedPin, HIGH); 
    digitalWrite(redLedPin, LOW);    
    delay(2000); 
      } else {
    
    myServo.write(0); 
    digitalWrite(greenLedPin, LOW);  
    digitalWrite(redLedPin, HIGH);   
  }
  
  delay(100); 
}
