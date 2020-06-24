//Keyboard 音调键盘

  
void setup()
{
  pinMode(8, OUTPUT); //用于给喇叭传输数据
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT); //三个引脚都接收按纽的信号
}

void loop()
{
  
  if (digitalRead(A0) == HIGH)//如果按下按键1，A0就会变成高电平，以电平变化作为按键信号的依据，下两个同理    
  {
    tone(8, 440, 100); // 通过8引脚向喇叭传入音调的数据，喇叭发出声音，下同 play tone  57 (A4频率= 440 Hz)
  }
  if (digitalRead(A1) == HIGH)//如果按下按键2
  {
    tone(8, 494, 100); // play tone 59 (B4频率= 494 Hz)
  }
  if (digitalRead(A2) == HIGH) //如果按下按键3
  {
    tone(8, 523, 100); // play tone 60 (C5频率 = 523 Hz)
  }
  //按下这三个按钮，实现A4 B4 C5
  delay(10); // 适当延迟，使效果真实
}