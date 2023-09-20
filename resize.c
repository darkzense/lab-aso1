#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    printf("Digite el tamaño original del arreglo: ");
    int n1 = 0;
    scanf("%d", &n1);
    // Asignacion de memoria dinamica inicial al arreglo
    int *a1 = malloc(n1 * sizeof(int));

    // Asignacion de elementos del arreglo e impresion en consola
    for (int i = 0; i < n1; i++)
    {
        *(a1 + i) = 100;
        printf("%d ", *(a1 + i));
    }

    printf("\nDigite el Nuevo tamaño del arreglo: ");
    int n2 = 0;
    scanf("%d", &n2);

    // Redimension dinamica del arreglo
    a1 = realloc(a1, n2 * sizeof(int)); // Resize the array

    // Rellena nuevos espacios del arreglo con 0 (si aplica)
    if (n2 > n1)
    {
        for (int j = n1; j < n2; j++)
        {
            *(a1 + j) = 0;
        }
    }

    // Imprime los nuevos elementos del arreglo
    for (int i = 0; i < n2; i++)
    {
        printf("%d ", *(a1 + i));
    }

    printf("\n");

    // Libera la última asignación de memoria del arreglo
    free(a1);

    return 0;
}