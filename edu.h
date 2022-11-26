#ifndef edu_h
#define edu_h

#include "Arduino.h"

class Display 
  {
    public:
    int pins[7]={5,6,7,8,9,10,11};
    int y = 0;
  
 int vetor[10][7] = 
    
 

 {{0,0,0,0,0,0,1}, 
  {1,0,0,1,1,1,1}, 
  {0,0,1,0,0,1,0}, 
  {0,0,0,0,1,1,0}, 
  {1,0,0,1,1,0,0}, 
  {0,1,0,0,1,0,0}, 
  {0,1,0,0,0,0,0}, 
  {0,0,0,1,1,1,1}, 
  {0,0,0,0,0,0,0},
  {0,0,0,0,1,0,0}};

  

  Display();
  void up();
  void down();

  };

  

#endif
