


int R1 = 7;// pins for hodling the binary to decimal visual
int R2 = 6;
int R3 = 5;
int R4 = 4;

int binaries [4]; // for bit binary list 

char input ;// user input 4 bit binary decimal 

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   Serial.println("Enter a pin:");
   pinMode(R1,OUTPUT);
   pinMode(R2,OUTPUT);
   pinMode(R3,OUTPUT);
   pinMode(R4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    
    int input = Serial.read();
    Serial.print("pin: ");
    Serial.println(input);

  // convert character input into integer as the character is an whole number input 
    int x = int(input / 2);// removing decimal number for conversion to integer 
    int x_2 = (input % 2);// finding the reminder 
    binaries[0] = x_2;// send the reminder to the binaries array
  
    int y = int(x/2);
    int y_2 = (x % 2);
    binaries[1] = y_2 ;
  
    int z = int(y/2);
    int z_2 = (y % 2);
    binaries[2] = z_2;
  
    int a = z ;
    int a_2 = (a%2);
    binaries[3] = a_2;
    Serial.println("output:");
    Serial.print(binaries[0]);
    Serial.print(binaries[1]);
    Serial.print(binaries[2]);
    Serial.print(binaries[3]);
    delay(500);
            // reverse array
   
    digitalWrite(R1,binaries[0]); //binaries is used as the HIGH(1) or LOW(0) for each pin
    digitalWrite(R2,binaries[1]);
    digitalWrite(R3,binaries[2]);
    digitalWrite(R4,binaries[3]);
    delay(3000);
    digitalWrite(R1,LOW); //binaries is used as the HIGH(1) or LOW(0) for each pin
    digitalWrite(R2,LOW);
    digitalWrite(R3,LOW);
    digitalWrite(R4,LOW);
    

  }

}
