#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Exercício 5: 

Crie uma struct "Funcionario" com membros para nome, cargo e salário. Escreva uma função que recebe um array de funcionários e um cargo como 
parâmetro, e retorna a média salarial dos funcionários com esse cargo. Em seguida, implemente um programa que utiliza essa função para calcular e 
imprimir a média salarial dos programadores em uma empresa.*/
struct fichaFuncionarios
{
    char nome[250];
    char cargo[250];
    float salario;
}funcionarios[5];
float imprimeMediaSalarial(char funcionariosF[]);
int main()
{
    int i=0;
    char cargoMedia[250];
    float mediaSalarial=0;
    for ( i = 0; i < 5; i++)
    {
        printf("Digite o nome do %dº funcionário:\n\t",i+1);
        gets(funcionarios[i].nome);
        system("cls || clear");

        printf("Digite o cargo %d do funcionário\n\t",i+1);
        gets(funcionarios[i].cargo);
        system("clear || cls");

        printf("Digite o salario do funcionário: %d\n\t",i+1);
        scanf("%f",&funcionarios[i].salario);
        system("clear || cls");
        getchar();
    }
    printf("Digite o cargo para consultar sua media salarial.\n\t");
    gets(cargoMedia);
    system("cls || clear");
    mediaSalarial = imprimeMediaSalarial(cargoMedia);
    printf("cargo: %s\nMedia salarial: %.2f\n",cargoMedia,mediaSalarial);
}

//Escreva uma função que recebe um array de funcionários e um cargo como parâmetro, e retorna a média salarial dos funcionários com esse cargo
float imprimeMediaSalarial(char funcionariosF[])
{
    int i;
    float soma = 0, media=0;
    char cargoMedia[250];
    strcpy(cargoMedia,funcionariosF);
   for ( i = 0; i < 5; i++)
   {
        if (strcmp(cargoMedia,funcionarios[i].cargo))
        {
           soma+=funcionarios[i].salario;
        }
   }
   media = soma/(float)5;
   return media;
}