// Cálculo de médias, por faixa etária de 20 pessoas.

#include <stdio.h>

int main()
{
    int i = 1, idade;
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
    float media1 = 0, media2 = 0, media3 = 0, media4 = 0, peso;

    while (i <= 20)
    {

        printf("Digite a idade da pessoa %d:", i);
        scanf("%d", &idade);
        printf("Digite o peso da pessoa %d:", i);
        scanf("%f", &peso);

        if (idade >= 1 && idade <= 10)
        {
            cont1++;
            soma1 += peso;
        }
        else if (idade >= 11 && idade <= 20)
        {
            cont2++;
            soma2 += peso;
        }
        else if (idade >= 21 && idade <= 30)
        {
            cont3++;
            soma3 += peso;
        }
        else
        {
            cont4++;
            soma4 += peso;
        }
        i++;
    }
    if (cont1 > 0)
    {
        media1 = soma1 / cont1;
    }
    if (cont2 > 0)
    {
        media2 = soma2 / cont2;
    }
    if (cont3 > 0)
    {
        media3 = soma3 / cont3;
    }
    if (cont4 > 0)
    {
        media4 = soma4 / cont4;
    }

    printf("\nMédia de 1 a 10 anos: %.2f\n", media1);
    printf("Média de 11 a 20 anos: %.2f\n", media2);
    printf("Média de 21 a 30 anos: %.2f\n", media3);
    printf("Média 30+ anos: %.2f\n", media4);

    return 0;
}