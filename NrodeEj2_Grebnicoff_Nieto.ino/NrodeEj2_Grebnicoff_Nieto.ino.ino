// Ejercicio evaluatorio 3er bimestre
/*
  Integrantes
    Nombre: Iair
    Apellido: Grebnicoff
    Curso: 3TE
    
    Nombre:Teo
    Apellido:Nieto
    Curso: 3TE
  
Congisgnas
  Conexionado:
    En la protoboard, conectar 4 LEDs para que cada uno pueda ser controlado individualmente. Cada LED deberá tener su respectiva resistencia.
    Se debe conectar tambien, un pulsador que permita recibir información de un usuario.
    Indicar a continuación los pines a los cuales se conectó cada elemento y el valor de resistencias utilizado:
      Pines:
        Boton:
        LED1:
        LED2:
        LED3:
        LED4:
      Valor:
        R_boton:
        R_LEDs:

  Progamas:
    Se deben entregar un programa distinto por cada punto. Los programas son una modificación entre ellos.
    El código deberá estar comentado indicando qué se propone hacer con cada línea de código
    1.  El primer programa sirve para corroborar la correcta conexión de los elementos de hardware.
        El mismo deberá encender TODOS los LEDs cuando se presione el pulsador y apagarlos cuando éste se suelte.
*/ 
#define rj 10
#define vrd 3
#define blq 4
# define amr 5
# define btn 8
int var = 0;

void setup() {
  pinMode(rj,OUTPUT);
  pinMode(vrd,OUTPUT);
  pinMode(blq,OUTPUT);
  pinMode(amr,OUTPUT);
  pinMode(btn,INPUT);
  digitalWrite(rj, HIGH);
  digitalWrite(vrd, HIGH);
  digitalWrite(blq, HIGH);
  digitalWrite(amr, LOW);


  // Configuración del arduino
}



void loop() {
  // Logica del programa
if(digitalRead(btn) == HIGH){
  if(var == 0){
    digitalWrite(amr, HIGH);
    digitalWrite(rj, LOW);
    delay(100);
    var = 1;
    } else if( var == 1){
    digitalWrite(rj, HIGH);
    digitalWrite(vrd, LOW);
    delay(100);
    var = 2;
    } else if (var == 2){
    digitalWrite(vrd, HIGH);
    digitalWrite(blq, LOW);
    delay(100);
    var = 3;
    } else if(var == 3){
      digitalWrite(blq, HIGH);
      digitalWrite(amr, LOW);
    delay(100);
      var = 0;
    }
}
}
