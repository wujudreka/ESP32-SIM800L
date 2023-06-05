#include <SoftwareSerial.h>

//Create software serial object to communicate with SIM800L
SoftwareSerial SIM800Serial(26, 27); //(rx, tx) >> tx sim800, rx sim800
//SoftwareSerial SIM800Serial(16, 17); //(rx, tx) >> tx sim800, rx sim800

void setup()
{
  //Begin serial communication with Arduino and Arduino IDE (Serial Monitor)
  Serial.begin(115200);
  
  //Begin serial communication with Arduino and SIM800L
  SIM800Serial.begin(9600);

  Serial.println("Initializing...");
  delay(1000);
}

void loop()
{
  updateSerial();
}

void updateSerial()
{
  while (Serial.available()) 
  {
    SIM800Serial.write(Serial.read());//Forward what Serial received to Software Serial Port
  }
  while(SIM800Serial.available()) 
  {
    Serial.write(SIM800Serial.read());//Forward what Software Serial received to Serial Port
  }
}
