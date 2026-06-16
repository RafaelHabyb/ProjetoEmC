// estrutura For, para achar a maior e a menor altura.

#include <stdio.h>

int main()
{

    float height = 0, menor = 0, maior = 0;

    for (int i = 1; i <= 15; i++)
    {

        printf("Digite a altura da pessoa %d:", i);
        scanf("%f", &height);

        if (i == 1)
        {
            menor = height;
            maior = height;
        }
        else if (height < menor)
        {
            menor = height;
        }
        else if (height > maior)
        {
            maior = height;
        }
    }

    printf("Menor altura %.2f, maior altura %.2f", menor, maior);
    return 0;
}