//Approach 1: Hardcoding the Serial Number in Code
/*
const String serialNumber = "ABC12345";

void setup() {
  Serial.begin(9600);
  Serial.println("Serial Number approach 1: " + serialNumber);
}

void loop() {
  // Any other logic
}
*/

/*
//Approach 2: Using EEPROM to Store the Serial Number
#include <EEPROM.h>

int addr = 0; // Starting address in EEPROM

void setup() {
  Serial.begin(9600);
  
  // Storing and retrieving serial number from EEPROM
  String serialNumber = "ABC12345";
  for (int i = 0; i < serialNumber.length(); i++) {
    EEPROM.write(addr + i, serialNumber[i]);
  }
  EEPROM.write(addr + serialNumber.length(), '\0'); // Null-terminate

  // Reading the stored serial number
  char readSerial[20];
  for (int i = 0; i < 20; i++) {
    readSerial[i] = EEPROM.read(addr + i);
    if (readSerial[i] == '\0') break;
  }

  Serial.println("Serial Number approach 2: ");
  Serial.println(readSerial);
}

void loop() {
  // Other logic
}
*/

/*
//Aproach 3: Receive and Store Serial Number via Serial Monitor
#include <EEPROM.h> // Optional, for persistent storage

String serialNumber = ""; // Variable to store the input serial number
bool serialReceived = false; // Flag to indicate when serial number is received

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud
  Serial.println("Enter Serial Number:");

  // Optional: Read the stored serial number from EEPROM on boot
  char storedSerial[20]; // Adjust size based on your EEPROM space
  int i = 0;
  while (EEPROM.read(i) != '\0' && i < sizeof(storedSerial)) {
    storedSerial[i] = EEPROM.read(i);
    i++;
  }
  storedSerial[i] = '\0'; // Null-terminate the string

  if (i > 0) {
    Serial.print("Stored Serial Number");
    Serial.println(storedSerial);
  } else {
    Serial.println("No serial number stored.");
  }
}

void loop() {
  // Check if data is available in the Serial buffer
  if (Serial.available() > 0) {
    // Read the entire input line as a string
    serialNumber = Serial.readStringUntil('\n'); // Read until newline character
    serialNumber.trim(); // Remove any extra newline or spaces

    // Check if a serial number was received
    if (serialNumber.length() > 0) {
      Serial.print("Serial Number Received: ");
      Serial.println(serialNumber);

      // Optional: Store the serial number in EEPROM for future retrieval
      for (int i = 0; i < serialNumber.length(); i++) {
        EEPROM.write(i, serialNumber[i]);
      }
      EEPROM.write(serialNumber.length(), '\0'); // Null-terminate the stored string

      serialReceived = true;
    }
  }

  // Do something with the received serial number if needed
  if (serialReceived) {
    // For example, display the serial number
    Serial.print("Using Serial Number: ");
    Serial.println(serialNumber);

    // Reset the flag after processing
    serialReceived = false;
  }
}
*/
