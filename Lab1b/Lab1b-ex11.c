#include <stdio.h>

#define Ordem_matriz 3
int linha, coluna;

void Print(int matrix[Ordem_matriz][Ordem_matriz])
{
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
    int matrix[Ordem_matriz][Ordem_matriz];

    printf("Escreva a matriz de ordem 3: \n\n");

    for (linha = 0; linha < Ordem_matriz; linha++)
    {
        for (coluna = 0; coluna < Ordem_matriz; coluna++)
        {
            printf("[%i,%i] = ", linha, coluna);
            scanf("%i", &matrix[linha][coluna]);
        }
        printf("\n");
    }
    Print(matrix);
    printf("\n");

    int result_row_index = 1;
    
    for (coluna = 0; coluna < Ordem_matriz; coluna++)
    {
        matrix[result_row_index][coluna] = matrix[0][coluna] + matrix[1][coluna];
    }
    printf("\nA soma de L1 com L2:\n");
    Print(matrix);
    printf("\n");
    
    for (coluna = 0; coluna < Ordem_matriz; coluna++)
    {
        matrix[result_row_index][coluna] = matrix[0][coluna] * matrix[1][coluna];
    }
    printf("\nA multiplicação de L1 com L2:\n");
    Print(matrix);

}