#include <stdio.h>
#include <stdlib.h>

FILE* arquivo;
FILE* arquivo2;

typedef struct
{
    char nome[100];
    int idade;
    float altura; 
    
} PESSOA;

int cmp(const void *a, const void *b)
{
    if (((PESSOA *)a)->altura < ((PESSOA *)b)->altura) return -1;
    if (((PESSOA *)a)->altura > ((PESSOA *)b)->altura) return 1;
    if (((PESSOA *)a)->altura == ((PESSOA *)b)->altura) return 0;
}

FILE* abreArquivoAEntrada(char ArquivoDados[100])
{
    arquivo = fopen(ArquivoDados, "r");
    return arquivo;
}

void imprimeVetor(PESSOA Povo[10], int i){
    int j;
    for (j=0; j < i; j++){ 
        printf("%s\n", Povo[j].nome);
        printf("%d\n", Povo[j].idade);
        printf("%.2f\n\n", Povo[j].altura);
    }
}

PESSOA leDadosUmaPessoa(FILE* Arquivo)
{

    PESSOA Persons;

    fscanf(Arquivo, "%s\n", &Persons.nome);
    fscanf(Arquivo, "%d\n", &Persons.idade);
    fscanf(Arquivo, "%f\n", &Persons.altura);

    return Persons;
}

void ordenaVetor(PESSOA* Povo, int i)
{
    
    qsort(Povo, i, sizeof(PESSOA), cmp);
    
}

void fechaArquivo(FILE* Arq)
{
    fclose(Arq);
}


void CopiarConteudo(PESSOA Povo[10], FILE *arquivo2, int t){
    char ArquivoGravado[100] = "ArquivoGravado.txt";
    arquivo2 = fopen(ArquivoGravado, "wb");
    int i;
    for (i = 0; i < t; i++){
        fprintf(arquivo2, "%s\n %d\n %.2f\n", Povo[i].nome, Povo[i].idade, Povo[i].altura);

    }
    fclose(arquivo2);

}

int main()
{
    char ArquivoDados[100] = "ArquivoDados.txt";
    PESSOA Povo[10], P;
    FILE* Arq = abreArquivoAEntrada(ArquivoDados);
    int i = 0;
    
    if (abreArquivoAEntrada(ArquivoDados) != NULL)
    {
        do{
            P = leDadosUmaPessoa(Arq);
            Povo[i] = P;
            i++;
        }while(!feof(Arq));
        fechaArquivo(Arq);
        ordenaVetor(Povo, i);
        imprimeVetor(Povo, i);
        fclose(arquivo2);
    
    }
    else printf("Erro na abertura do arquivo");
    CopiarConteudo(Povo, arquivo2, i);
    return 0;
}