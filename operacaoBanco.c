//Menu de opções, semelhantes a um banco, para cálcular saldo, após saque e deposito.

#include <stdio.h>

int main()
{
    int opcao;
    float saque, saldo = 2000, deposito;

    do
    {
        printf("\nTipos de operação:\n");
        printf("1. Saque de dinheiro;\n");
        printf("2. Depósito de dinheiro;\n");
        printf("3.Consultar saldo;\n");
        printf("4. Sair do sistema;\n\n");
        printf("Digite a opção desejada:");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nDigite o valor a ser sacado: ");
            scanf("%f", &saque);

            if (saque > 0 && saque <= saldo)
            {
                saldo -= saque;
                printf("\nSaque de %.2f realizado com sucesso!\n", saque);
            }
            else
            {
                printf("\nSaldo insuficiente para saque!\n");
            };
            break;

        case 2:
            printf("\nDigite o valor a ser depositado: ");
            scanf("%f", &deposito);

            if (deposito > 0)
            {
                saldo += deposito;
                printf("\nDepósito de %.2f realizado com sucesso!\n", deposito);
            }
            else
            {
                printf("\nValor digitado é negativo!\n");
            };
            break;

        case 3:
            printf("\nSaldo em conta: %.2f\n", saldo);
            break;

        case 4:
            printf("\nObrigado! Volte sempre.");
            break;

        default:
            printf("\nOpção digitada é inválida! Tente outra vez.\n");
        }
    } while (opcao != 4);

    return 0;
}