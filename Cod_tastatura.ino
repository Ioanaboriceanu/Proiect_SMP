
int s1=2;
int s2=3;
int s3=4;
int s4=5;
int s5=6;
int s6=7;
int s7=8;

void setup(){
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(s3,INPUT);
  pinMode(s4,INPUT);
  pinMode(s5,INPUT);
  pinMode(s6,INPUT);
  pinMode(s7,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int i=digitalRead(s1);  //switch 1
  int j=digitalRead(s2);  //switch 2
  int k=digitalRead(s3);  //switch 3
  int l=digitalRead(s4);  //switch 4
  int m=digitalRead(s5);  //switch 5
  int n=digitalRead(s6);  //switch 6
  int o=digitalRead(s7);  //slide switch

  if (o==LOW)
  {
    if(i==HIGH&&j==LOW&&k==LOW&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("A");
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("B");
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("C");
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("D");
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("E");
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("F");
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("G");
    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("H");
    }
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("I");

    }
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("J");

    }
    else
    if(i==HIGH&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("K");

    }
    else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("L");

    }
    else
    if(i==HIGH&&j==LOW&&k==HIGH&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("M");

    }
    else
    if(i==HIGH&&j==LOW&&k==HIGH&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("N");

    }
    else
    if(i==HIGH&&j==LOW&&k==HIGH&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("O");
 
    }
    else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("P");

    }
    else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("Q");

    }
    else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("R");
   
    }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("S");

    }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("T");
  
    }
    else
    if(i==HIGH&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==HIGH)
    {
      Serial.print("U");

    }
    else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==LOW&&m==LOW&&n==HIGH)
    {
      Serial.print("V");

    }
      else
      if(i==LOW&&j==HIGH&&k==LOW&&l==HIGH&&m==HIGH&&n==HIGH)
      {
        Serial.print("W");

      }
      else
      if(i==HIGH&&j==LOW&&k==HIGH&&l==HIGH&&m==LOW&&n==HIGH)
      {
        Serial.print("X");

      }
      else
      if(i==HIGH&&j==LOW&&k==HIGH&&l==HIGH&&m==HIGH&&n==HIGH)
      {
        Serial.print("Y");
  
      }
      else
      if(i==HIGH&&j==LOW&&k==HIGH&&l==LOW&&m==HIGH&&n==HIGH)
      {
        Serial.print("Z");

      }
     
       else
    if(i==LOW&&j==LOW&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print(" ");
 
    }
    else
    if(i==LOW&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.println();

    }
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==LOW&&m==LOW&&n==LOW) 
    {
      Serial.print(",");

    }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print(";");

    }
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print(":");

    } 
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==LOW&&m==HIGH&&n==HIGH)
    {
      Serial.print(".");


    }
     else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==HIGH&&m==HIGH&&n==HIGH)
    {
      Serial.print("for");

    }
     else
    if(i==LOW&&j==LOW&&k==HIGH&&l==HIGH&&m==LOW&&n==HIGH)
    {
      Serial.print("ing");

    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==HIGH&&m==LOW&&n==HIGH)
    {
      Serial.print("ed");

    }
    else
    if(i==HIGH&&j==HIGH&&k==HIGH&&l==HIGH&&m==LOW&&n==HIGH)
    {
      Serial.print("and");
 
    }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==HIGH&&m==HIGH&&n==HIGH)
    {
      Serial.print("with");

    }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==HIGH&&m==LOW&&n==HIGH)
    {
      Serial.print("the");

    }
    else
    if(i==LOW&&j==LOW&&k==HIGH&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("in");

      }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==LOW&&m==LOW&&n==HIGH)
    {
      Serial.print("?");

    }
    else
    if(i==LOW&&j==HIGH&&k==HIGH&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("!");

    }
    else
    if(i==LOW&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("'");

    }
    else
    if(i==LOW&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==HIGH)
    {
      Serial.print("-");

    }
  }
  else if (o==HIGH)
  {
    if(i==LOW&&j==HIGH&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
     {
      Serial.print("0");

    }
   else
   if(i==HIGH&&j==LOW&&k==LOW&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("1");

    }
    else
      if(i==HIGH&&j==HIGH&&k==LOW&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.print("2");

    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("3");
  
    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("4");

    }
    else
    if(i==HIGH&&j==LOW&&k==LOW&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("5");

    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("6");

    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==HIGH&&m==HIGH&&n==LOW)
    {
      Serial.print("7");

    }
    else
    if(i==HIGH&&j==HIGH&&k==LOW&&l==LOW&&m==HIGH&&n==LOW)
    {
      Serial.print("8");

    }
    else
    if(i==LOW&&j==HIGH&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print("9");
  
    }
    else
      if(i==LOW&&j==LOW&&k==LOW&&l==HIGH&&m==LOW&&n==LOW)
    {
      Serial.print(" ");
 
    }
    else
    if(i==LOW&&j==LOW&&k==HIGH&&l==LOW&&m==LOW&&n==LOW)
    {
      Serial.println();
   
    }
  }
  delay(250);
}
