#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


void curso1(opcao);     //curso 1
void curso2(opcao);    //curso 2 
void curso3(opcao);   //curso 3 

int opcao;

int main()
{
	int opcao; //vaiavel local utilizada na função main
		
	do
    
    {
        printf("|-----------------------------------|\n"); // TELA INICIAL
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|   Seja bem-vindo ao Friend Code   |\n");
        printf("|                                   |\n");
        printf("|                                   |\n");
        printf("|-----------------------------------|\n");


        printf("\n\tEscolha o curso desejado..:\n\n");
        printf("1. Curso Back-End\n");
        printf("2. Curso DevOps\n");
        printf("3. Curso Front-End\n");
        printf("0. Sair\n");

        scanf("%d", &opcao);
        system("cls");

        switch(opcao)
        {
        	case 0:
            	printf("Saindo do menu...");                
                break;
        	
            case 1:
            	system("cls");
                curso1();
                break;

            case 2:
            	system("cls");
                curso3();
                break;

            case 3:
            	system("cls");
                curso2();
                break;
                
                
           
            default:
                printf("Opcao nao valida, tente novamente!\n");
        }
        
    } while(opcao != 0);
    
    
    return 0;
    
} //fim função ou método main

void curso1
() //Aqui é o menu do curso 1
{
	
    {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 1
         printf("|               BACK-END               |\n");
         printf("|--------------------------------------|\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * Introducao a logica        |\n");
         printf("|         * Algoritmo                  |\n");
         printf("|         * Python                     |\n"); 
         printf("|         * C/C++                      |\n");
         printf("|         * 10 Projetos                |\n");
         printf("|--------------------------------------|\n");
         printf("| 1-COMPRAR 2-CURSOS 0-MENU PRINCIPAL  |\n");
         printf("|--------------------------------------|\n");
         
        scanf("%d", &opcao);

          if (opcao ==0)
            {
                system("cls");
                main();
            }
          while (opcao != 1 && opcao != 2 && opcao!=0) // tratando erro (menu CURSO 1)
        {
             system("cls");
             printf("\n|--------------------------------------|\n"); // Menu CURSO 1
             printf("|               BACK-END               |\n");
             printf("|--------------------------------------|\n");
             printf("|           OPECAO INVALIDA            |\n");
             printf("|                                      |\n");
             printf("|          CONTEUDO DO CURSO            |\n");
             printf("|                                      |\n");
             printf("|         * Introducao a logica        |\n");
             printf("|         * Algoritmo                  |\n");
             printf("|         * Python                     |\n"); 
             printf("|         * C/C++                      |\n");
             printf("|         * 10 Projetos                |\n");
             printf("|--------------------------------------|\n");
             printf("| 1-COMPRAR 2-CURSOS 0-MENU PRINCIPAL  |\n");
             printf("|--------------------------------------|\n");
             scanf("%d", &opcao);
             if (opcao ==0)
            {
                system("cls");
                main();
            }
        }
    }
}
     

void curso2() //Aqui é o menu do curso 2
{
	
    {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 2
         printf("|              FRONT-END               |\n");
         printf("|--------------------------------------|\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * HTML e CSS                 |\n");
         printf("|         * JavaScript                 |\n"); 
         printf("|         * FrameWorks                 |\n");
         printf("|         * 5 Projetos                 |\n");
         printf("|--------------------------------------|\n");
         printf("| 1-COMPRAR 2-CURSOS 0-MENU PRINCIPAL  |\n");
         printf("|--------------------------------------|\n");
         
        scanf("%d", &opcao);

          if (opcao ==0)
            {
                system("cls");
                main();
            }
          while (opcao != 1 && opcao != 2 && opcao!=0) // tratando erro (menu CURSO 2)
        {
             system("cls");
             printf("\n|-----------------------------------|\n"); // Menu CURSO 2
             printf("|              FRONT-END              |\n");
             printf("|-------------------------------------|\n");
             printf("|          OPECAO INVALIDA            |\n");
             printf("|                                     |\n");
             printf("|         CONTEUDO DO CURSO           |\n");
             printf("|                                     |\n");
             printf("|        * HTML e CSS                 |\n");
             printf("|        * JavaScript                 |\n"); 
             printf("|        * FrameWorks                 |\n");
             printf("|        * 5 Projetos                 |\n");
             printf("|-------------------------------------|\n");
             printf("| 1-COMPRAR 2-CURSOS 0-MENU PRINCIPAL |\n");
             printf("|-------------------------------------|\n");
             scanf("%d", &opcao);
             if (opcao ==0)
            {
                system("cls");
                main();
            }
        }
    }
}

void curso3() //Aqui é o menu do curso 3
{
	
    {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 2
         printf("|               DEVOPS                 |\n");
         printf("|--------------------------------------|\n");
         printf("|                                      |\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * Redes e Seguranca          |\n");
         printf("|         * Cloud Computing            |\n"); 
         printf("|         * IoT(internet das cosias)   |\n");
         printf("|         * Embarcados                 |\n");
         printf("|--------------------------------------|\n");
         printf("| 1-COMPRAR 2-CURSOS 0-MENU PRINCIPAL  |\n");
         printf("|--------------------------------------|\n");
         
        scanf("%d", &opcao);

          if (opcao ==0)
            {
                system("cls");
                main();
            }
          while (opcao != 1 && opcao != 2 && opcao!=0) // tratando erro (menu CURSO 2)
        {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 2
         printf("|               DEVOPS                 |\n");
         printf("|--------------------------------------|\n");
         printf("|           OPECAO INVALIDA            |\n");
         printf("|                                      |\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * Redes e Segurança          |\n");
         printf("|         * Cloud Computing            |\n"); 
         printf("|         * IoT(internet das cosias)   |\n");
         printf("|         * Embarcados                 |\n");
         printf("|--------------------------------------|\n");
         printf("| 1-COMPRAR 2-CURSOS 0-MENU PRINCIPAL  |\n");
         printf("|--------------------------------------|\n");
         
             scanf("%d", &opcao);
             if (opcao ==0)
            {
                system("cls");
                main();
            }
        }
    }
}
//fim da função