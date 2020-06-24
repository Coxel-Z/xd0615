//智障播放器，按下开关，循环播放小星星，重新打开开关时，从头开始
  
void setup()
{
  pinMode(8, OUTPUT); //用于给喇叭传输数据
  pinMode(A0, INPUT); //引脚都接收按纽的信号
    
}



int i=0;//数列循环
int a=261,b=293,c=329,d=349,e=392,f=440,g=493;//将音1234567对应的频率赋给变量
  int t[42]={a,a,e,e,f,f,e,
             d,d,c,c,b,b,a,
             e,e,d,d,c,c,b,
             e,e,d,d,c,c,b,
             a,a,e,e,f,f,e,
             d,d,c,c,b,b,a};//简化乐谱



  void loop()
{
   if (digitalRead(A0) == HIGH)//如果按下按键1，相连接的A0的线A0就会变成高电平    
    {
      tone(8, t[i], 1000); // 向喇叭传入音调的数据，喇叭发出声音，下同play tone  57 (A4频率= 440 Hz)
      i++;
    }
   else
     i=0;//开关关闭再打开，循环重新开始
    delay(500);
    noTone(8);
    if (i%7==0)
      delay(800);//每段完空出一个音
    else
      delay(300);// 适当延迟，使效果真实
    if (i==42)
      i=0;//循环结束后，自动重新开始
  
}