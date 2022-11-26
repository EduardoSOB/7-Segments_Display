
#include "edu.h"
#include "Arduino.h"

Display::Display()
{
for(int i = 0;i<7;i++)
{
pinMode(pins[i],OUTPUT);  
}  
}

void Display::up (void)
{
 y = 0;
  for(int x = 0;x<10;x++)
  {
   
  for(int i = 0;i<7;i++)
{
digitalWrite(pins[i],vetor[y][i]) ;
}  
 y++;
  delay(1000);
  
 for (int i = 0;i<7;i++){
 digitalWrite(pins[i],HIGH) ;
 }
  
  }}

  void Display::down (void)
{
 y = 9;
  for(int x = 10;x > -1;x--)
  {
   
  for(int i = 7;i > -1;i--)
{
digitalWrite(pins[i],vetor[y][i]) ;
}  
 y--;
  delay(1000);
  
 for (int i = 0;i<7;i++){
 digitalWrite(pins[i],HIGH) ;
 }
  
  }}

  
