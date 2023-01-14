// Shell Sort
// Para compilar: gcc -o shell_sort shell-sort.c

#include <stdio.h>

void shell_sort(){
    
}

void main()
{
    int vetor[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    int tam = 10;
    shell_sort(vetor, 0, tam-1);

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}