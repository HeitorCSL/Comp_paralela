#include <stdio.h>

#define Ordem_matriz 3
int row, col;

void Print(int matrix[Ordem_matriz][Ordem_matriz])
{
    for (row = 0; row < Ordem_matriz; row++)
    {
        for (col = 0; col < Ordem_matriz; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}

int main(){
    int matrix[Ordem_matriz][Ordem_matriz];
    int multiplier;
    int row_index;
    int col_index;

    printf("Escreva a matriz de ordem 3: \n\n");

    for (row = 0; row < Ordem_matriz; row++)
    {
        for (col = 0; col < Ordem_matriz; col++)
        {
            printf("[%i,%i] = ", row, col);
            scanf("%i", &matrix[row][col]);
        }
        printf("\n");
    }
    Print(matrix);

    printf("\nColoque o multiplicador: ");
    scanf("%i", &multiplier);

    printf("Selecione a linha do %i: ", multiplier);
    scanf("%i", &row_index);
    printf("\n");

    for (col = 0; col < Ordem_matriz; col++)
    {
        matrix[row_index][col] *= multiplier;
    }
    Print(matrix);


    printf("\nColoque o multiplicador: ");
    scanf("%i", &multiplier);

    printf("Selecione a coluna do %i: ", multiplier);
    scanf("%i", &col_index);
    printf("\n");

    for (row = 0; row < Ordem_matriz; row++)
    {
        matrix[row][col_index] *= multiplier;
    }
    Print(matrix);

}
