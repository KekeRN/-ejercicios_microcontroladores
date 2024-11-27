//Imprimir Hello world continuamente por el monitor serie.

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Hello World");
  delay(1000);
}
