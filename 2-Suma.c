#include "español.h"

flotante sumar(flotante a, flotante b){
    devuelve a+b;
}

entero principal(vacío){

    flotante número1=10.25;
    flotante número2=24.8;
    flotante resultado;

    resultado = sumar(número1, número2);

    imprime("El resultado es %0.2f\n",resultado);

    devuelve 0;
}
