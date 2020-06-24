#include <MsTimer2.h> 
#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6
#define LT 7
#define BT 8
#define LO 9
int num=0;
int pinInterrupt=2;
void onTimer()
{
  if(num<9)
    num++;
  else
    num=0;
}
void ITR()
{
  if ( digitalRead(pinInterrupt) == LOW )
  num=-1;
}
  
void setup()
{
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  digitalWrite(LO,LOW);
  
  MsTimer2::set(1000, onTimer);
  MsTimer2::start();  
  attachInterrupt(digitalPinToInterrupt(pinInterrupt),ITR,CHANGE);
  
}

void loop()
{
  digitalWrite(3,num&0x1);
  digitalWrite(4,(num>>1)&0x1);
  digitalWrite(5,(num>>2)&0x1);
  digitalWrite(6,(num>>3)&0x1);
  delay(1000);
}