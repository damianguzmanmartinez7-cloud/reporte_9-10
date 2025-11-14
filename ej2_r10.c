#include <stdio.h>

int main()
{
    int matriz[3][3] = {{4, 3, 3}, {2, 7, 0}, {1, 9, 9}};

    int i = 0; // el indice inicia de la fila 0

    do
    {              // primer bucle para recorrer las filas de la matriz
        int j = 0; // el índice de la columna inicia en 0 para cada fila
        do
        { // segundo bucle para recorrer las columnas de la fila actual
            printf("%d ", matriz[i][j]);
            j++; // incrementa el indice de la columna
        } while (j < 3); // se repite mientras haya columnas por recorrer
        printf("\n");
        i++; // incrementa el indice de la fila
    } while (i < 3); // repite mientras haya filas por recorrer

    return 0;
}