<h1>UART communication</h1>
<div>
  <p>
    To implement UART communication between an Arduino UNO and an Arduino MEGA, you will need to connect the TX (Transmit) and RX (Receive) pins of the two boards and use some basic code to transmit and receive data. Here’s a step-by-step guide:
    <ol>
      <li>
        <b>Wiring Between Arduino UNO and MEGA</b>
        <ul>
          <li>
            Connect the <b>TX pin of the UNO</b> to the <b>RX1 pin of the MEGA</b>.
            <ul>
              <li><b>UNO TX (Pin 1) → MEGA RX1 (Pin 19)</b></li>
            </ul>
          </li>
        </ul>
        <ul>
          <li>
            Connect the <b>RX pin of the UNO</b> to the <b>TX1 pin of the MEGA</b>.
            <ul>
              <li><b>UNO RX (Pin 0) → MEGA TX1 (Pin 18)</b></li>
            </ul>
          </li>
        </ul>
        <ul>
          <li>
            Connect the <b>GND (ground) pins</b> of both Arduinos.
            <ul>
              <li><b>UNO GND → MEGA GND</b></li>
            </ul>
          </li>
        </ul>
      </li>
      <li>
        <b>Code for the Arduino UNO (Transmitter)</b>
        <p>The UNO will act as the transmitter and send data to the MEGA. You can use the hardware serial for this communication. For source code please refer to the file <b>UartCommunicationProtocolUno.ino</b>.</p>
      </li>
      <li>
        <b>Code for the Arduino MEGA (Receiver)</b>
        <p>The MEGA will act as the receiver. Since the MEGA has multiple hardware serial ports, you can use <b>Serial1</b> for communication on the TX1/RX1 pins (pins 18/19).For source code please refer to the file <b>UartCommunicationProtocolMEGA.ino</b>.</p>
      </li>
      <li>
        <b>Testing and Debugging</b>
        <ul>
          <li>
            <b>Upload the code to both Arduinos:</b>
            <ul>
              <li>Upload the UNO code to the Arduino UNO.</li>
              <li>Upload the MEGA code to the Arduino MEGA.</li>
            </ul>
          </li>
          <li>
            <b>Open the Serial Monitor:</b>
            <ul>
              <li>Disconnect ArduinoUNO from your PC USB port and give its power through power jack or pin number that shows 5v. According to the datasheet of ArduinoUNO, the ideal power is <b>7-12VDC</b>. </li>
              <li>Connect ArduinoMEGA to USB port.</li>
              <li>Open the Serial Monitor for the Arduino MEGA (Tools > Serial Monitor) and set the baud rate to 115200. If you use baud rate in 9600, for each transmision you  have to <b>reset</b> ARDUINOUNO. Also you will see strange character in serial manitor.</li>
              <li><b>Expected Output:</b> You should see the message "ARDUINOUNO" printed repeatedly on the MEGA’s Serial Monitor.</li>
            </ul>
          </li>
        </ul>
      </li>
    </ol>
  </p>
  <h2>Key points:</h2>
  <ul>
    <li><b>Baud Rate:</b> Make sure both boards communicate at the same baud rate (115200 in this example). If you use baud rate 9600, then for each date transmision, you need to reset ArduinoUNO.</li>
    <li><b>Pins:</b> The Arduino MEGA has multiple hardware serial ports (Serial1, Serial2, Serial3), while the UNO has only one. We're using Serial1 on the MEGA in this setup, and the default Serial on the UNO.</li>
  </ul>
</div>
