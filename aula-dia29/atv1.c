#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 20
int main(){
    srand(time(NULL));
    int jogada[TAM],fechado[TAM],jog,emoji8=1,emoji6=2,emoji4=3,emoji2=4, i ,aux=0, alea, fim=0;
    printf("|");
    for(i=0 ; i < TAM; i++){
        if(i<10){
            printf("0%i|",i);
        }
        else{
            printf("%i|", i );
        }
    }
    for(i=0; i<TAM; i++){
        jogada[i] = 0;
        fechado[i]= 0;
    }
    for(i=0; i < 8 ; i++){
        alea = rand()%20;
        if(jogada[alea] == 0){
            jogada[alea] = 1;
        }
        else {
            i--;
        }
    }
    for(i=0;i<6; i++){
        alea = rand()%20;
        if(jogada[alea] == 0){
            jogada[alea] = 2;
        }
        else{
            i--;
        }
    }
    for(i=0; i <4; i++){
        alea = rand()%20;
        if(jogada[alea] == 0){
            jogada[alea] = 3;
        }
        else{
            i--;
        }
    }
    for(i=0; i < 2; i++){
        alea = rand()%20;
        if(jogada[alea] == 0){
            jogada[alea] = 4;
        }
        else{
            i--;
        }
    }
    printf("\n");
    for(i=0;i<20; i++){
        printf(" %i",jogada[i]);
    }
    printf("|");
    while(fim==0){
        for(i=0;i<TAM;i++){
            if(fechado[i]==0){
                printf("❌|");
            }
            if(fechado[i]>0){
                
            }
        }
    }



}