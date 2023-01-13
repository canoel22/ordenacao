// Selection sort 
// Para compilar: gcc -o selection_sort selection_sort.c

#include <stdio.h>

void swap(int *vetor, int menor, int j)
{
    int aux = vetor[j];
    vetor[j] = vetor[menor];
    vetor[menor] = aux;
}

void selection_sort(int *vetor, int tam)
{

    for (int j = 0; j < tam; j++)
    {
        int menor = j;

        for (int k = j + 1; k < tam; k++) //pega um item e compara com todos os outros para achar algum menor que ele
        {
            if (vetor[menor] > vetor[k])
            {
                menor = k;
            }
        }

        swap(vetor, j, menor);
    }
}

void main()
{
    int vetor[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    int tam = 10;
    selection_sort(vetor, tam);

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}