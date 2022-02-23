#include <stdio.h>
#include <string.h>
 
int main(void) {
    int i, j, k;
    char str1[100];
    printf("Digite uma palavra de ate 100 letras: ");
    fgets(str1, 100, stdin);
    printf("Digite a posição do caracter a ser removido: ");
    scanf("%d", &k);
    int size_str1 = strlen(str1)-1;
    for (i = 0; i < size_str1; i++) {
        if (str1[i] == str1[k]){
            for (j = i; j < size_str1; j++){
                str1[j] = str1[j+1];
            }
        }
    }
    for (i = 0; i<size_str1; i++){
        printf("%c",str1[i]);
    }
}