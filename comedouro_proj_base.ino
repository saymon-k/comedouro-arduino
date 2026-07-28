//powered by kemi

#include<Servo.h>
Servo Myservo;

//botao em digital 2
//servo em digital 3
void setup()
{
  pinMode(2, INPUT_PULLUP);
  Myservo.attach(3);
}

void loop()
{
  if(digitalRead(2)==LOW){
    Myservo.write(180);
  }
  else
    
 Myservo.write(0);

}