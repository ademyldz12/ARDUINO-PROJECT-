// C++ code
//
void setup()
{
  pinMode(9, INPUT);
  pinMode(10, OUTPUT);
  
}

void loop()
{
  int deger=digitalRead(9);
  
  if(deger==HIGH)
  
    digitalWrite(10, HIGH);
   
  else
 
    digitalWrite(10,LOW);
 
}
