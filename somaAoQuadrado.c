//Pega tres números do usuário, eleva cada um ao quadrado, soma os resultados e exibe a soma final.

#include <stdio.h>

int main(){

    float n1,n2,n3,n4;
    
    printf("Digite o primeiro número:");

    if(scanf("%f",&n1)!= 1){
        printf("Entrada inválida. Por favor, insira um número válido.");
        return 0; 
    }
    
    printf("Digite o segundo número:");

    if(scanf("%f",&n2)!= 1){
        printf("Entrada inválida. Por favor, insira um número válido.");
        return 0; 
    }
    
    printf("Digite o terceiro número:");

    if(scanf("%f",&n3) != 1){
        printf("Entrada inválida. Por favor, insira um número válido.");
        return 0; 
    }
    
    printf("Digite o quarto número:");

    if(scanf("%f",&n4) != 1){
        printf("Entrada inválida. Por favor, insira um número válido.");
        return 0; 
    }
    
    printf("O resultado depois de elevado ao quadrado e somado será:%2.f",n1*n1+n2*n2+n3*n3+n4*n4);

    return 0;
}