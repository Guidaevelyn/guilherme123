#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LIN 5

int main() {

    int g,i,l;
    char **nomes;
    char *aux;

    printf("tamanho");
    scanf("%i", &g);

    nomes = malloc(LIN * sizeof(char*));
    for(i=0; i<LIN; i++) {
        nomes[i] = malloc(g * sizeof(char));
    }
    aux = malloc(g * sizeof(char));


    printf("nomes");
    for(i = 0 ; i<LIN; i++){
        __fpurge(stdin);
        gets(nomes[i]);
    }
    for(i = 0 ; i < LIN ; i++) {
        for(l = 0 ; l < LIN; l++) {
            if(strcmp(nomes[i], nomes[l]) < 0) {
                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[l]);
                strcpy(nomes[l], aux);
            }
        }
    }

    for(i = 0 ; i < LIN ; i++) {
        printf("\n%s", nomes[i]);
    }
}