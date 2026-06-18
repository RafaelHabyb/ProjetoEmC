//Mostrar números pares entre dois números.

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite o primeiro número:");
    scanf("%d", &num1);

    printf("Digite o segundo número:");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        printf("Os números pares entre %d e %d:\n", num1, num2);

        for (int i = num1; i <= num2; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
        }
    }
    else if (num2 < num1)
    {
        printf("Os números pares entre %d e %d:\n", num2, num1);

        for (int i = num2; i <= num1; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
        }
    }
    else
    {
        if (num1 % 2 == 0)
        {
            printf("Número são iguais, e o número %d é par", num1);
        }
        else
        {
            printf("Número são iguais, e o número %d é ímpar", num1);
        }
    }

    return 0;
}
