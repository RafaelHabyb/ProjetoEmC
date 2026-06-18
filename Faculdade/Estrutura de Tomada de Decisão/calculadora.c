// calculadora simples, escolher tipo de operação, e efetuar o cálculo.

#include <stdio.h>

int main()
{

    float num1, num2, resposta = 0;
    char operacao;

    printf("Digite o primeiro número do cálculo:");

    if (scanf("%f", &num1) != 1)
    {
        printf("Inválido, tente outra vez!");
        return 0;
    }

    printf("Digite o segundo número do cálculo:");

    if (scanf("%f", &num2) != 1)
    {
        printf("Inválido, tente outra vez!");
        return 0;
    }

    printf("+ : para soma\n");
    printf("- : para subtração\n");
    printf("* : para multiplicação\n");
    printf("/ : para divisão\n");
    printf("Digite o tipo de operação:");
    scanf(" %c", &operacao);

    if (operacao == '+')
    {
        resposta = num1 + num2;
    }
    else if (operacao == '-')
    {
        resposta = num1 - num2;
    }
    else if (operacao == '*')
    {
        resposta = num1 * num2;
    }
    else if (operacao == '/')
    {
        resposta = num1 / num2;
    }
    else
    {
        printf("Operação inválida!");
        return 0;
    }

    printf("O resultado será:%.2f", resposta);
    return 0;
}