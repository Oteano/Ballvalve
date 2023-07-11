#define IN1 8 
#define IN2 7
#define ENA1 A9
int delaytime=1000;

void setup() {
  pinMode(IN1,OUTPUT); // Sets pin 8 as an Output pin 
  pinMode(IN2,OUTPUT);// Sets pin 7 as an Output pin 
  pinMode(ENA1,OUTPUT);
  Serial.begin(9600);
  // sets the ball valve off 
digitalWrite(IN1,LOW);
digitalWrite(IN2,LOW);
analogWrite(ENA1,240);
}
void loop() {
  //opens the ball valve 
  analogWrite(ENA1,240);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  delay(delaytime);

  //closes the ball valve
  analogWrite(ENA1,240);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN1,LOW);
  delay(delaytime);


}
