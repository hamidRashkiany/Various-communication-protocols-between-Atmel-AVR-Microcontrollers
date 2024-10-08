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
      <li>
        <b>I2C Communication (Inter-Integrated Circuit)</b>
        <ul>
          <li><b>Type:</b> Wired</li>
          <li><b>Pins used:</b> SDA (Data) and SCL (Clock)</li>
          <li><b>Description:</b> I2C allows multiple "slave" devices to communicate with one "master" device over two lines. One Arduino can act as the master, and the other as a slave.</li>
          <li><b>Use Case: </b>Useful when connecting multiple devices and when you need a more structured communication protocol.</li>
        </ul>
      </li>
      <li>
        <b>SPI Communication (Serial Peripheral Interface)</b>
        <ul>
          <li><b>Type:</b> Wired</li>
          <li><b>Pins used:</b> MOSI (Master Out Slave In), MISO (Master In Slave Out), SCK (Clock), and SS (Slave Select)</li>
          <li><b>Description:</b> SPI is faster than I2C but requires more wires. One Arduino acts as the master and the other as the slave.</li>
          <li><b>Use Case: </b>Suitable for high-speed data transfer and when multiple slave devices are involved.</li>
        </ul>
      </li>
      <li>
        <b>Wireless Communication (RF Modules, Bluetooth, Wi-Fi)</b>
        <ul>
          <li><b>Type:</b> Wireless</li>
          <li><b>Modules Used:</b> 
            <ul>
              <li><b>RF Modules (nRF24L01):</b> Communicate wirelessly over radio frequencies.</li>
              <li><b>Bluetooth (HC-05/06):</b> Short-range wireless communication.</li>
              <li><b>Wi-Fi (ESP8266, ESP32):</b> Communicate over Wi-Fi networks.</li>
            </ul>
          </li>
          <li><b>Use Case: </b>Ideal when you need to communicate over a distance without wires. Bluetooth is good for short distances, while Wi-Fi and RF modules can work over longer ranges.</li>
        </ul>
      </li>
      <li>
        <b>CAN Bus Communication (Controller Area Network)</b>
        <ul>
          <li><b>Type:</b> Wired</li>
          <li><b>Pins used:</b> CAN High, CAN Low</li>
          <li><b>Description:</b> CAN is a robust protocol used in automotive and industrial applications. It is more complex but can communicate over longer distances with high reliability.</li>
          <li><b>Use Case: </b>Used for communication in vehicles, robots, or other complex systems requiring error detection and longer-range communication.</li>
        </ul>
      </li>
      <li>
        <b>SoftwareSerial Communication</b>
        <ul>
          <li><b>Type:</b> Wired</li>
          <li><b>Pins used:</b> Any two digital pins</li>
          <li><b>Description:</b> With the SoftwareSerial library, you can simulate a UART connection on any two digital pins, allowing you to have multiple serial connections.</li>
          <li><b>Use Case: </b>When the built-in TX/RX pins are already in use, or you need multiple serial connections.</li>
        </ul>
      </li>
    </ol>
  As mentioned at the begining, each of these communication methods has its own advantages, and the choice depends on your project requirements such as data speed, distance, and the number of devices involved.
  </p>
  
</div>
