 /*6.1*/
//https://app.cirkitdesigner.com/project/9588304b-d70c-4d1a-8fd0-6b1c12347bd5

#define motorPin 9

void setup() {
  // put your setup code here, to run once:
 pinMode(motorPin,OUTPUT);



}

void loop() {
  digitalWrite(motorPin,1);
  delay(2000);
  digitalWrite(motorPin,0);
  delay(2000);
}
