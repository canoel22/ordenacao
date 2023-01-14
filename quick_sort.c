// Quick Sort
// Para compilar: gcc -o quick_sort quick_sort.c

#include <stdio.h>

void swap(int *vetor, int i, int j)
{
    int aux = vetor[j];
    vetor[j] = vetor[i];
    vetor[i] = aux;
}

int particao(int *vetor, int esq, int dir)
{
    int pivo = vetor[(esq + dir) / 2];

    while (1)
    {
        while (vetor[esq] < pivo)
        {
            esq++;
        }

        while (vetor[dir] > pivo)
        {
            dir--;
        }

        if (esq < dir)
        {
            swap(vetor, esq, dir);
            esq++;
            dir--;
        }
        else
        {
            return dir;
        }
    }
}

void quick_sort(int *vetor, int esq, int dir)
{
    if (dir > esq)
    {
        int indice_pivo = particao(vetor, esq, dir);
        quick_sort(vetor, esq, indice_pivo);
        quick_sort(vetor, indice_pivo + 1, dir);
    }
}

void main()
{
    int vetor[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    int tam = 10;
    quick_sort(vetor, 0, tam-1);

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}