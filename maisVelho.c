#include <stdio.h>

int main(){
    
    char p1[10], p2[10];
    int dia, mes, ano, dia1, mes1, ano1, idade=0, idade1=0;
    
    printf("Digite o nome da primeira pessoa:");
    scanf("%s",p1);
    
    printf("Data de nascimento da primeira pessoa(dia,mes,ano):");
    scanf("%d""%d""%d", &dia, &mes, &ano);

    if(dia>31 || mes>12){
        printf("Dia ou mes invalido!");
        return 0;
    }
    
    printf("Digite o nome da segunda pessoa:");
    scanf(" %s",p2);
    
    printf("Data de nascimento da segunda pessoa(dia,mes,ano):");
    scanf("%d""%d""%d", &dia1, &mes1, &ano1);
    
    if(dia1>31 && mes1>12){
        printf("Dia ou mes invalido!");
        return 0;
    }
    
    idade= 2026-ano;
    idade1= 2026-ano1;

    if (mes>5){
        idade= idade-1;
    } 

    if (mes1>5){
        idade1= idade1-1;
    } 

    if(idade>idade1){
        printf("%s com %d, e mais velho que %s com %d", p1, idade, p2, idade1);
    } else if(idade<idade1){
        printf("%s com %d, e mais velho que %s com %d", p2, idade1, p1, idade);
    } else if(mes<mes1){
        printf("%s com %d, no mes %d, e mais velho que %s com %d, no mes %d", p1, idade, mes, p2, idade1, mes1);
    } else if(mes>mes1){
        printf("%s com %d, no mes %d, e mais velho que %s com %d, no mes %d", p2, idade1, mes1, p1, idade, mes);
    } else if(dia<dia1){
        printf("%s com %d, no dia %d, e mais velho que %s com %d, no mes %d", p1, idade, dia, p2, idade1, dia1);
    } else if(dia>dia1){
        printf("%s com %d, no dia %d, e mais velho que %s com %d, no dia %d", p2, idade1, mes1, p1, idade, mes);
    } else {
        printf("%s nasceu em %d %d %d, e %s nasceu em %d %d %d, \nPortanto tem a mesma idade", p1, dia, mes, ano, p2, dia1, mes1, ano1);
    }
    return 0;
}
