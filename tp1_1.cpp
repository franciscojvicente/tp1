#include <stdio.h>

int main () {
    printf("Hola mundo!");

    int var = 5; 
    int *pVar = &var;

    printf("\nEl contenido del puntero es: %d", *pVar);

    printf("\nLa direccion de memoria almacenada por el puntero es: %d", pVar);

    printf("\nLa direccion de memoria de la variable es: %d", &var);

    printf("\nLa direccion de memoria del puntero es: %d", &pVar);

    printf("\nEl tamaño de memoria usado por la variable es: %d", sizeof(var));

    return 0;
}

