//Sketch para hacer parpadear un led conectado
//al pin digital 9 del Arduino Nano.

#define PIN_LED 9

void setup() {  
    pinMode(PIN_LED, OUTPUT);    
}

void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(500);
  digitalWrite(PIN_LED, LOW);
  delay(500);
}
