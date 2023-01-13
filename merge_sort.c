// Merge sort
// Para compilar: gcc -o merge_sort merge_sort.c

#include <stdio.h>

void merge(int *vetor, int esq1, int dir1, int esq2, int dir2)
{
    int aux[dir2 - esq1 + 1]; // segundo vetor que guarda o resultado da ordenação
    int i = esq1;
    int j = esq2;
    int k = 0;

    while (i <= dir1 && j <= dir2)
    { // enquanto os "dois vetores" tiverem elementos
        if (vetor[i] < vetor[j])
        {
            aux[k] = vetor[i];
            i++;
        }
        else
        {
            aux[k] = vetor[j];
            j++;
        }
        k++;
    }

    // quando sair do while acima, significa que um dos vetores já está vazio

    while (i <= dir1) // enquanto tiver elementos no vetor 1
    { 
        aux[k] = vetor[i];
        i++;
        k++;
    }

    while (j <= dir2) // enquanto tiver elementos no vetor 2
    { 
        aux[k] = vetor[j];
        j++;
        k++;
    }

    for (i = esq1, j = 0; i <= dir2; i++, j++)
    {
        vetor[i] = aux[j];
    }
}

void merge_sort(int *vetor, int esq, int dir) //divide pra conquistar
{
    if (dir > esq)
    {
        int meio = (esq + dir) / 2;
        merge_sort(vetor, esq, meio);
        merge_sort(vetor, meio + 1, dir);
        merge(vetor, esq, meio, meio + 1, dir);
    }
}

void main()
{
    int vetor[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    int tam = 10;
    merge_sort(vetor, 0, tam - 1);

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}