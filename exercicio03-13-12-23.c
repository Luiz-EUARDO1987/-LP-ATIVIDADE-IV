#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
/*Desenvolva uma struct "Produto" que contenha informações como nome, preço e quantidade em estoque. 
Em seguida, desenvolva um menu para facilitar a escolha das opções:*/
struct estoqueProdutos
{
    char nome[250];
    float preco;
    int quantidade;
}produto[2];
float valorTotalEstoque(float valorF,int quantidadeF);
int menosCompraEstoque(int compraquantidadeF,int numeroF);
int main()
{
    int menu;
    int i;
    int compraquantidade;
    char nomeProduto[250];
       strcpy(produto[0].nome,"mause");
       produto[0].preco=52.5;
       produto[0].quantidade=500;

       strcpy(produto[1].nome,"teclado");
       produto[1].preco=25.25;
       produto[1].quantidade=1000;
    
    
do
{
    
    /*1 - Realizar uma compra
2 - Consultar estoque
3 - Sair do programa. */

printf("-------------Menu-------------\n");
printf("1-----Realizar uma compra-----\n");
printf("2-----consultar estoque--------\n");
printf("3-----sair do programa--------\n\t");
scanf("%i", &menu);
getchar();
system("cls || clear");
/*Escreva funções necessárias para calcular o valor total em estoque do produto e para atualizar a quantidade em
 estoque com base em uma compra. Crie um programa que utiliza essas funções para um produto.
*/
    switch (menu)
    {
    case /* Compra */ 1 :
        printf("Digite o nome do produto que deseja comprar.\n");
        gets(nomeProduto);
        system("cls || clear");
        for ( i = 0; i < 2; i++)
        {
        if (strcmp(nomeProduto,produto[i].nome)==0)
        {
           printf("Digite a quantidade da compra.\n");
           scanf("%i", &compraquantidade);
            system("cls || clear");

            menosCompraEstoque(compraquantidade,i);
            printf("Produto: %s\nPreco: %.2f\nvalor total da compra: R$%.2f\n",produto[i].nome,produto[i].preco,produto[i].preco*compraquantidade);
            sleep(2);
            system("cls || clear");

        }
        else{
            printf("Produto não encontrado.\n");
            system("cls || clear");
            sleep(2);
        }
        }  
        break;
   
    case /* consultar estoque */ 2 :
        printf("Digite o nome do produto que deseja consultar.\n");
        gets(nomeProduto);
        system("cls || clear");
        for ( i = 0; i < 2; i++)
        {
        if (strcmp(nomeProduto,produto[i].nome)==0)
        {
            menosCompraEstoque(compraquantidade,i);
            printf("Produto: %s\nPreco: %.2f\nvalor total da compra: R$%.2f\nValor total do estoque: R$%.2f\n",produto[i].nome,produto[i].preco,produto[i].preco,valorTotalEstoque(produto[i].preco,i));
            sleep(2);
            system("cls || clear");
        }
        else{
            printf("Produto não encontrado.\n");
            system("cls || clear");
            sleep(2);
        }
        } 
        
        break;
   
    case /* sair */ 3 :
       printf("Grato pela preferencia");
        break;

    default:
        printf("Erro opcao invalida\n");
        sleep(2);
        system("cls || clear");
        break;
    }
    
} while (menu!=3);
}

//Escreva funções necessárias para calcular o valor total em estoque do produto
float valorTotalEstoque(float valorF,int quantidadeF)
{
    float valorTotal;
    valorTotal= valorF*(float)quantidadeF;
    return valorTotal;
}

//para atualizar a quantidade e mestoque com base em uma compra
int menosCompraEstoque(int compraquantidadeF,int numeroF)
{ 
    int i = numeroF;
    produto[i].quantidade =produto[i].quantidade-compraquantidadeF;
   
}