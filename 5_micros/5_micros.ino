//Contador 1 se incrementará 10 veces por segudno
int ctr1 = 0;
//Contador 2 se incrementara 1 vez pasados 2 segundos
int ctr2 = 0;


unsigned long incrementoctr1 = 0;
unsigned long incrementoctr2 = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  unsigned long tiempoActual = micros();
  // Incrementar el contador 1 cada 100000 microsegundos
  if (tiempoActual - incrementoctr1 >= 100000) {
    ctr1++;
    incrementoctr1 = tiempoActual;
  }

  if (tiempoActual - incrementoctr2 >= 2000000) {
    ctr2++;
    ctr1 -= ctr2;
    incrementoctr2 = tiempoActual;
  }


  // Mostrar los valores de los contadores
  Serial.println("C1: " + String(ctr1) + " C2: " + String(ctr2));
}
