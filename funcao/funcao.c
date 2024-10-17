#include <stdio.h>
#include <math.h>

#define TRUE    1
#define FALSE   0

void menu();
int perfeito(int);
int aprovado(double, double, double, double);
double pitagoras(int, int);

void menu() {
    //system("clear");
    printf("1 - Perfeito");
    printf("\n2 - Aprovado");
    printf("\n3 - Pitagoras");
    printf("\n0 - Sair");
    printf("\n> - ");
}

int main() {

    int op, valor, ret, catOp,catAj; 
    double n1, n2, n3, n4,hipo;

    while(op != 0) {
        menu();
        scanf("%i", &op);

        // Exercício - Perfeito
        if(op == 1) {
            printf("Digite um valor: ");
            scanf("%i", &valor);
            if(perfeito(valor) == TRUE) {
                printf("PERFEITO");
            }
            else {
                printf("IMPERFEITO");
            }
        }
        // Exercício - Aprovado
        else if(op == 2) {
            printf("Notas: ");
            scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
            ret = aprovado(n1, n2, n3, n4);

            if(ret == -1) {
                printf("REPROVADO");
            }
            else if(ret == 0) {
                printf("RECUPERAÇÃO");
            }
            else {
                printf("APROVADO");
            }
        }
        else if(op == 3){
            printf("coloque dois catetos: ");
            scanf("%i %i", &catOp,&catAj);
            hipo= pitagoras(catOp,catAj);
            printf("\n%lf",hipo);

        }
        fflush(stdout);
        sleep(3);
    }

    printf("\n");
    return 0;
}

int perfeito(int num) {

    int div, soma=0;

    for(div=1; div<num; div++) {
        if(num%div == 0) {
            soma = soma + div;
        }
    }

    if(num == soma)
        return 1; 

    return 0;
}

int aprovado(double n1, double n2, double n3, double n4) {

    double media = (n1 + n2 + n3 + n4)/4;

    if(media >= 6) return 1;
    if(media >= 4) return 0;

    return -1;
}

double pitagoras(int co, int ca) {
    return sqrt((co*co)+(ca*ca));

}