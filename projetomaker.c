#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
    //setlocale(LC_ALL,"Portuguese");

    int opcao, idade, qtdfamilia, telefone, doacaoresp, x;
    float renda, rendapercapita, desconto, doacao;
    char endereco[80] = "a", nome[50];

    printf("Seja bem-vindo ao Friend Code\n");
    

    printf("\nMenu de opcoes .:\n1 - Comprar\n2 - Sair\nOpcao .: ");
    scanf("%d", &opcao); // Verificar se essa opcao é valida (deve ser 1 ou 2), pode acrescentar mais opcoes se quiser sl
    fflush(stdin);       // eu to usando esse comando para limpar o resto que fica armazenado, se nao limpar nao da para usar o gets().
    while (opcao != 1 && opcao != 2)
    {
        printf("Digite uma opcao valida(1 ou 2)\n");
        system("pause");
        system("cls");
        printf("\nMenu de opcoes .:\n1 - Comprar\n2-Sair\nOpcao .: ");
        scanf("%d", &opcao);
    }

    if (opcao == 2) // se digitar 2 termina o programa lol
    {
        printf("Obrigado por visitar a FriendCode!\n");
        system("pause");
        system("cls");
        return 0;
    }

    // Entrada de dados

    printf("Digite seu nome.: ");
    gets(nome); // verificar se o nome digitado foi é string realmente.
    /*while (nome )
    {
        if (nome > 0 || nome < 0)
        {
            printf("Voce digitou o nome errado\n");
            printf("Digite seu nome.: ");
            gets(nome);
        }
        
        
    }*/

    printf("Digite sua idade .: ");
    scanf("%d", &idade); // tem que verificar se a idade esta correta (deve ter pelo menos 1 ano e no max 122 anos)
    fflush(stdin);
    while (idade < 0 || idade > 122) // verificando se a idade esta correta
    {
        printf("\nDigite uma idade valida (entre 0 e 122)\n");
        printf("Digite sua idade .: ");
        scanf("%d", &idade);
        fflush(stdin);
    }

    printf("Digite seu endereco\n(No formato 'Rua XXX - n - complemento(se houver))\nEndereco.: ");
    gets(endereco); // verificar o endereco ? não sei bem como fazer isso não.
    //fflush(stdin);
    printf("Digite seu telefone\n(No formato DD xxxxx-xxxx)\nTelefone.: "); 
    scanf("%d", &telefone); // tem que verificar se o num de telefone esta certo (tem que ter 9 digitos etc)
    printf("Digite sua Renda total.: ");
    scanf("%f", &renda); // acho que nao precisa verificar isso (?).
    printf("Quantas pessoas moram na mesma casa que voce.: ");
    scanf("%d", &qtdfamilia); // tem que ser pelo menos 1 pessoa

    while (qtdfamilia <= 0) // verificando se a quantidade de familia e valida
    {
        printf("Digite uma quantidade de pessoas valida (Pelo menos 1)\n");
        printf("\nQuantas pessoas moram na mesma casa que voce.: ");
        scanf("%d", &qtdfamilia);
    }

    // Processamento de dados

    rendapercapita = renda / (float)qtdfamilia;

    if (rendapercapita < 1000)
    {
        printf("\nVoce tem direito a um desconto de 70%% no valor final da compra\n");
        desconto = 0.3; // usei o 0.3 pois ja vai dar o valor final quando multiplicar.
    }
    else if (rendapercapita < 2000)
    {
        printf("\nVoce tem direito a um desconto de 50%% no valor final da compra\n");
        desconto = 0.5; // usei o 0.5 pois ja vai dar o valor final quando multiplicar.
    }
    else if (rendapercapita < 3000)
    {
        printf("\nVoce tem direito a um desconto de 30%% no valor final da compra\n");
        desconto = 0.7; // usei o 0.7 pois ja vai dar o valor final quando multiplicar.
    }
    else if (rendapercapita < 4000)
    {
        printf("\nVoce tem direito a um desconto de 10%% no valor final da compra\n");
        desconto = 0.9; // usei o 0.9 pois ja vai dar o valor final quando multiplicar.
    }
    else if (rendapercapita > 4000)
    {
        printf("\nInfelizmente voce nao tem direito a desconto\n");
    }

    if (rendapercapita > 2000) // verificando se quer doar ou nao
    {
        printf("\nVoce deseja doar algum valor para ajudar no custeio do curso das pessoas mais pobres?\n"
               "Caso deseje doar voce vai estar concorrendo a um premio\n"
               "Doando de R$20 ate R$50 ganha 1 ticket\n"
               "Doando de R$50 ate R$80 ganha 2 tickets\n"
               "Doando acima de R$80 ganha 3 ticket\n"
               "Deseja doar ?\n1-Sim\t2-Nao\n"
               "Resposta .: ");
        scanf("%d", &doacao);
        while (doacao != 1 && doacao != 2) // verificando se o num digitado foi o correto 1 ou 2 no caso
        {
            printf("Digite uma opcao valida '1' para Sim e '2' para Nao\n");
            printf("\nVoce deseja doar algum valor para ajudar no custeio do curso das pessoas mais pobres?\n"
                   "Caso deseje doar voce vai estar concorrendo a um premio\n"
                   "Doando de R$20 ate R$50 ganha 1 ticket\n"
                   "Doando de R$50 ate R$80 ganha 2 tickets\n"
                   "Doando acima de R$80 ganha 3 ticket\n"
                   "Deseja doar ?\n1-Sim\t2-Nao\n"
                   "Resposta .: ");
            scanf("%d", &doacaoresp);
        }
        if (doacaoresp == 1)
        {
            printf("Qual valor deseja doar .: ");
            scanf("%f", &doacao);
        }
    }

    // Saída de dados
    // comentario novo
    printf("%s\n", nome);
    printf("%s\n", endereco);
    printf("%d\n", idade);
    printf("%.2f\n", renda);
    printf("%d\n", qtdfamilia);
    printf("%.2f\n", rendapercapita);
    printf("\n---------------------RESULTADOS-------------------\n");

    return 0;
}
