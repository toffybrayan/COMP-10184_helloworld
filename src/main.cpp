#include <Arduino.h>
unsigned long myTime;
/*I, Adebowale Atofarati, student number 000789108,
 certify that all code submitted is my own work;
that I have not copied it from any other source.
I also certify that I have not allowed my work to be copied by others.
**/
void setup() {
  // put your setup code here, to run once:
  // start usb serial monitor port 

  Serial.begin(115200);
   Serial.println("\n\nStudent Name: Atofarati Adebowale");
   Serial.println("\n\nStudent NUMBER: 000789108");

  Serial.printf("The ESP8266 chip ID as a 32-bit integer:\t%08X\n", ESP.getChipId());
  Serial.printf("The flash chip ID as a 32-bit integer:\t\t%08X\n", ESP.getFlashChipId());
   }

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time: ");
  myTime = millis();

  Serial.println(myTime); 
  delay(2000);    

  
} 