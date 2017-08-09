#include "español.h"

entero principal(vacío){

    entero número=20;

    haz{
        si(número==27){
            rompe;
        }
        imprime("Iteración %d\n", número);
        número++;
    }mientras(número<30);

    devuelve 0;
}
