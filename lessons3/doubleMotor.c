char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.println("ok!");
}

/*
预定
'f':表示前进
'b':表示后退
'r':表示右转
'l':表示左转
's':表示停止
*/
void front()
{
  	digitalWrite(6,HIGH);
  	digitalWrite(7,LOW);
  	digitalWrite(8,HIGH);
  	digitalWrite(9,LOW);
}
void back()
{
 	digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
}
void right()
{
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
}
void left()
{
 	digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
}
void stop()
{
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
}                        //控制指令的五个函数
void loop()
{
  if(Serial.available()>0)
  {
  	ch=Serial.read();
    switch(ch)
    {
    case 'f':
       front();
       break;
    case 'b':
       back();
       break;
    case 'r':
	   right();
       break;
    case 'l':
       left();
       break;
    case 's':
       stop();
       break;
    default:
       break;
    }
  }
}