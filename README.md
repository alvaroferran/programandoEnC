# Programando en C en español

Este repo contiene una serie de programas que muestran cómo programar en C en español.

Están implementados, entre otros, los condicionales **si** y **sino**, los bucles **por**, **mientras** y **haz__mientras**, las funciones **imprime** y **escanea**, los tipos de variables **entero**, **flotante**, **doble**, **vacío**, etc.
Las letras **ñ**, **á**, **é**, etc también son aceptados.


Para ello lo primero es instalar la última versión de **clang** (ahora 4.0.0):

    sudo apt-get install clang-4.0

Para compilar y ejecutar los ejemplos ejecutamos:

    clang nombre.c -o nombre && ./nombre
    e.g.: clang 1-HolaMundo.c -o hola && ./hola
