void setup() {
  pinMode(6,OUTPUT);

}

void loop() {
  for(int dutycycle = 0; dutycycle<=255; dutycycle = dutycycle+50){
    analogWrite(6, dutycycle);
    delay(1000);
  }
  for(int dutycycle = 255; dutycycle>=0; dutycycle = dutycycle-50){
    analogWrite(6, dutycycle);
    delay(5000);
  }
}
