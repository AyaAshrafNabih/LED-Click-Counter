// C++ code
//
int red = 4;
int yellow = 6;
int green = 8;
int button = 2;
int counter = 0;

void setup()
{
  pinMode( red , OUTPUT);
  pinMode( yellow , OUTPUT);
  pinMode( green , OUTPUT);
  pinMode( button , INPUT);
}

void loop()
{
  int Reading = digitalRead(button);
  if (Reading == 1)
  {
    counter++;
    if (counter == 1)
    {
      digitalWrite(red , HIGH);
    }
    else if (counter == 2)
    {
      digitalWrite( yellow , HIGH);
    }
      
      else if (counter == 3)
      {
       digitalWrite( green , HIGH); 
      }
      else{ for ( int i=2 ; i <=8 ; i+=2)
      {
        digitalWrite( i , LOW);
      }
      counter = 0;
    }
    delay(250);

  }
   
   
}