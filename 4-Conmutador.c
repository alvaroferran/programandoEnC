#include "español.h"

entero principal(vacío){

    entero número = 1;

    conmutador(número){
        caso 1:
            imprime("Número: %d\n",número);
            rompe;
        caso 2:
            imprime("El valor es DOS\n");
            rompe;
        defecto:
            imprime("Otros valores\n");
    }

    devuelve 0;
}
