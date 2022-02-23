#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int k, i, j, result; 
    int linha=1;

    printf ("Digite o valor da dimensão da matriz quadrada:\n");
    scanf ("%d", &k);

    int a[k][k];

    printf ("Digite os valores da matriz:\n");
    for (i=0; i<k; i++)
    {
        printf("Agora, digite os valores das %d linha: \n", i+1);
        for (j=0; j<k; j++)
        scanf("%d", &a[i][j]);

        result= a[0][0];        
    }
    for (i=0; i<k; i++)
    {
        for (j=0; j<k; j++)
        {
            if (a[i][j] < result)
            {
                result= a[i][j];
                linha= i+1;
            }                
        }
    }
    printf("Menor valor é %d\n", linha);
    return 0;      
}