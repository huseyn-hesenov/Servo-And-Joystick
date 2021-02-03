#include<Servo.h>
//create object
Servo servo;
int deyer;
int derece;
void setup() {
  //declare servo pin
servo.attach(9);
}
void loop() {
  //read analog value
 deyer=analogRead(A0);//connected joystick to A0 PIN
 //according value
derece=map(deyer,0,1023,0,180);
servo.write(derece);

}
