int val; //создание переменной
void setup() {
Serial.begin(115200); // указание скорости передачи данных
}
void loop() {
  val=map(analogRead(A0),0,1023,0,255);   // прием и обработка сигнала 
  Serial.write("A0"); //отправка ланных в специальное ПО
  Serial.write(val);
  delay(3); //задержка
}
