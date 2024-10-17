#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 5
#define COL 5

int main(){
    int mat [LIN][COL], linha,lin,col,soma= 0;
    srand(time(NULL));

    for(lin = 0 ; lin < LIN ; lin++){
        for(col = 0; col < COL; col++){
            mat[lin][col] = 10 + rand()%41;
            printf("%i ", mat[lin][col]);
        }
        printf("\n");
    }

    printf("\nescolha a linha para somar: ");
    scanf("%i",&linha);

    for(col=0 ; col < COL ; col++){
        soma = mat[linha][col] + soma;
    }

    printf("\nvalor da linha é: %i", soma);
}