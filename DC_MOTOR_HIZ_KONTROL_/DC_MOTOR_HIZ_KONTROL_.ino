int pot = A0; //A pinini pot(potansiyometre) değişkenine atadık.
int motor = 6; //6.pini motor değişkenine atadık.
int potDeger; //İnteger cinsinden potDeger değişkeni oluşturduk.
 void setup() {
  pinMode(A0, INPUT); //A0 pinini girş olarak belirledik.
  pinMode(6, OUTPUT); //6.pini çıkış olarak belirledik.
}

void loop() {
  potDeger = analogRead(pot); //pot pinini okuyup değerini potDeger değişkenine atadık.
  analogWrite(motor, map(potDeger, 0, 1023, 0, 255)); // bizim analog bir pinden alacağımız değer 0-1023 arasındadır burda ki map komutu ile bu değerimizi 0-255 arasına indirdik.
}
