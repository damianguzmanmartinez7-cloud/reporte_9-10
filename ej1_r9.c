#include <stdio.h>

int main()
{
    int lista[] = {10, 8, 5, 8, 7};
    int tam = sizeof(lista) / sizeof(lista[0]); // tamaño del arreglo
    // cosidera al numero de la posición 0 el mas pequeño para a partir de el comenzar a comparar
    int chiquito = lista[0];

    for (int i = 1; i < tam; i++)
    {
        if (lista[i] < chiquito)
        {
            chiquito = lista[i];
            /// pasa por todo el arreglo hasta antes del 5 comparando y generando un nuevo menor (chiquito)
        }
    }

    printf("\nEl menor valor en el registro es: %d\n", chiquito);

    return 0;
}