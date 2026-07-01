/*Ler 20 elementos (valores reais) para temperaturas em graus Celsius em um vetor A. O programa deve 
apresentar a menor, a maior e a média das temperaturas lidas.*/

#include <stdio.h>

int main()
{
    int tam = 20, cont = 0;
    float vetA[tam], maior = 0, menor = 0, media = 0, soma = 0;

    for (int i = 0; i < tam; i++)
    {
        cont++;

        printf("%d Temperatura em graus: ", cont);
        scanf("%f", &vetA[i]);

        soma += vetA[i];

        if (i == 0)
        {
            maior = vetA[i];
            menor = vetA[i];
        }
        else if (vetA[i] > maior)
        {
            maior = vetA[i];
        }
        else if (vetA[i] < menor)
        {
            menor = vetA[i];
        }
    }

    media = soma / tam;

    printf("\nMaior= %.2f", maior);
    printf("\nMenor= %.2f", menor);
    printf("\nMedia= %.2f", media);

    return 0;
}