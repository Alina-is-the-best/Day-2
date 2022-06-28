int val; //создание переменной
void setup() {
Serial.begin(9600); // указание скорости передачи данных
}
void loop() {
  val=map(analogRead(A0),0,1023,0,255);   // прием и обработка сигнала 
  Serial.println(val);//отправка ланных в специальное ПО
}
