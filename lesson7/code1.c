#include <MsTimer2.h> 
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
#define LT 6
#define BT 7
#define LO 8
int num=0;

void onTimer()
{
  if(num<9)
    num++;
  else
    num=0;
}
  
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  digitalWrite(LO,LOW);
  
  MsTimer2::set(1000, onTimer);
  MsTimer2::start();  
  
}

void loop()
{
  digitalWrite(2,num&0x1);
  digitalWrite(3,(num>>1)&0x1);
  digitalWrite(4,(num>>2)&0x1);
  digitalWrite(5,(num>>3)&0x1);
}