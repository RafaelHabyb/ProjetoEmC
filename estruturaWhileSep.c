#include <stdio.h>

int main(){
    
    int cont1=0, cont2=0, cont3=0, cont4=0, num;

    printf("Digite um numero entre 0 e 100:");
    scanf("%d", &num);

    while(num>=0){
        if(num>=0 && num<=25){
            cont1++;
        } else if(num>=26 && num<=50){
            cont2++;
        } else if(num>=51 && num<=75){
            cont3++;
        } else if(num>=76 && num<=100){
            cont4++;
        } 
        printf("Digite um numero entre 0 e 100:");
        scanf("%d", &num);
    }
    
    printf("Entre 0 e 25: %d\n",cont1);
    printf("Entre 26 e 50: %d\n",cont2);
    printf("Entre 51 e 75: %d\n",cont3);
    printf("Entre 76 e 100: %d\n",cont4);
    
    return 0;
}