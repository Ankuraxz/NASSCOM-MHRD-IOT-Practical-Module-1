int n=0;
int m;
int x=0;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  m=10;
  for(n=12;n>=7;n--)
  {
    digitalWrite(n,HIGH);
    x=n-m;
    digitalWrite(x,HIGH);
    delay(500);
    m=m-2;
  }
  delay(500);
  m=0;
  for(n=7;n<13;n++)
  {
    digitalWrite(n,LOW);
    x=n-m;
    digitalWrite(x,LOW);
    delay(100);
    m=m+2;
  }
  delay(1000);
}
