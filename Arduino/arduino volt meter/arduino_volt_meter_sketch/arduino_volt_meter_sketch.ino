int analog = A0;

int work = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(analog,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  work = analogRead(analog);
  float total = work / 219.7;
  Serial.println(total);
  // read the A0 input 
  
 // print it out 

}
