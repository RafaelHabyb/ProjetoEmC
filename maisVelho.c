//Ecercício para calcular o irmão mais velho, ou se nasceram no mesmo dia.

#include <stdio.h>

int main(){
    
    char pessoa1[10], pessoa2[10];
    int dia, mes, ano, dia1, mes1, ano1, idade=0, idade1=0;
    
    printf("Digite o nome da primeira pessoa:");
    scanf("%s",pessoa1);
    
    printf("Data de nascimento da primeira pessoa(dia,mês,ano):");
    scanf("%d""%d""%d", &dia, &mes, &ano);

    if(dia>31 || mes>12){
        printf("Dia, mês ou ano inválidos!");
        return 0;
    }
    
    printf("Digite o nome da segunda pessoa:");
    scanf(" %s",pessoa2);
    
    printf("Data de nascimento da segunda pessoa(dia,mês,ano):");
    scanf("%d""%d""%d", &dia1, &mes1, &ano1);
    
    if(dia1>31 || mes1>12 ){
        printf("Dia, mês ou ano inválidos!");
        return 0;
    }
    
    idade= 2026-ano;
    idade1= 2026-ano1;

    if (mes>6){
        idade= idade-1;
    } 

    if (mes1>6){
        idade1= idade1-1;
    } 

    if(idade>idade1){
        printf("%s com %d, é mais velho que %s com %d", pessoa1, idade, pessoa2, idade1);
    } else if(idade<idade1){
        printf("%s com %d, é mais velho que %s com %d", pessoa2, idade1, pessoa1, idade);
    } else if(mes<mes1){
        printf("%s com %d, no mes %d, é mais velho que %s com %d, no mes %d", pessoa1, idade, mes, pessoa2, idade1, mes1);
    } else if(mes>mes1){
        printf("%s com %d, no mes %d, é mais velho que %s com %d, no mes %d", pessoa2, idade1, mes1, pessoa1, idade, mes);
    } else if(dia<dia1){
        printf("%s com %d, no dia %d, é mais velho que %s com %d, no mes %d", pessoa1, idade, dia, pessoa2, idade1, dia1);
    } else if(dia>dia1){
        printf("%s com %d, no dia %d, é mais velho que %s com %d, no dia %d", pessoa2, idade1, mes1, pessoa1, idade, mes);
    } else {
        printf("%s nasceu em %d %d %d, é %s nasceu em %d %d %d, \n", pessoa1, dia, mes, ano, pessoa2, dia1, mes1, ano1);
        printf("Portanto tem a mesma idade");
    }

    return 0;
}
