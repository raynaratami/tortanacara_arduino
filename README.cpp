const int bd = 2;
const int be = 7;
const int ledd = 3;
const int lede = 6;
const int buzzer = 11;
const int r = 4;
const int g = 8;
const int b = 5;
int tempo=3000;
int a;

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(ledd, OUTPUT);
  pinMode(lede, OUTPUT);
  pinMode(bd, INPUT_PULLUP);
  pinMode(be, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);  
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(bd) == LOW)  
  {
    digitalWrite(lede,HIGH);    
    digitalWrite(buzzer,HIGH);
    delay(800);
    digitalWrite(buzzer,LOW);   
    //
    for(a=0;a<=50;a++)
    {
      digitalWrite(r,HIGH);
      digitalWrite(b,LOW);
      delay(50);
      digitalWrite(b,HIGH);
      digitalWrite(r,LOW);
      delay(50);
    }
    //
    delay(tempo); 
    digitalWrite(ledd,LOW);
    digitalWrite(lede,LOW);
  }else if (digitalRead(be) == LOW)
    {
      digitalWrite(ledd,HIGH);
      digitalWrite(buzzer,HIGH);
      delay(800);
      digitalWrite(buzzer,LOW);
      //
      for(a=0;a<=50;a++)
      {
        digitalWrite(r,HIGH);
        digitalWrite(b,LOW);
        delay(50);
        digitalWrite(b,HIGH);
        digitalWrite(r,LOW);
        delay(50);
      }
      //

      delay(tempo);
      digitalWrite(lede,LOW);
      digitalWrite(ledd,LOW);
    }
}
