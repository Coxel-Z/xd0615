#include <EEPROM.h>
int i=0;
void setup()
{
  for(i=0;i-8;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i-8;i++)
  {
   digitalWrite(i, HIGH);
   delay(100); // Wait for 1000 millisecond(s)
   digitalWrite(i, LOW);
   delay(100); // Wait for 1000 millisecond(s)
  }
}