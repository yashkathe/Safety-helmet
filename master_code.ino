#include<SoftwareSerial.h>
int ir = 2;
int alco = 8;
int buttonState=0,alcohol=0;
void setup() {
  Serial.begin(38400);
  pinMode(ir, INPUT);
  pinMode(alco, INPUT);
}

void loop() {
  int buttonState = digitalRead(ir);
  int alcohol=digitalRead(alco);
if(buttonState==1 && alcohol==0)
  {
   char s=' ';
    Serial.println("y");
    Serial.println(alcohol);
    s=' ';
  }
else if (buttonState==0 && alcohol==0)
  {
    char s=' ';
    Serial.println("n");
    Serial.println(alcohol);
    s=' ';
    }
   
else if (buttonState==1 && alcohol==1)
  {
    char s=' ';
    Serial.println("k");
    Serial.println(alcohol);
    s=' ';
    }
    delay(1000);
}
