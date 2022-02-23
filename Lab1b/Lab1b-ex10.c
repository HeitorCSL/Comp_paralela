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
    int multiplier;
    int row_index;
    int col_index;

    printf("Matriz de ordem 3: \n");

    for (linha = 0; linha < Ordem_matriz; linha++)
    {
        for (coluna = 0; coluna < Ordem_matriz; coluna++)
        {
            matrix[linha][coluna] = rand() % 70;
        }
        printf("\n");
    }
    Print(matrix);

    printf("\nColoque o multiplicador: ");
    scanf("%i", &multiplier);

    printf("Selecione a linha do %i: ", multiplier);
    scanf("%i", &row_index);
    printf("\n");

    for (coluna = 0; coluna < Ordem_matriz; coluna++)
    {
        matrix[row_index][coluna] *= multiplier;
    }
    Print(matrix);


    printf("\nColoque o multiplicador: ");
    scanf("%i", &multiplier);

    printf("Selecione a coluna do %i: ", multiplier);
    scanf("%i", &col_index);
    printf("\n");

    for (linha = 0; linha < Ordem_matriz; linha++)
    {
        matrix[linha][col_index] *= multiplier;
    }
    Print(matrix);

}