#include <Servo.h>
#define TRIG_PIN 2
#define ECHO_PIN 3
#define MOTOR_PIN 4
#define MOTOR_PIN2 5

Servo servo;
Servo servo2;
int motor_speed = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(TRIG_PIN, OUTPUT); 
  pinMode(ECHO_PIN, INPUT);

  servo.attach(MOTOR_PIN);
  pinMode(MOTOR_PIN, OUTPUT);

  servo2.attach(MOTOR_PIN2);
  pinMode(MOTOR_PIN2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   int distance = 0;  
 
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10); 
  digitalWrite(TRIG_PIN, LOW); 
  distance = pulseIn(ECHO_PIN, HIGH)/58.2; /* 센치미터(cm) */
 
 
  int angle=0;
  int angle2=180; 
  if (distance <= 13) { 
    for(angle = 20; angle < 180; angle++) { 
      servo.write(angle); 
      servo2.write(angle2--);
      delay(7); 
    } 
    for(angle = 180; angle > 20; angle--) { 
      servo2.write(angle2++);
      servo.write(angle); 
      delay(7); 
    } 
  } 
  else {
    
    
  }
}
