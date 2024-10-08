//In this example, approach 2 is utilized to set a serial number to Arduino boards. Two Arduino as Arduino MEGA and Arduino UNO are communicating to each other.
#include <EEPROM.h>

int addr = 0; // Starting address in EEPROM
char readSerial[20];

void setup() {
  Serial.begin(115200);
  
  // Storing and retrieving serial number from EEPROM
  String serialNumber = "ArduinoUNO";
  for (int i = 0; i < serialNumber.length(); i++) {
    EEPROM.write(addr + i, serialNumber[i]);
  }
  EEPROM.write(addr + serialNumber.length(), '\0'); // Null-terminate

  // Reading the stored serial number
  
  for (int i = 0; i < 20; i++) {
    readSerial[i] = EEPROM.read(addr + i);
    if (readSerial[i] == '\0') break;
  }
}

void loop() {
  //Send message to Arduino MEGA
  Serial.println(readSerial);
  // Delay for a second before sending again
  delay(1000);
}
