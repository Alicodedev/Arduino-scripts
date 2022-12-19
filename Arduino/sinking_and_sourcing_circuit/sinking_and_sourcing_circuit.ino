
int pin = 6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pin,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin,HIGH);

}
