//In this example, approach 2 is utilized to set a serial number to Arduino boards. Two Arduino as Arduino MEGA and Arduino UNO are communicating to each other.
#include <EEPROM.h>

int addr = 0; // Starting address in EEPROM
char readSerial[20];

void setup() {
  // Begin serial1 communication for UART communication with UNO
  Serial1.begin(115200);
  
  // Begin serial communication for monitoring via USB to your computer
  Serial.begin(115200);
  // Storing and retrieving serial number from EEPROM
  String serialNumber = "ArduinoMEGA";
  for (int i = 0; i < serialNumber.length(); i++) {
    EEPROM.write(addr + i, serialNumber[i]);
  }
  EEPROM.write(addr + serialNumber.length(), '\0'); // Null-terminate

  // Reading the stored serial number
  
  for (int i = 0; i < 20; i++) {
    readSerial[i] = EEPROM.read(addr + i);
    if (readSerial[i] == '\0') break;
  }

  //Serial.println("Serial Number approach 2: ");
  //Serial.println(readSerial);
}

void loop() {
  //Check if data is available on Serial1 (from UNO)
  if(Serial1.available()>0){
    // read incoming data
    String data = Serial1.readString();

    //print received data from UNO 
    Serial.println("Received data from UNO: "+data);
  }
}
