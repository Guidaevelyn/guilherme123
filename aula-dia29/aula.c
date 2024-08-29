#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 4
int main(){
    srand(time(NULL));
    int nota[TAM],media= 0,i;
    for(i = 0; i < 4; i++){
        nota[i] = rand()%90 +10;
        printf(" %i",nota[i]);
    }
    printf("\n");
    for(i = 0; i < 4 ; i++){
        media = nota[i] + media;
    }
    media = media / 4;
    printf(" %i",media);



    printf("\n");
}
