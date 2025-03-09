int motor1=3,motor2=5;
void setup()
{
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
}

void loop()
{
  while(analogRead(A0)<=500);
  {
    digitalWrite(motor1,HIGH);
    digitalWrite(motor2,LOW); 
  }
  while(analogRead(A0)>500);
  {
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,HIGH);
  }
}
