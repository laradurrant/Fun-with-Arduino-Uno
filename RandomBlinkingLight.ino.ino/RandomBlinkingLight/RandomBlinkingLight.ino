// myPins is an array of pin numbers
int myPins[] = {0, 4, 7, 10, 13};
int previousInt = 0;


// The amount of time that the LEDs will delay turning on and off
int delayTime = 400;

void setup()
{
  // Need to set the pin modes to OUTPUT
  // If you don't do this, the lights will show up as dim

  setPinModeAll();

}


void loop()
{
  // randomPin accepts one boolean parameter: isPinOn
  // isPinOn is the first parameter and will determine if the pin is on or off


  randomPin(true);

  randomPin(false);


}

// The function setPinModeAll() sets the pin mode of all LEDs in the array myPins
void setPinModeAll()
{
  for (int i = 0; i < 5; i++)
  {

    pinMode(myPins[i], OUTPUT);

  }
}

// This function turns on a random LED
void randomPin(bool isPinOn)
{
  // Generates a random integer between 0 and 5



  if (isPinOn)
  {
    digitalWrite(myPins[randomInt()], isPinOn);
    delay(delayTime);

  }
  else
  {
    for (int i = 0; i < 5; i++)
    {
      digitalWrite(myPins[i], isPinOn);
    }

    delay(delayTime);
  }
}

int randomInt()
{
  int currentInt = random(0, 5);

  do
  {
    currentInt = random(0, 5);

  } while (currentInt == previousInt);

  previousInt = currentInt;

  return currentInt;
}


