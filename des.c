#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 5
#define COL 5

int main()
{
    int mat[LIN][COL], esp[LIN][COL], org[LIN][COL], com = 51, i = 0, lin, col, marca1, marca2;
    srand(time(NULL));

    for (lin = 0; lin < LIN; lin++)
    {
        for (col = 0; col < COL; col++)
        {
            mat[lin][col] = 10 + rand() % 41;
            printf(" %i", mat[lin][col]);
            esp[lin][col] = 0;
            org[lin][col] = 0;
        }
        printf("\n");
    }
    while (org[4][4] == 0)
    {
        for (lin = 0; lin < LIN; lin++)
        {
            for (col = 0; col < COL; col++)
            {
                if (mat[lin][col] < com && esp[lin][col] == 0)
                {
                    com = mat[lin][col];
                    marca1 = lin;
                    marca2 = col;
                    // printf("g");
                }
                else
                {
                    // printf("g");
                }
            }
        }
        esp[marca1][marca2] = 1;
        for (lin = 0; lin < LIN; lin++)
        {
            for (col = 0; col < COL; col++)
            {
                if (org[lin][col] == 0)
                {
                    org[lin][col] = com;
                    lin = 6;
                    col = 6;
                    com = 51;
                    // printf("u");
                }
                else
                {
                    // printf("u");
                }
            }
        }
    }
    printf("\n\n");
    for (lin = 0; lin < LIN; lin++)
    {  
        for (col = 0; col < COL; col++)
        {
            printf(" %i", org[lin][col]);
        }
        printf("\n");
    }
}