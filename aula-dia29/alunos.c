#include <stdio.h>

void soma(som1, som2, res1)
{
    res1 = som1 + som2;
    printf("O resultado eh %.2f\n", res1);
}
void sub(sub1, sub2, res2)
{

    res2 = sub1 - sub2;
    printf("O resultado eh %.2f\n", res2);
}
void mul(mul1, mul2, res3)
{
    res3 = mul1 * mul2;
    printf("O resultado eh %.2f\n", res3);
}
void div(div1, div2, res4)
{
    if (div2 == 0)
    {
        printf("valor invalido\n");
    }
    else
    {
        res4 = div1 / div2;
        printf("O resultado eh %.2f\n", res4);
    }
}
int main()

{
    int op;
    printf("Selecione a operaçao:\n 1)Adição\n 2)Subtração\n 3)Multiplicação\n 4)Divisao\n ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        float som1, som2, res1;
        printf("Digite dois valores: ");
        scanf("%f%f", &som1, &som2);
        soma();
        break;
    case 2:
        float sub1, sub2, res2;
        printf("Digite dois valores: ");
        scanf("%f%f", &sub1, &sub2);
        sub();
        break;
    case 3:
        float mul1, mul2, res3;
        printf("Digite dois valores: ");
        scanf("%f%f", &mul1, &mul2);
        mul();
        break;
    case 4:
        float div1, div2, res4;
        printf("Digite dois valores: ");
        scanf("%f%f", &div1, &div2);
        div();
        break;
    }
}
