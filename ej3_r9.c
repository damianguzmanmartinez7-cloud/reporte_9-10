#include <stdio.h>

int main()
{
    // caracter nulo \0 para marcar el fin del arreglo
    char abc[] = "abcdefghijklmnopqrstuvwxyz"; // ya contiene a \0 porque es un arreglo de caracteres
    int i = 0;

    printf("El abecedario en inglés es: ");
    do
    {
        i != 25 ? printf("%c, ", abc[i]) : printf("%c\n", abc[i]); // definir el formato de impresión cuando se llegue al último elemento
        i++;
    } while (abc[i] != '\0'); // condición de terminar al llegar al caracter nulo

    return 0;
}
