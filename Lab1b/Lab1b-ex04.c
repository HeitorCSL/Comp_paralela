#include <stdio.h>
#include <string.h>


int main(){
    char nome1[15], nome2[15];
    int i = 0;

    
    printf ("Digite o primeiro nome: ");
    gets(nome1);

    printf ("Digite o segundo nome: ");
    gets(nome2);

    for (i = 0; i < 15; i++){
        if (nome1[i] < nome2[i]){
            printf ("A ordem é: %s, %s.\n",nome1, nome2);
            break;
        }else{
            printf ("A ordem é: %s, %s.\n", nome2, nome1);
            break;
        }
    }
    return 0;
}