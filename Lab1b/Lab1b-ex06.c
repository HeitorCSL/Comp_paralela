#include <stdio.h>
#include <stdlib.h>


int main()
{
	int matrizA[3][4];
	int matrizB[4][3];
	int i, j;

	for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			printf ("Insira o elemento [%d][%d] das Matriz A\n", i, j);
			scanf ("%d", &matrizA[i][j]);
		}
	}
    printf("Matriz normal");
    printf("\n");
	for (i=0; i<3; i++)
	{
        for (j=0; j<4; j++) 
		{
            printf("%d\t", matrizA[i][j]);

		}
		printf("\n");

	}

	for (i=0; i<4; i++)
	{

		for (j=0; j<3; j++)
		{
			matrizB[i][j]=matrizA[j][i];
		}

	}
    printf("\n");
    printf("Matriz transposta");
    printf("\n");
	for (i=0; i<4; i++)
	{
        for (j=0; j<3; j++) 
		{
            printf("%d\t", matrizB[i][j]);

		}
		printf("\n");
	}

	return (0);
}