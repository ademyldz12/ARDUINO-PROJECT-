int data;
int led1=2;
int led2=3;
int led3=4;
void setup()
{
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
Serial.begin(9600); //Seri iletişimi başlatır
}
void loop()
{
if(Serial.available()>0) // Eğer Bluetooth bağlantısı varsa kodaları çalıştırır
{
delay(10);
data= Serial.read(); 
if(data=='1'){
digitalWrite(led1,HIGH);
}
if(data=='2'){
digitalWrite(led1,LOW);
}
if(data=='3'){
digitalWrite(led2,HIGH);
}
if(data=='4'){
digitalWrite(led2,LOW);
}
if(data=='5'){
digitalWrite(led3,HIGH);
}
if(data=='6'){
digitalWrite(led3,LOW);
}
Serial.println(data);
delay(100);
}


}
