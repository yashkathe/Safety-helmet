#include<SoftwareSerial.h>
void setup() {
  Serial.begin(38400);
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  pinMode(8,OUTPUT);
}

void loop() {
  char s=' ';
  if(Serial.available()>0)
  {
    s=Serial.read();
    Serial.println(s);
    if(s=='y')
    {
      digitalWrite(13,HIGH);
      digitalWrite(8,LOW);
    }
    if(s=='n')
    {
      digitalWrite(13,LOW);
      digitalWrite(8,LOW);
    }
    if (s=='k')
    {
      digitalWrite(13,LOW);
      digitalWrite(8,HIGH);
     
    }
    s=' ';
    delay(5);
  }
   
}  
