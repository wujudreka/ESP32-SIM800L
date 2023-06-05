# ESP32-SIM800L
it is a simple code for you who want to connect your esp32 to your SIM800L module. Basically it is a code for you to check whether your microcontroller and your GPRS module have been connected appropriately. Actually the code can work not only for esp but also arduino, since it uses softwareserial. What you need to do is only change the appropriate pin for tx rx. 
other than that, it was also tested with SIM900A V.5.1 (which 5V compatible), and can work like a charm. 

## before jump into next level project
better you check your SIM800L - ESP32 connection using AT Command using the code, just type the command on serial monitor Arduino IDE. 
These are some useful AT command to check:
AT – Once the handshake test is successful, it will back to OK
AT+CSQ – Signal quality test, value range is 0-31 , 31 is the best
AT+CCID – Read SIM information to confirm whether the SIM is plugged
AT+CREG? – Check whether it has registered in the network
AT+COPS? – Checks which network you are connected to.
AT+COPS=? – Returns the list of operators present in the network.
AT+CBC – Returns Li-Po battery status. The second number is the battery level and the third number is the actual voltage in mV
AT+CMGF=1 – Selects the SMS message format as text. The default format is Protocol Data Unit (PDU).

## note
1.  this code was tested on ESP32
2.  using arduino IDE version 1.8.19
3.  using ESP32 board library version 1.0.6
