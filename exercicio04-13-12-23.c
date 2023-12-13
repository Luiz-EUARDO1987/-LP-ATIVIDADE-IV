#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
/*Exercício 4:Modele uma struct "ContaBancaria" que represente uma conta bancária com número da conta, nome do titular, saldo e tipo de conta 
(poupança ou corrente). Implemente funções para depositar e sacar dinheiro da conta, bem como para imprimir o saldo atual. Crie um programa que 
utilize essas funções para simular operações bancárias. Crie um menu para as operações disponíveis.*/
struct bankOfSenai
{
    int numeroConta;
    char nomeTitular[250];
    float saldo;
    char tipoConta[250];
}contaBancaria;
void depositoContaF(float valorF);
void saqueContaF(float valorSaqueF);
int main()
{
    contaBancaria.numeroConta=0001;
    strcpy(contaBancaria.tipoConta,"Corrente");
    strcpy(contaBancaria.nomeTitular,"Joao");
    contaBancaria.saldo=1250522.25;

    int menu=0;
    float valorMovimentado;
    do
    {
        printf("\n\t\tMenu de Operações Bancárias:\n\t");
        printf("1-Consultar Saldo.\n\t");
        printf("2-Retirada.\n\t");
        printf("3-Depositar.\n\t");
        printf("4-Encerrar Sessão.\n\tDigite a opção desejada: ");
        scanf("%i", &menu);
        getchar();
        system("cls || clear"); 

        switch (menu)
        {
        case /*consultar */1:
            printf("Id da conta: %i\n",contaBancaria.numeroConta);
            printf("\nNome do Titular: %s\n",contaBancaria.nomeTitular);
            printf("\nSaldo: R$ %.2f\n",contaBancaria.saldo);
            printf("Tipo da conta: %s\n",contaBancaria.tipoConta);
            sleep(3);
            system("cls || clear");
            break;
        
        case /* saque */2:
             printf("Digite o valor que deseja sacar\n\t");
            scanf("%f", &valorMovimentado);
            getchar();
            system("cls || clear"); 
            saqueContaF(valorMovimentado);
            break;
        
        case /* depositar */3:
             printf("Digite o valor que deseja depositar\n\t");
            scanf("%f", &valorMovimentado);
            getchar();
            system("cls || clear"); 
            depositoContaF(valorMovimentado);
            break;
        
        case /* sair */4:
            printf("Grato pela preferencia, volte sempre.");
            break;
        
        default:
            printf("erro");
            sleep(2);
            system("cls||clear");
            break;
        }
    } while (menu!=4);
}//fimMain
void depositoContaF(float valorF)
{
    contaBancaria.saldo=contaBancaria.saldo+valorF;
}
void saqueContaF(float valorSaqueF)
{
    contaBancaria.saldo=contaBancaria.saldo-valorSaqueF;
}