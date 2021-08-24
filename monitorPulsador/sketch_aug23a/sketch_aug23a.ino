#define PIN_PULSADOR 8

int estadoDelBoton = 0;

void setup() {
  pinMode(PIN_PULSADOR, INPUT);
  Serial.begin(9600);
}

void loop() {
  estadoDelBoton = digitalRead(8);
  Serial.println(estadoDelBoton);
  delay(50);
}
