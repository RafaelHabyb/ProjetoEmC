//Mostrar tabuada de multiplicação de determinado número.

#include <stdio.h>

int main()
{
    int num, mult = 0;

    printf("Digite um número (1-10):");
    scanf("%d", &num);

    printf("\nTabuada de multiplicação do número %d:", num);

    for (int i = 1; i <= 10; i++)
    {
        mult = num * i;
        printf("\n%d x %d= %d", num, i, mult);
    }

    return 0;
}