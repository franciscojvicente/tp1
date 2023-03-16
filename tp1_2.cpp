#include <stdio.h>

int cuadrado (int num1);
void cuadradoVoid (int num1);
void Variable (int num1);
void Invertir(int a, int b);
void orden(int a, int b);

int main () {
    int num1 = 4;
    int num2 = 5;

    printf("a. %d elevado al cuadrado es %d", num1, cuadrado(num1));

    cuadradoVoid(num1);

    Variable(num1);

    int a, b;

    printf("\nIngrese el primer numero (A): ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero (B): ");
    scanf("%d", &b);

    Invertir(a, b);

    orden(a,b);

    return 0;
}

int cuadrado (int num1) {
    int cuadrado = num1 * num1;
    return cuadrado;
}

void cuadradoVoid (int num1) {
    int cuadrado = num1 * num1;
    printf("b. \n%d elevado al cuadrado es %d", num1, cuadrado);
}

void Variable (int num1) {
    printf("\nc. El valor de la variable es: %d", num1);
    printf("\nLa direccion de memoria de la variable es: %d", &num1);
}

void Invertir(int a, int b) {
    printf("d. Antes A = %d y B = %d", a, b);
    int aux;
    aux = a;
    a = b; 
    b = aux;
    printf("\nDespues A = %d y B = %d", a, b);
}

void orden(int a, int b) {
    int aux;
    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
        printf("\ne. A = %d y B = %d", a, b);
    } else
    {
        printf("\ne.A = %d y B = %d", a, b);
    }
    
}