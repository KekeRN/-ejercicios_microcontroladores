int contador = 0; 

void setup() {
  Serial.begin(9600); 
}
void loop() {
  contador++;
 
  Serial.println("Contador: " + String(contador));

  delay(1000); 
}
