#include <NewPing.h>
NewPing sonar(10, 11, 400);


void setup() {
  Serial.begin(9600);
  delay(50);
  
}

void loop() {
  float distance = sonar.ping_cm();
  if(distance < 30) {
    digitalWrite(3,HIGH);
  }
  else{
    digitalWrite(3,LOW);
  }
}
