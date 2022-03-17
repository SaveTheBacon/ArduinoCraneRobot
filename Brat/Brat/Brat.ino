#include <Braccio.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo gripper;
Servo wrist_ver;

int base_angle = 10;
int shoulder_angle = 90;
int elbow_angle = 45;
int wrist_ver_angle = 180;
int wrist_rot_angle = 90;
int gripper_angle = 73;


void close_claw(){

  gripper_angle = 73;
  move_bracio();
  
}


void open_claw(){

  gripper_angle = 10;
  move_bracio();

}

void move_bracio(){
  Braccio.ServoMovement(10, base_angle, shoulder_angle, elbow_angle, wrist_ver_angle, wrist_rot_angle, gripper_angle);
}

void increase_shoulder_angle(){ 
  if (shoulder_angle < 165){
    shoulder_angle++;
  }
  else{
    Serial.write("Increase impossible");
  }
}

void decrease_shoulder_angle(){
  if (shoulder_angle > 15){
    shoulder_angle--;
  }
  else{
    Serial.write("Decrease impossible");
  }
}

void increase_elbow_angle(){
  if (elbow_angle < 180){
    elbow_angle++;
  }
  else{
    Serial.write("Increase impossible");
  }
}

void decrease_elbow_angle(){
  if (elbow_angle > 0){
    elbow_angle--;
  }
  else{
    Serial.write("Decrease impossible");
  }
}

void increase_wrist_angle(){
  if (wrist_ver_angle < 180){
    wrist_ver_angle++;
  }
  else{
    Serial.write("Increase impossible");
  }
}

void decrease_wrist_angle(){
  if (wrist_ver_angle > 0){
    wrist_ver_angle--;
  }
  else{
    Serial.write("Decrease impossible");
  }
}

void setup() {
  pinMode(12, OUTPUT);
  digitalWrite(12, HIGH);

  Braccio.begin();

  Serial.begin(9600);

}

void loop() {


  delay(1000);


   delay(1000);

}
