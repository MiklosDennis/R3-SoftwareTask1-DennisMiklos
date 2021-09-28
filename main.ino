/* 
Created by: Dennis Miklos
Date: 9/28/2021
Description: Maps potentiometer resistance value
to 0-99 and displays it using two 7-segment (Cathode) dislays.
*/

// Variable Dec
int pot_resist = A0; // Potentiometer Pin
int pval = 0; // Potentionmeter Value
int mval = 0; // Mapped Value
int nval = 0; // 7 Segment placeholder Value

void setup()
{ 
  // Initialize Digital Outputs
  for (int i = 3; i <11;i++){
  	pinMode(i,OUTPUT);
  }
  
  // Begin Serial Monitor
  Serial.begin(9600);
}

void loop()
{
  // Read the analog pin (A0)
  pval = analogRead(pot_resist);  
  
  // Map potentiometer values
  mval = map(pval, 0, 1023, 0, 99); 
  
  // Print mapped value to monitor for verification
  Serial.println(mval);
 
  // Print First Number
  nval = mval/10;
  for(int i=7;i<11;i++){
    digitalWrite(i,nval%2);
    nval = nval/2;
  }
  
  // Print Second Number
  nval = mval%10;
  for(int i=3;i<7;i++){
    digitalWrite(i,nval%2);
    nval = nval/2;
  }
  
}



