#include <SoftwareSerial.h> 
#include <Servo.h>

Servo myservo;

int bluetoothTx = 10;

int bluetoothRx = 11;

SoftwareSerial bluetooth (bluetoothTx, bluetoothRx);
int led1Pin = 2;
int led2Pin = 3;
int led3Pin = 4;

int siviseviyePin = A0;
int siviseviyesi;

void setup()
{
myservo.attach (9);

Serial.begin(9600); bluetooth.begin(9600);
}
String mesaj = "";


 
{ pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(siviseviyePin, INPUT);
  Serial.begin(9600);



}
void loop()
{
mesaj = "";

while (!bluetooth.available());

delay (50);

while (bluetooth.available())  mesaj += char (bluetooth.read());

int servopos = mesaj.toInt();

Serial.println (servopos);

myservo.write (servopos);

  siviseviyesi = analogRead(siviseviyePin);
  Serial.print("Sıvı Seviyesi: ");
  Serial.println(siviseviyesi);

  if(siviseviyesi == 0)
  {
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2Pin, LOW);
    digitalWrite(led3Pin, LOW);
  }
  if(siviseviyesi > 0 and siviseviyesi <= 250)
  {
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, LOW);
    digitalWrite(led3Pin, LOW);
  }
  if(siviseviyesi > 250 and siviseviyesi <= 350)
  {
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, HIGH);
    digitalWrite(led3Pin, LOW);
  }
  if(siviseviyesi > 350)
  {
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, HIGH);
    digitalWrite(led3Pin, HIGH);
  }

  delay(100);
}
}
