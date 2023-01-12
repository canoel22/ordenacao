//Merge sort
//Para compilar: gcc -o merge_sort merge_sort.c

#include <stdio.h>

void merge(){

}

void merge_sort(){

}

void main()
{
    int vetor[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    int tam = 10;
    merge_sort(vetor, tam);

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}