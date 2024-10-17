#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    char frase[5], letra,alea[20];
    int i,pos[5],aux[20];
    for(i=0;i<20;i++){
        alea[i]=rand()%26+65;
        printf(" %c",alea[i]);
    }
    printf("\ndigite uma palavra (maximo 5 letras): ");
    gets(frase);
    /*for(i=0;i<5;i++){
        if(frase[i] != '\0'){
            pos[i] = 1;
        }
        else{
            pos[i] = 0;
        }
        printf("%i",pos[i]);
    }*/
    for(i=0;i<20;i++){
        
    }
}