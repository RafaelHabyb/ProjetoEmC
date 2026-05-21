// mostra o menor valor entre 3 números.

#include <stdio.h>

int main(){

    int x,y,z;
    
    printf("Digite o primeiro numero:");
    
    if (scanf("%d",&x) != 1) {
        printf("Entrada invalida. Digite um numero inteiro.\n");
        return 0;
    }
    
    printf("Digite o segundo numero:");

    if (scanf("%d",&y) != 1) {
        printf("Entrada invalida. Digite um numero inteiro.\n");
        return 0;
    }
    
    printf("Digite o terceiro numero:");

    if (scanf("%d",&z) != 1) {
        printf("Entrada invalida. Digite um numero inteiro.\n");
        return 0;
    }
    
    if (x < y && x < z) {
        printf("O menor numero e: %d",x);
    } else {
        if(y < x && y < z){
            printf("O menor numero e: %d",y);
        } else {
            printf("O menor numero e: %d",z);
        }
    }
    return 0;
}