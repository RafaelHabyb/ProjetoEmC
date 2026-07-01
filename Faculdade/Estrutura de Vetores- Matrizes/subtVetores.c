/*Ler dois vetores (denominados A e B) com 20 elementos do tipo inteiro. Construir um vetor C, sendo 
cada elemento a subtração de um elemento do vetor A com um elemento correspondente do vetor B, ou seja, 
a operação de processamento deve estar baseada na operação C[I] <- A[I] – B[I]. Ao final apresentar os 
elementos do vetor C.*/

#include <stdio.h>

int main()
{
    int tam = 20, cont = 0;
    int vetA[tam], vetB[tam], vetC[tam];

    for (int i = 0; i < tam; i++)
    {
        cont++;
        printf("\nDigite o %d numero do vetor A: ", cont);
        scanf("%d", &vetA[i]);

        printf("Digite o %d numero do vetor B: ", cont);
        scanf("%d", &vetB[i]);
    }

    for (int i= 0; i < tam; i++)
    {
        vetC[i]=vetA[i]-vetB[i];
        printf("%d, ",vetC[i]);
    }

    return 0;
}