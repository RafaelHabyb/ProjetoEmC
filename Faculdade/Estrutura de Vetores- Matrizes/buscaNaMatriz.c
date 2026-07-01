/*Faça uma matriz 4x4 e armazene um número inteiro aleatório de 0 a 99 em cada posição da matriz. 
Solicite que o usuário entre com um número inteiro. Faça uma busca na matriz para verificar se o 
número dado como entrada pelo usuário está presente na matriz. Caso o número esteja presente imprima 
“Número presente!”, caso contrário imprima “Número ausente!”. Imprima a matriz*/

#include <stdio.h>
#include <time.h>

int main()
{
    int matriz[4][4], num;

    srand(time(NULL));

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }

    printf("Digite algum numero para verficacao: ");
    scanf("%d", &num);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] == num)
            {
                printf("Numero encontrado!");
                return 0;
            }
        }
    }

    printf("Numero nao encontrado!");

    return 0;
}