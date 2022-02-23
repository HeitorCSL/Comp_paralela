#include <stdio.h>
#include <string.h>
 
int main(void) {
    int i, j, k, t;
    int cont = 1;
    char str1[100];
    char str2[100];
    printf("Digite uma palavra de ate 100 letras: ");
    fgets(str1, 100, stdin);
    printf("Digite o caracter a ser inserida: ");
    fgets(str2, 100, stdin);
    printf("Digite a posição do caracter a ser inserido: ");
    scanf("%d", &k);
    int size_str1 = strlen(str1)-1;
    int size_str2 = strlen(str2)-1;
    for (i = 0; i < size_str1; i++) {
        int t = i;
        if (i == k){
            for (j = i; j < size_str1; j++){
                str2[cont] = str1[j];
                cont = cont + 1;
            }
            for (j = 0; j < size_str1; j++){
                str1[t] = str2[j];
                t = t+1;



            }
            break;
            
        }
    }
    for (i = 0; i<size_str1; i++){
        printf("%c",str1[i]);
    }
}