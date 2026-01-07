/*6.3*/
//https://app.cirkitdesigner.com/project/2f1befdf-34f9-476d-80cc-3caf4b19a97d

#define motorR1_Pin 2 // in4 to d2
#define motorR2_Pin 3 // in4 to d3
#define EN_B_Pin    5 // ENB D5 <== PWM

void setup() {
  Serial.begin(9600);
  pinMode(motorR1_Pin,OUTPUT);  
  pinMode(motorR2_Pin,OUTPUT); 
  pinMode(EN_B_Pin,OUTPUT);

  digitalWrite(motorR1_Pin,0); // logic0
  digitalWrite(motorR2_Pin,0); // logic0

}

void loop() {
 // motor R , turn off , 
 /*  IN3      IN4      ENB
      1        0        0  */
  analogWrite(EN_B_Pin,125); //0-255
  digitalWrite(motorR1_Pin,1); // IN4 to 1
  digitalWrite(motorR2_Pin,0); // In3 to 0
  delay(5000);
}
