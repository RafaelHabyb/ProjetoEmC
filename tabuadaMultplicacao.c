// Mostra a tabuada, com operação e número escolhido pelo usuário

#include <stdio.h>

int main()
{
    int num, mult = 0, div;
    char operacao;

    printf("\n--------------------Entrada-------------------\n");
    printf("\nDigite o número desejado para a tabuada: ");
    scanf("%d", &num);

    printf(
        "\n----------------------------------"
        "\n| Tipos de operação:           |"
        "\n----------------------------------"
        "\n| + | Para adição;             |"
        "\n| - | Para subtração;          |"
        "\n| / | Para divisão;             |"
        "\n| * | Para multiplicação;      |"
        "\n----------------------------------");

    printf("\n\nDigite o tipo da operação: ");
    scanf(" %c", &operacao);

    printf("\n--------------------Tabuada-------------------\n");

    for (int i = 1; i <= 10; i++)
    {
        if (operacao == '+')
        {
            mult = num + i;
            printf("\n%d + %d = %d", num, i, mult);
        }
        else if (operacao == '-')
        {
            mult = num - i;
            printf("\n%d - %d = %d", num, i, mult);
        }
        else if (operacao == '/')
        {
            div = num * i;
            mult = div / num;
            printf("\n%d / %d = %d", div, i, mult);
        }
        else
        {
            mult = num * i;
            printf("\n%d * %d = %d", num, i, mult);
        }
    }

    return 0;
}