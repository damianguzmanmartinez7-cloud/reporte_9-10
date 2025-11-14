#include <stdio.h>

int main()
{
    // Declaramos un arreglo unidimensional de 5 números flotantes con 2 o menos decimales
    float lista[5] = {23.50, 4.12, 82.92, 7.82, 12.2};

    // Declaramos un apuntador que apunta a nuestra primera variable ¨lista¨
    float *p = lista;

    // Recorremos el arreglo con un ciclo for
    for (int i = 0; i < 5; i++)
    { // Usamos aritmética de apuntadores para acceder a los elementos

        printf("Elemento %d: %.2f\n", i, *(p + i)); // *(p + i) obtiene el valor del elemento i
    }

    return 0;
}