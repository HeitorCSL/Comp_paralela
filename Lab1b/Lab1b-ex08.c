#include <stdio.h>
#include <stdlib.h>
#define LINHA 2
#define COLUNA 3

int main(){
    int MatrixA[LINHA][COLUNA];

    int i, j = 0;
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            MatrixA[i][j] = rand() % 50;
        }
    }
    int a, b = 0;
    printf ("Original Matrix: \n");
    for (a = 0; a < LINHA; a++){
        for (b = 0; b < COLUNA; b++){
            printf("%d\t", MatrixA[a][b]);
        }
        printf("\n");
    }
    int MatrixB[COLUNA][LINHA];
    int c, d = 0;
    for (c = 0; c < COLUNA; c++){
        for (d = 0; d < LINHA; d++){
            MatrixB[c][d] = MatrixA[d][c];
        }
    }
    printf ("Transposed Matrix: \n");

    for (c = 0; c < COLUNA; c++){
        for (d = 0; d < LINHA; d++){
            printf("%d\t", MatrixB[c][d]);
        }
        printf("\n");
    }

    return 0;
}