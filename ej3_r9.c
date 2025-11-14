#include <stdio.h>

int main()
{
    // caracter nulo \0 para marcar el fin del arreglo
    char abc[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    int i = 0;

    printf("El abecedario en inglés es: ");
    do
    {
        i != 25 ? printf("%c, ", abc[i]) : printf("%c\n", abc[i]); // definir el formato de impresión cuando se llegue al último elemento
        i++;
    } while (abc[i] != '\0'); // condición de terminar al llegar al caracter nulo

    return 0;
}
