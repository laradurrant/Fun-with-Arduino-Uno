// myPins is an array of pin numbers
int myPins[] = {0, 4, 7, 10, 13};

// The amount of time that the LEDs will delay turning on and off
int delayTime = 500;

void setup()
{
 // Need to set the pin modes to OUTPUT
 // If you don't do this, the lights will show up as dim
 
   setPinModeAll();
   
}


void loop()
{
 // Pins on accepts the following three boolean parameters
 // bool isOn, bool isDelayed, bool isDelayedAfter
 // See description below for more information
 
  pinsOn(true, true, true);
  
 // delay(delayTime);

  pinsOn(false, true, true);

//  delay(delayTime);

  
}

// The function setPinModeAll() sets the pin mode of all LEDs in the array myPins
void setPinModeAll()
{
  for(int i = 0; i < 5; i++)
  {
    
     pinMode(myPins[i], OUTPUT);
 
  }
  
}

// The function pinsOn() accepts two boolean parameters isOn and isDelayed
// When isOn is true, the pins will turn on
// When isOn is false, the pins will turn off

// Currently there are two ways to delay the LED pins
// One way is to delay the lights DURING the loop
// This will result in a delay between each pin becoming activated
// The other way is to delay the lights AFTER the loop

// The state of isDelayed will determine if the pin delay is turned on
// If false, there will be no delay and pins will light up immediately after each other
// This will result in a synchrornized on or off pattern


void pinsOn(bool isOn, bool isDelayed, bool isDelayedAfter)
{
  for(int i = 0; i < 5; i++)
  {
    // Format is:  digitalWrite( Pin Number , HIGH or LOW )
    
    // HIGH turns the LED on
    // LOW turns the LED off
    
     digitalWrite(myPins[i], isOn); 

     if(isDelayed)
     {
           delay(delayTime);
     }
        
  }

  if(isDelayedAfter)
  {
    delay(delayTime);
  }
}



