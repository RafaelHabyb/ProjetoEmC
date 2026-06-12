//Estrutura Swicht Case, conferir se o id e válido

#include <stdio.h>
#include <string.h>

int main(){
    
    int num;
    char nome[20];
    
    printf("Digite um número entre 1 e 10:");
    scanf("%d",&num);
    
    switch(num){
        case 1:
            strcpy(nome,"Ana");break;
        case 2:
            strcpy(nome,"Alex");break;
        case 3:
            strcpy(nome,"Bruna");break;
        case 4:
            strcpy(nome,"Jose");break;
        case 5:
            strcpy(nome,"Amanda");break;
        case 6:
            strcpy(nome,"Joao");break;
        default:
            strcpy(nome,"ID invalido");
    }

    printf("ID digitado corresponde a: %s", nome);
    
}