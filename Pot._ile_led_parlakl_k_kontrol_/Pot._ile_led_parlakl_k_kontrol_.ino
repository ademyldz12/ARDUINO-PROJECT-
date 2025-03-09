const int analogGiris=A0;

void setup()
{
  pinMode(analogGiris, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int deger=analogRead(analogGiris);
  Serial.println("deger:");
  Serial.println(deger);
  delay(100);
  int ledDeger=map(deger,0,1023,0,255);
  analogWrite(9, ledDeger);
  
}
