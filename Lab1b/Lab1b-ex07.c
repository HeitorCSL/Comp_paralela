#include <stdio.h>
#include <string.h>

typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
{
    float Peso;   // define o campo Peso
    int Idade;    // define o campo Idade
    float Altura; // define o campo Altura
} Pessoa; // Define o nome do novo tipo criado

void ImprimePessoa(Pessoa P)
{
  printf("Idade: %d  Peso: %f Altura: %f\n", P.Idade, P.Peso, P.Altura);
}

void SetPessoa(Pessoa *P, int idade, float peso, float altura)
{ // Nesta função o parâmetro P é um ponteiro para uma struct
    (*P).Idade = idade;  // o campo pode ser acessado desta forma
    P->Peso = peso;      // ou desta
    P->Altura = altura;
}
   
int main()
{
    char nome1[60];
    int idad1;
    float peso1;
    float altura1;
    char nome2[60];
    int idad2;
    float peso2;
    float altura2;
    char nome3[60];
    int idad3;
    float peso3;
    float altura3;
    printf ("Digite o primeiro nome: ");
    scanf("%s",&nome1);
    printf ("Digite a idade:");
    scanf("%d",&idad1);
    printf ("Digite o peso:");
    scanf("%f",&peso1);
    printf ("Digite o altura:");
    scanf("%f",&altura1);
    printf("\n");
    printf ("Digite o segundo nome: ");
    scanf("%s",&nome2);
    printf ("Digite a idade:");
    scanf("%d",&idad2);
    printf ("Digite o peso:");
    scanf("%f",&peso2);
    printf ("Digite o altura:");
    scanf("%f",&altura2);
    printf("\n");
    printf ("Digite o terceiro nome: ");
    scanf("%s",&nome3);
    printf ("Digite a idade:");
    scanf("%d",&idad3);
    printf ("Digite o peso:");
    scanf("%f",&peso3);
    printf ("Digite o altura:");
    scanf("%f",&altura3);
    printf("\n");
    printf("Nome: %s",nome1);
    printf("\n");
    Pessoa nom1;
    SetPessoa(&nom1, idad1, peso1, altura1);
    ImprimePessoa(nom1);
    printf("\n");
    printf("Nome: %s",nome2);
    printf("\n");
    Pessoa nom2;
    SetPessoa(&nom2, idad2, peso2, altura2);
    ImprimePessoa(nom2);
    printf("\n");
    printf("Nome: %s",nome3);
    printf("\n");
    Pessoa nom3;
    SetPessoa(&nom3, idad3, peso3, altura3);
    ImprimePessoa(nom3);

    return 0;
}