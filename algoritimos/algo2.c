#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

int main(){
    int cont, bim,disc,i,g;
    float media,soma=0,media2=0;
    char **nomes, *aux;
    aux = malloc(200 * sizeof(char));

    printf("quantas disciplinas: ");
    scanf("%i",&disc);
    printf("vão ser quantos bimestres: ");
    scanf("%i", &bim);
    
    float notas[disc][bim];
    nomes = malloc(disc * sizeof(char));

    for(cont = 1, i = 0 ; i < disc; i++, cont++){
        printf("nome %i: ", cont);
        __fpurge(stdin);
        gets(aux);
        nomes[i] = malloc(strlen(aux)+1 * sizeof(char));
        strcpy(nomes[i], aux);
        puts(nomes [i]);
    }

    for(i = 0 ; i < disc; i++){
        cont = 1;
        g = 0;
        while(g < bim)
        {
            printf("%s bimestre %i notas: ", nomes[i], cont);
            scanf("%f", &notas[i][g]);
            if (notas[i][g] >= 0 && notas[i][g] <= 10)
            {
                cont++;
                g++;
            }
            else
            {
                printf("VALOR INVALIDO!\n");
            }
        }
    }
    printf("\n\n");
    for(i=0, cont= 1 ; i<bim; i++, cont++){
        printf("\tbimestre %i", cont);
    }

    printf("\tmedia\n");

    for(i = 0 ; i < disc; i++)
    {
        printf("\n%s\t", nomes[i]);
        for(g=0; g< bim; g++){
            printf("%.2f\t\t",notas[i][g]);
            soma += notas[i][g];
        }
        media = (float)soma/bim;
        media2 += media;
        printf("%.2f",media);
        soma = 0;
    }

    printf("\nmedias");

    for(i = 0 ; i < bim; i++)
    {
        for(g=0; g< disc; g++){
            soma += notas[g][i];
        }
        media = (float)soma/disc;
        printf("\t%.2f\t",media);
        soma = 0;
    }
    media = media2/disc;
    printf("\t%.2f",media);
    
    


    return 0;
}