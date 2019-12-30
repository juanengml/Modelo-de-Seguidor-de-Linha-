
#include <AFMotor.h>

AF_DCMotor motor_1(1);
AF_DCMotor motor_2(2);
AF_DCMotor motor_3(3);
AF_DCMotor motor_4(4);

char cmd;

void setup() {
  Serial.begin(9600);          
  Serial.println("Motor test!");

  motor_1.setSpeed(220);
  motor_2.setSpeed(220);
  motor_3.setSpeed(220);
  motor_4.setSpeed(220);
 
  motor_1.run(RELEASE);
  motor_2.run(RELEASE);
  motor_3.run(RELEASE);
  motor_4.run(RELEASE);
}

void loop() {

  // motor.run(FORWARD); 
  // motor.run(BACKWARD);
  // motor.run(RELEASE);
  cmd = Serial.read();
  switch(cmd){
    case 'd':
     motor_1.run(BACKWARD); 
     motor_4.run(FORWARD); 
     motor_3.run(BACKWARD);
     motor_2.run(FORWARD);
     Serial.println('d');
    break;
    case 'a':
     motor_1.run(FORWARD); 
     motor_4.run(BACKWARD); 
     motor_3.run(FORWARD);
     motor_2.run(BACKWARD);
     Serial.println('a');
    break;
    
    case 'w':
     motor_1.run(BACKWARD); 
     motor_4.run(FORWARD); 
     motor_2.run(BACKWARD); 
     motor_3.run(FORWARD); 
     Serial.println('w');
        
    break;
    
    case 's':
     motor_1.run(FORWARD); 
     motor_2.run(FORWARD); 
     motor_3.run(BACKWARD);
     motor_4.run(BACKWARD);
     Serial.println('s');
     
    break;
    case 'p':
     motor_1.run(RELEASE); 
     motor_4.run(RELEASE); 
     motor_3.run(RELEASE);
     motor_2.run(RELEASE);
     Serial.println('p');
     
    break;
    case '1':
     motor_1.run(BACKWARD); 
     motor_4.run(FORWARD); 
     
    break;
    case '2':
     motor_2.run(BACKWARD); 
     motor_3.run(FORWARD); 
     
    break;
    case '3':
     motor_1.run(FORWARD); 
     motor_4.run(BACKWARD); 
     
    break;
    case '4':
     motor_2.run(FORWARD); 
     motor_3.run(BACKWARD); 
     
    break;
    

    
  }   
  
}
