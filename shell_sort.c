// Shell Sort
// Para compilar: gcc -o shell_sort shell_sort.c

#include <stdio.h>

void shell_sort(int *vetor, int tam)
{

    for (int jump = tam / 2; jump > 0; jump = jump / 2) //enquanto for possível realizar jumps 
    {
        for (int i = jump; i < tam; i++)
        {
            int j = i;
            int atual = vetor[i];

            while (j >= jump && vetor[j - jump] > atual)
            {
                vetor[j] = vetor[j - jump];
                j = j - jump;
            }

            vetor[j] = atual;
        }
    } //a cada interação, o jump é dividido por 2
}

void main()
{
    int vetor[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    int tam = 10;
    shell_sort(vetor, tam);

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}