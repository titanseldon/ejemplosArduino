//Dejar espacio antes o después del + en los comandos AT
#include <SoftwareSerial.h>

// define the digital pins to use as RX and TX for two
// software serial connections
const int RX1 = 8;
const int TX1 = 9;
const int RX2 = 10;
const int TX2 = 11;

// create SoftwareSerial objects
SoftwareSerial SoftSerialOne(RX1,TX1);
SoftwareSerial SoftSerialTwo(RX2,TX2);

void setup(void) {
// setup the software serial pins
pinMode(RX1, INPUT);
pinMode(RX2, INPUT);
pinMode(TX1, OUTPUT);
pinMode(TX2, OUTPUT);
pinMode(7, OUTPUT);

digitalWrite(7, HIGH);
SoftSerialTwo.begin(2400); // begin communication on the second
Serial.begin(9600);
delay(3000);
digitalWrite(7, LOW);
Serial.println("Esperando comandos AT : ");
}

void loop(void)
{
  if(SoftSerialTwo.available())
  {
    char c = SoftSerialTwo.read();
    Serial.print(c);
  }
  if(Serial.available())
  {
    char c = Serial.read();
    SoftSerialTwo.print(c);
  }
}
