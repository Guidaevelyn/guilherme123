#include <stdio.h>
#define G 100
int main(){
    char nome[G];
    int i;
    printf("diga o nome de um pais: ");
    gets(nome);

    for(i=0;nome[i]!='\0';i++){
        printf("%c", nome[i]);
    }
}