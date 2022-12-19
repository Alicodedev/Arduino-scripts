
const unsigned long event_1 = 180000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("running");
  if ( millis() > event_1 ) {  // millis set timer checking if geater then even_1 in milliseconds 
    Serial.println("it works"); // choose is blue button 
    break

    //Make fish taco...
    
  }
}
