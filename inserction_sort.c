//Inserction Sort
//Para compilar: gcc -o inserction_sort inserction_sort.c

#include <stdio.h>

void inserction_sort(){

}

void main()
{
    int vetor[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    int tam = 10;
    inserction_sort(vetor, tam);

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}