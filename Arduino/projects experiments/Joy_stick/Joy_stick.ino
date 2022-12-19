/* For more projects and tutorials visit
   http://3.7.27.83/category/arduino/
*/
// Arduino pin numbers
int SW = 2; // digital pin connected to switch output
// A0-> X ; A1-> Y;
void setup() {
  pinMode(SW, INPUT);
  digitalWrite(SW, HIGH);
  Serial.begin(9600);// changing the serial output speed can F**k with your
  //serial output values 
}
void loop() {

  
  //Serial.print("Switch:  ");
  //Serial.print(digitalRead(SW));
  //Serial.print("\n");
  //Serial.print("X-axis: ");
  Serial.print(analogRead(A0));
  Serial.print(",");
  //Serial.print("\n");
  //Serial.print("Y-axis: ");
  Serial.print(analogRead(A1));
  Serial.println("");
  delay(100);
}
