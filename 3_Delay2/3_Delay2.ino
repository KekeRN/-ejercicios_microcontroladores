//Contador 1 se incrementará 10 veces por segudno
int ctr1 = 0; 
//Contador 2 se incrementara 1 vez pasados 2 segundos
int ctr2 = 0; 

void setup() {
  Serial.begin(9600); 
}

void loop() {
  // Incrementar el contador 1 cada 100 ms 
  ctr1++;
  delay(100); 

  // Variable para manejar el incremento de contador 2 
  static int ctr2Delay = 0; 
  ctr2Delay += 100;         

  //Se incrementa el contador 2 cuando la variable creada anteriormente llega a 2000 ms (2 segs) y lo reinicia a 0
  if (ctr2Delay >= 2000) {  
    ctr2++;                 
    ctr1 -= ctr2;           
    ctr2Delay = 0;         
  }

  // Mostrar los valores de los contadores
  Serial.println("C1: " + String(ctr1) + " C2: " + String(ctr2));
}
