#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main(){
    int vet[N],i,b,per = 0;
    printf("digite um numero: ");
    scanf("%i",&b);
    srand((unsigned)time(NULL));
    for(i = 0 ; i < N; i++){
        vet[i] = rand()%20;
        //printf(" %i",vet[i]);
    }
    for(i=0;i <N;i++){
        if(vet[i] == b){
            printf("ta aqui %i",i);
        }
        else{
            per++;
        }

    }
    if(per == i){
        printf("errou");
    }
}