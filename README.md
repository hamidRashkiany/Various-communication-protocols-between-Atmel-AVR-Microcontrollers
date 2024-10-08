# Various-communication-protocols-between-Atmel-AVR-Microcontrollers
Two arduino boards will communicate to each other in this repository. In first section, a serial number will be set in each board. Then this serial numbers will be read through different communications. Then the serial number will be presented in one LCD.
<div>
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
    From above methods, the first three approaches are applied in this repository. You can find the source code of this section in SetSerialNumber file.
  </p>
</div>

<div>
  <h1>An overview to various communication protocols</h1>
  <p>
    There are different types of communications between microcontrollers. The type of communication that will utilize between microcontrollers in one system depends to different items such as data transfering speed, type of communications based on wireless or wired, the number of devices that are communicating to each other and etc. Generally speaking, the main communication protocols lists as below:
    <ol>
      <li>
        <b>Serial Communication (UART)</b>
        <ul>
          <li><b>Type:</b> Wired</li>
          <li><b>Pins used:</b> TX (Transmit) and RX (Receive)</li>
          <li><b>Description:</b> This is the simplest form of communication, where the two Arduinos exchange data over their serial ports (TX/RX pins). Both boards must share a common ground.</li>
          <li><b>Use Case: </b>Suitable for close-range communication with simple data exchange.</li>
        </ul>
      </li>
    </ol>
  </p>
  
</div>
