int contador = 0; 

unsigned long tiempoAnterior = 0; 

void setup() {
  Serial.begin(9600); 
}

void loop() {
  // Crear variable para almacenar el valor actual en milisegundos
  unsigned long tiempoActual = millis();

  // Verificar si ha pasado 1 segundo (1000 ms)
  if (tiempoActual - tiempoAnterior >= 1000) {
    tiempoAnterior = tiempoActual; 
    contador++; 

    Serial.println("Contador: " + String(contador));
  }

}
