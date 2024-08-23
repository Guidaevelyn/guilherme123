#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int fim,cont1,cont2,resultado,op,result,q1=0,q2=0,q3=0,q4=0;
    float result1,resultado1;
    srand(time(NULL));
    for(fim = 0;fim < 4;){
        cont1 = rand()%100;
        cont2 = rand()%100;
        printf("jogo da matematica\n");
        if(q1 ==0){
            printf("1 adição\n");
        }
        if(q2 == 0 ){
            printf("2 subtração\n");
        }
        if(q3 == 0){
            printf("3 divisão\n");
        }
        if(q4 == 0){
            printf("4 multiplicação\n");
        }
        printf("> ");
        scanf("%i",&op);
        if(op==1 && q1==0){
            printf("%i + %i = ", cont1,cont2);
            scanf("%i",&resultado);
            result = cont1 + cont2;
            if(result == resultado ){
                printf("😁😁😁😁😁😁😁\n");
                q1 = 1;
                fim++;
            }
            else{
                printf("🤢🤢🤢🤢🤢🤢🤢🤢\n");
            }
        }
        if(op==2 && q2 == 0){
            printf("%i - %i = ",cont1,cont2);
            scanf("%i",&resultado);
            result = cont1 - cont2;
            if(resultado == result){
                printf("😁😁😁😁😁😁\n");
                q2 = 2;
                fim++;
            }
            else{
                printf("🤢🤢🤢🤢🤢🤢\n");
            }

        }
        if(op == 3 && q3 == 0){
            for(; cont1%cont2!=0; cont1 = rand()%100, cont2 = rand()%100);
            printf("%i / %i = ",cont1,cont2);
            scanf("%i",&resultado);
            result = cont1/cont2;
            if(resultado == result){
                printf("😁😁😁😁😁\n");
                q3 = 3;
                fim++;
            }
            else{
                printf("🤢🤢🤢🤢🤢🤢\n");
            }

        }
        if(op == 4 && q4==0){
            printf("%i X %i = ", cont1,cont2);
            scanf("%i",&resultado);
            result = cont1 * cont2;
            //printf("%i %i", resultado, result);
            // __fpurge(stdin);
            //getchar();
            if(resultado == result){
                printf("😁😁😁😁😁😁\n");
                q4 = 4;
                fim++;
            }
            else{
                printf("🤢🤢🤢🤢🤢🤢🤢🤢🤢🤢\n");
            }
        }
    }
    printf("vc ganhou");
}