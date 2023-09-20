#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaracion de la funcion
void sort(int *A, int array_size);

int main()
{
    // Semilla de randomizacion
    // Necesaria para generar diferentes numeros en cada ejecucion
    srand(time(NULL));
    // Tamaño del arreglo
    int n;
    // Puntero del arreglo (Instruccion faltante)
    int *array;

    printf("Digite un numero entero n: ");
    scanf("%d", &n);
    // Asignacion de memoria dinamica al arreglo (Instruccion faltante)
    array = (int *)malloc(n * sizeof(int));

    // Asignacion de elementos [0, 32000)
    for (int i = 0; i < n; i++)
    {
        *(array + i) = rand() % 32000;
    }

    printf("El arreglo sin ordenar es: ");
    for (int x = 0; x < n; x++)
    {
        printf("%d ", *(array + x));
    }
    printf("\n");
    // Ordenacion del arreglo
    sort(array, n);

    printf("El arreglo ordenado es: ");
    for (int x = 0; x < n; x++)
    {
        printf("%d ", *(array + x));
    }
    printf("\n");

    // Liberacion de la memoria asignada al arreglo
    free(array);
    return 0;
}

// Insertior Sort
void sort(int *A, int array_size)
{
    int cur_elem, insert_index;
    for (int cur_index = 1; cur_index < array_size; cur_index++)
    {
        cur_elem = *(A + cur_index);
        insert_index = cur_index - 1;

        while (insert_index >= 0 && cur_elem < *(A + insert_index))
        {
            *(A + insert_index + 1) = *(A + insert_index);
            insert_index -= 1;
        }
        *(A + insert_index + 1) = cur_elem;
    }
}
