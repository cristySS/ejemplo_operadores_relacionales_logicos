/*
 * Estructura básica
 * Por: cristina sanchez
 * Fecha: 11 de abril
 * 
 * Esto es una muestra de la estructura básica de un programa
 */

// Bibliotecas

// Constantes

// Variables
int dato;

// Definición de objetos

// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() {// Inicio de void setup ()
  // Aquí va tu código

}// Fin de void setup

// Cuerpo del programa - Se ejecuta constamente
void loop() {// Inicio de void loop
  // put your main code here, to run repeatedly:
//dato = 8 > 1;     //fuera de la comparacion, es resultado de una operacion


//if (data >8)     // dentro de la comparacion, espero un 1 o un 0 logico

if (dinero >200) {
  //
  //comprarTacos();
  if (hambre > 192){
    comprarTacos();
  }
}

        //1      &&        1      if (1)
if (dinero > 200 && hambre > 192){   //se articulan operadores relacionales con logicos
  comprarTacos();
}


if ( buenos ==1 || dinero > 200 && hambre > 192){  //cuidado con las agrupaciones con los operadores   //se articulan opradores relacionales con logicos
  comprarTacos();
}


}// Fin de void loop

// Funcioes del usuario
