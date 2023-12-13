#include<stdio.h>
#include<stdlib.h>
//Crie uma struct Contato para representar informações de contatos, incluindo nome, número de telefone e email.
struct ContatoPessoal
{
    char nome[250];
    int telefone;
    char eMail[250];
}contato[3];
int retornoTelefone(char nome[]);
int main()
{
    /*Exercício 1: 
    Crie uma struct Contato para representar informações de contatos, incluindo nome, número de telefone e email.
   Solicite que o usuário cadastre 3 contatos. Escreva uma função que recebe um nome como parâmetro,
    e retorna o número de telefone correspondente a esse nome. Em seguida, implemente um programa que utiliza
   essa função para buscar e imprimir o número de telefone de um contato específico.
*/
//Solicite que o usuário cadastre 3 contatos
int i, telefone;
char nome[250];
for ( i = 0; i < 3; i++)
{
   printf("Digite seu nome. %i\n",i+1);
   gets(contato[i].nome);
   system("cls || clear");

   printf("Digite seu telefone. %i\n",i+1);
   scanf("%i", &contato[i].telefone);
   system("cls || clear");
   getchar();

   printf("Digite seu email.\n");
   fgets(contato[i].eMail,250,stdin);
   system("cls || clear");
}
    printf("Digite seu nome.\n");
    gets(nome);
    system("cls || clear");

    telefone = retornoTelefone(nome);//Escreva uma função que recebe um nome como parâmetro,e retorna o número de telefone correspondente a esse nome
    printf("Nome: %s\n",nome);
    printf("Telefone: %i\n",telefone);
}

int retornoTelefone(char nome[])
{
    int i,telefone;
    for ( i = 0; i < 3; i++)
{
   
   if (strcmp(nome,contato[i].nome)==0)
   {
        telefone=contato[i].telefone;
   }
}
return telefone;
}