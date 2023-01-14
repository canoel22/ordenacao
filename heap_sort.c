// Heap Sort
// Para compilar: gcc -o heap_sort heap_sort.c

#include <stdio.h>

void heap_sort(){
    
}

void main()
{
    int vetor[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    int tam = 10;
    heap_sort(vetor, 0, tam-1);

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}