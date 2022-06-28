int val = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  val = map (analogRead(A0), 0, 1023, 0, 255);
//  Serial.write("A0");
 //Serial.write(" ");  
  Serial.write(val);
 // Serial.println(val);
  

}
