# Various-communication-protocols-between-Atmel-AVR-Microcontrollers
Two arduino boards will communicate to each other in this repository. In first section, a serial number will be set in each board. Then this serial numbers will be read through different communications. Then the serial number will be presented in one LCD.
<h1>Set serial number</h1>
<p>
  There are different methods for setting fix serial number in Arduino boards as below:
  <ol>
    <li>Hardcoding the Serial Number in Code</li>
    <li>Using EEPROM to Store the Serial Number</li>
    <li>Receive and Store Serial Number via Serial Monitor
    <li>Using External EEPROM or Flash Memory</li>
    <li>Storing Serial Number in PROGMEM</li>
    <li>Reading Serial Number from External Devices (SD card, etc.)</li>
    <li>Dynamically Generating Serial Numbers (e.g., Based on MAC Address or Unique ID)</li>
    <li>Using an External Hardware Serial Number Chip</li>
  </ol>
  From above methods, the first three approaches are applied in this repository.
</p>
