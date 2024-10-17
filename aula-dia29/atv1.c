#include <stdio.h>

// Declaração das sub-rotinas
float adicao();
float subtracao();
float multiplicacao();
float divisao();

int main() {
    int opcao;
    float resultado;

    do {
        // Menu de opções
        printf("Escolha uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        // Chama a sub-rotina correspondente e exibe o resultado
        switch(opcao) {
            case 1:
                resultado = adicao();
                printf("Resultado da adição: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtracao();
                printf("Resultado da subtração: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicacao();
                printf("Resultado da multiplicação: %.2f\n", resultado);
                break;
            case 4:
                resultado = divisao();
                if (resultado != -1) {
                    printf("Resultado da divisão: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisão por zero.\n");
                }
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while(opcao != 5);

    return 0;
}

float adicao() {
    float a, b;
    printf("Digite dois números para adição: ");
    scanf("%f %f", &a, &b);
    return a + b;
}

float subtracao() {
    float a, b;
    printf("Digite dois números para subtração: ");
    scanf("%f %f", &a, &b);
    return a - b;
}

float multiplicacao() {
    float a, b;
    printf("Digite dois números para multiplicação: ");
    scanf("%f %f", &a, &b);
    return a * b;
}

float divisao() {
    float a, b;
    printf("Digite dois números para divisão: ");
    scanf("%f %f", &a, &b);
    if (b != 0) {
        return a / b;
    } else {
        return -1; // Indicador de erro
    }
}