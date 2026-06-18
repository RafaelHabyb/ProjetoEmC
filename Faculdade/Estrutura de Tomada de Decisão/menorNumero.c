// mostra o menor valor entre 3 números.

#include <stdio.h>

int main()
{

    int num1, num2, num3;

    printf("Digite o primeiro número:");

    if (scanf("%d", &num1) != 1)
    {
        printf("Entrada inválida. Digite um número inteiro.\n");
        return 0;
    }

    printf("Digite o segundo número:");

    if (scanf("%d", &num2) != 1)
    {
        printf("Entrada inválida. Digite um número inteiro.\n");
        return 0;
    }

    printf("Digite o terceiro número:");

    if (scanf("%d", &num3) != 1)
    {
        printf("Entrada inválida. Digite um número inteiro.\n");
        return 0;
    }

    if (num1 < num2 && num1 < num3)
    {
        printf("O menor numero é: %d", num1);
    }
    else
    {
        if (num2 < num1 && num2 < num3)
        {
            printf("O menor numero é: %d", num2);
        }
        else
        {
            printf("O menor numero é: %d", num3);
        }
    }

    return 0;
}