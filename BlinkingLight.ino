// myPins is an array of pin numbers
int myPins[] = {0, 4, 7, 10, 13};

// The amount of time that the LEDs will delay turning on and off
int delayTime = 700;

void setup()
{
 // Need to set the pin modes to OUTPUT
 // If you don't do this, the lights will show up as dim
 
   setPinModeAll();
   
}


void loop()
{
 
  pinsOn(true);
  
  delay(delayTime);

  pinsOn(false);

  delay(delayTime);

  
}


void setPinModeAll()
{
  for(int i = 0; i < 5; i++)
  {
    
     pinMode(myPins[i], OUTPUT);
 
  }
  
}


void pinsOn(bool mode)
{
  for(int i = 0; i < 5; i++)
  {
    // Format is:  digitalWrite( Pin Number , HIGH or LOW )
    // HIGH turns the LED on
    // LOW turns the LED off
    
     digitalWrite(myPins[i], mode); 
     
  }
}



