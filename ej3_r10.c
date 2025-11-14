#include <stdio.h>

int main()
{
    int matriz[3][3] = {{3, 2, 1}, {6, 5, 4}, {9, 8, 7}}; // inversión de los dígitos de los extremos
    int *ap = *matriz;                                    // toma los valores de 'matriz'
    printf("Teclado de una calculadora: \n\n");
    for (int i = 8; i >= 0; i--) // recorre la matriz en orden inverso
    {
        printf(" %d\t", *(ap + i));
        (i % 3 == 0) ? printf("\n") : 0; // formato de impresión dependiendo si el número es divisible entre 3
    }

    return 0;
}
