int binaries [4];

char input;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Enter a pin:");

}

void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available()){
      
      input = Serial.read();
      int digit = -1;
      if (input >= '0' && input <= '15'){digit = input - '0'; }// ascci converter 
      Serial.print("pin: ");
      if (digit >= 0){Serial.println(digit,DEC);}
      else {Serial.println("INVALID");}
      
      int x = int(digit / 2);// removing decimal number for conversion to integer 
      int x_2 = (digit % 2);// finding the reminder
       
      binaries[0] = x_2;// send the reminder to the binaries array
      Serial.println("Output: " );
      Serial.print(binaries[0]);
    
      int y = int(x/2);
      int y_2 = (x % 2);
      binaries[1] = y_2 ;
      Serial.print(binaries[1]);
    
      int z = int(y/2);
      int z_2 = (y % 2);
      binaries[2] = z_2;
      Serial.print(binaries[2]);
    
      int a = z ;
      int a_2 = (a%2);
      binaries[3] = a_2;
      Serial.print(binaries[3]);
      delay(1000);
    
  }

}
