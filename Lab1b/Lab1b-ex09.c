#include <stdio.h>

#define Ordem_matriz 3

void PrintMatrix(int matrix[Ordem_matriz][Ordem_matriz])
{
    int linha, coluna;
    for (linha = 0; linha < Ordem_matriz; linha++)
    {
        for (coluna = 0; coluna < Ordem_matriz; coluna++)
        {
            printf("%d ", matrix[linha][coluna]);
        }
        printf("\n");
    }
}

int main(){
    int linha, coluna;
    int matrix[Ordem_matriz][Ordem_matriz];
    printf("Preencha a matriz de ordem 3: \n\n");

    for (linha = 0; linha < Ordem_matriz; linha++)
    {
        for (coluna = 0; coluna < Ordem_matriz; coluna++)
        {
            printf("[%i,%i] = ", linha, coluna);
            scanf("%i", &matrix[linha][coluna]);
        }
        printf("\n");
    }
    printf("Matriz com números negativos:\n");
    PrintMatrix(matrix);
    printf("\n");
    printf("\n>> Substituindo números negativos por seus módulos:\n");


    for (linha = 0; linha < Ordem_matriz; linha++)
    {
        for (coluna = 0; coluna < Ordem_matriz; coluna++)
        {
            if (matrix[linha][coluna] < 0)
            {
                matrix[linha][coluna] *= (-1);
            }
        }
    }
    PrintMatrix(matrix);
}