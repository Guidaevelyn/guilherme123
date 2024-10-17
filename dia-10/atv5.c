#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *nome1, *nome2;
    int tam;

    printf("tamanho:");
    scanf("%i", &tam);

    nome1 = malloc(tam * sizeof(char));
    nome2 = malloc(tam * sizeof(char));
    printf("nomes: \n");
    __fpurge(stdin);
    gets(nome1);
    __fpurge(stdin);
    gets(nome2);

    strcat(nome1, "-");
    strcat(nome1, nome2);
    printf("o conteudo é: %s", nome1);




    return 0;
}
