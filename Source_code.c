int forword=2;
int backword=3;
int rightTurn=4;
int leftTurn=5;
int Stop=10;
int rightMTR=6;
int IN1=7;
int leftMTR=8;
int IN2=9;
void setup() {
  // put your setup code here, to run once:
pinMode(forword,INPUT);
pinMode(backword,INPUT);
pinMode(rightTurn,INPUT);
pinMode(leftTurn,INPUT);
pinMode(Stop,INPUT);
pinMode(rightMTR,OUTPUT);
pinMode(IN1,OUTPUT);
pinMode(leftMTR,OUTPUT);
pinMode(IN2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(forword==1))
{
  //Forword
  digitalWrite(IN1,1);
  digitalWrite(rightMTR,0);
  digitalWrite(IN2,1);
  digitalWrite(leftMTR,0);
  
}
if(digitalRead(rightTurn==1))
{
  //Turn Right
  digitalWrite(IN1,0);
  digitalWrite(rightMTR,1);
  digitalWrite(IN2,1);
  digitalWrite(leftMTR,0);
}  

if(digitalRead(leftTurn==1))
{
  //Turn Left
  digitalWrite(IN1,1);
  digitalWrite(rightMTR,0);
  digitalWrite(IN2,0);
  digitalWrite(leftMTR,1);
  
}
if(digitalRead(backword==1))
{
  //Backword
  digitalWrite(IN1,0);
  digitalWrite(rightMTR,1);
  digitalWrite(IN2,0);
  digitalWrite(leftMTR,1);
  
}
if(digitalRead(Stop==1))
{
  //stop
  digitalWrite(IN1,0);
  digitalWrite(rightMTR,0);
  digitalWrite(IN2,0);
  digitalWrite(leftMTR,0);
}
}
