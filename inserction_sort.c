//Inserction Sort
//Para compilar: gcc -o inserction_sort inserction_sort.c

#include <stdio.h>

void inserction_sort(int* vetor, int tam){
    for (int i=1; i<tam; i++){
        int j= i;
        int atual = vetor[i];

        while(j>0 && vetor[j-1]>atual){
            vetor[j]=vetor[j-1];
            j--;
        }

        vetor[j] = atual;
    }
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