#include <stdio.h>
#include <string.h>

int main(){
    
    int num;
    char nome[20];
    
    printf("Digite um numero (1-10):");
    scanf("%d",&num);
    
    switch(num){
        case 1:
            strcpy(nome,"Ana");break;
        case 2:
            strcpy(nome,"Alex");break;
        case 3:
            strcpy(nome,"Bruna");break;
        case 4:
            strcpy(nome,"José");break;
        case 5:
            strcpy(nome,"Amanda");break;
        case 6:
            strcpy(nome,"João");break;
        default:
            strcpy(nome,"ID inválido");
    }
    printf("ID digitado: %s", nome);
}