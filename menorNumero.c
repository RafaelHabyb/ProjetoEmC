#include <stdio.h>

int main()
{
    int x,y,z;
    
    printf("Digite o primeiro numero:");
    scanf("%d",&x);
    
    printf("Digite o segundo numero:");
    scanf("%d",&y);
    
    printf("Digite o terceiro numero:");
    scanf("%d",&z);
    
    if (x < y && x < z) {
        printf("O menor numero e:%d",x);
    } else {
        if(y < x && y < z){
            printf("O menor numero e:%d",y);
        } else {
            printf("O menor numero e:%d",z);
        }
    }
    return 0;
}