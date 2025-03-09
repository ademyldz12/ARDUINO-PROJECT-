void setup() {
  Serial.begin(9600);

}

void loop() {
  int LDRDeger=analogRead(A0);
  Serial.print("ışık şiddeti:");
  Serial.println(LDRDeger);

} 
