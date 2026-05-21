//calculadora simples, ler dois números, ler o tipo de operação, calcular o tipo de operação e mostrar o cálculo.

#include <stdio.h>

int main(){

    float n1, n2, s=0;
    char op;
    
    printf("Digite o primeiro numero do calculo:");

    if(scanf("%f",&n1) !=1){
        printf("Invalido, tente outra vez!");
        return 0;
    }
    
    printf("Digite o segundo numero do calculo:");

    if(scanf("%f",&n2) !=1){
        printf("Invalido, tente outra vez!");
        return 0;
    }
    
    printf("Digite o tipo de operacao (+,-,*,/):");
    scanf(" %c", &op);
    
    if(op=='+'){
        s=n1+n2;
    } else if(op=='-'){
        s=n1-n2;
    }else if(op=='*'){
        s=n1*n2;
    }else if(op=='/'){
        s=n1/n2;
    } else{
        printf("Operacao invalida!");
        return 0;
    }
    
    printf("O resultado sera:%.2f",s);
    return 0;
}