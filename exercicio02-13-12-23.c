#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*Exercício 2: 
Crie uma função chamada "calcularMedia" que recebe como parâmetro uma struct "Aluno", 
esta struct terá informações como: nome, data de nascimento, duas notas e média e retorna a média das notas. 
Em seguida, crie um programa que declare um array de 5 alunos e utilize a função "calcularMedia" para imprimir
 a média de cada aluno. Também crie uma função para verificar se um aluno está aprovado ou reprovado sendo
  necessário média maior ou igual a 7,0 para aprovação.*/
  float calcularMedia(float mediaF, int nalunoF);//utilize a função "calcularMedia" para imprimir a média de cada aluno.
    char* estado(float media);
    struct fichaAluno
    {
        char nome[250];
        int dataNascimento;
        float notas[2];
        float media;
    }aluno[5];
int main()
{
    //struct terá informações como: nome, data de nascimento, duas notas e média
    int i,e;
    float somanotas,mediaG;
    char RetornoEstado[250];
    for(i=0;i<5;i++)
    {
        printf("Digite o nome do aluno: %i\n",i+1);
        gets(aluno[i].nome);
        system("cls || clear");
        
        
        printf("Digite o ano de nascimento do aluno: %i\n",i+1);
        scanf("%i", &aluno[i].dataNascimento);
        system("cls || clear");
        
        for ( e = 0; e < 2; e++)
        {
            printf("Digite a nota: %i\n",e+1);
            scanf("%f", &aluno[i].notas[e]);
            system("cls || clear");
            getchar();
           // printf("nota: %f\n",aluno[i].notas[e]);
            somanotas += aluno[i].notas[e];
        }
       aluno[i].media = calcularMedia(somanotas,e);
    
    }//fimfor
for ( i = 0; i < 5; i++)
{
    strcpy(RetornoEstado,estado(aluno[i].media));
    printf("nome: %s\n",aluno[i].nome);
    printf("Idade: %i\n",2023-aluno[i].dataNascimento);
    for ( e = 0; e < 2; e++)
    {
        printf("Notas: %.2f\n",aluno[i].notas[e]); 
    }
    printf("Media: %.2f\n",aluno[i].media);
    printf("Estado: %s\n",RetornoEstado);
}//fimFor

}

char* estado(float mediaF)
{
    char RetornoEstado[250];
    if (mediaF>=7)
    {
        strcpy(RetornoEstado,"Aprovado");
    }
    else
    {
        strcpy(RetornoEstado,"Reprovado");
    }
    
    return RetornoEstado;
}
float calcularMedia(float mediaF, int nAlunoF)
{
    float mediaG;
     mediaG = mediaF/(float)nAlunoF;
    return mediaG;
}