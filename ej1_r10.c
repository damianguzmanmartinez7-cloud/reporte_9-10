
#include <stdio.h>
#include <string.h>

int main()
{
    char *medicamentos[] = {
        "Clonazepam",
        "Litio",
        "Amitriptilina",
        "Clozapina",
        "Alprazolam",
        "Zolpidem",
        "Inmipramina",
        "Lozam",
        "Sulpirida"};
    ; // matriz de arreglos de caracteres --> ""

    int total_medicamentos = sizeof(medicamentos) / sizeof(medicamentos[0]); // número de medicamentos

    printf("Medicamentos controlados: \n");
    for (int i = 0; i < total_medicamentos; i++)
    {
        printf("\t%s ✓  ", medicamentos[i]);
        ((i + 1) % 3 == 0) ? printf("\n") : 0; // se quiere imprimir 3 "columnas"
    }

    return 0;
}
