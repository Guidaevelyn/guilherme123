#include <stdio.h>
int main(){
    int i, num = 0;
    char frase[100];
    printf("digite um frase: ");
    gets(frase);
    for(i=0;frase[i] != '\0'; i++){
        if(frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'u' || frase[i] == 'U'){
            num++;
        }
        printf("%c", frase[i]);
    }
    printf("\no total de vogais deu: %i",num);
}