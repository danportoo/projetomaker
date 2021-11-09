#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>



void curso1(opcao);   //curso 1
void curso2(opcao);   //curso 2 
void curso3(opcao);   //curso 3 
void curso4(opcao);   //curso 4 
void curso5(opcao);   //curso 5 
void curso6(opcao);   //curso 6
void curso7(opcao);   //curso 7 
void curso8(opcao);   //curso 8 
void telaLogin(opcao); //login admin

int opcao, login, login1, senha,senha1, login_efetuado=0;

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
        printf("4. Curso Mobile\n");
        printf("5. Curso Data Science\n");
        printf("6. Curso UX & Desing \n");
        printf("7. Curso inovacao e Gestao\n");
        printf("8. Curso Seguranca da Informacao\n");
        printf("9. admin\n");
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
			
	    case 4:
                system("cls");
                curso4();
                break;
                
            case 5:
                system("cls");
                curso5();
                break;    

            case 6:
                system("cls");
                curso6();
                break;

            case 7:
                system("cls");
                curso7();
                break;

            case 8:
                system("cls");
                curso8();
                break;

            case 9:
                system("cls");
                telaLogin();
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
         printf("\n|--------------------------------------|\n"); // Menu CURSO 3
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
          while (opcao != 1 && opcao != 2 && opcao!=0) // tratando erro (menu CURSO 3)
        {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 3
         printf("|               DEVOPS                 |\n");
         printf("|--------------------------------------|\n");
         printf("|           OPCAO INVALIDA            |\n");
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

void curso4() //Aqui é o menu do curso 4
{
    {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 4
         printf("|               MOBILE                 |\n");
         printf("|--------------------------------------|\n");
         printf("|                                      |\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * React Native               |\n");
         printf("|         * Flutter                    |\n"); 
         printf("|         * Kotlin                     |\n");
         printf("|         * Ios e Swift                |\n");
         printf("|--------------------------------------|\n");
         printf("| 1-COMPRAR 2-CURSOS 0-MENU PRINCIPAL  |\n");
         printf("|--------------------------------------|\n");
         
        scanf("%d", &opcao);

          if (opcao ==0)
            {
                system("cls");
                main();
            }
          while (opcao != 1 && opcao != 2 && opcao!=0) // tratando erro (menu CURSO 4)
        {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 4
         printf("|               MOBILE                 |\n");
         printf("|--------------------------------------|\n");
         printf("|           OPCAO INVALIDA            |\n");
         printf("|                                      |\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * React Native               |\n");
         printf("|         * Flutter                    |\n"); 
         printf("|         * Kotlin                     |\n");
         printf("|         * Ios e Swift                |\n");
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

void curso5() //Aqui é o menu do curso 5
{
    {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 5
         printf("|             DATA SCIENCE             |\n");
         printf("|--------------------------------------|\n");
         printf("|                                      |\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * Ciencia de dados           |\n");
         printf("|         * BI                         |\n"); 
         printf("|         * SQL                        |\n");
         printf("|         * Banco de dados             |\n");
         printf("|--------------------------------------|\n");
         printf("| 1-COMPRAR 2-CURSOS 0-MENU PRINCIPAL  |\n");
         printf("|--------------------------------------|\n");
         
        scanf("%d", &opcao);

          if (opcao ==0)
            {
                system("cls");
                main();
            }
          while (opcao != 1 && opcao != 2 && opcao!=0) // tratando erro (menu CURSO 5)
        {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 5
         printf("|             DATA SCIENCE             |\n");
         printf("|--------------------------------------|\n");
         printf("|           OPCAO INVALIDA            |\n");
         printf("|                                      |\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * Ciencia de dados           |\n");
         printf("|         * BI                         |\n"); 
         printf("|         * SQL                        |\n");
         printf("|         * Banco de dados             |\n");
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

void curso6() //Aqui é o menu do curso 6

{
    {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 6
         printf("|              UX & DESING             |\n");
         printf("|--------------------------------------|\n");
         printf("|                                      |\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * Photoshop e Illustrator    |\n");
         printf("|         * Usabilidade e UX           |\n"); 
         printf("|         * Video e Motion             |\n");
         printf("|         * 3D                         |\n");
         printf("|--------------------------------------|\n");
         printf("| 1-COMPRAR 2-CURSOS 0-MENU PRINCIPAL  |\n");
         printf("|--------------------------------------|\n");
         
        scanf("%d", &opcao);

          if (opcao ==0)
            {
                system("cls");
                main();
            }
          while (opcao != 1 && opcao != 2 && opcao!=0) // tratando erro (menu CURSO 6)
        {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 6
         printf("|              UX & DESING             |\n");
         printf("|--------------------------------------|\n");
         printf("|           OPCAO INVALIDA            |\n");
         printf("|                                      |\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * Photoshop e Illustrator    |\n");
         printf("|         * Usabilidade e UX           |\n"); 
         printf("|         * Video e Motion             |\n");
         printf("|         * 3D                         |\n");
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

void curso7() //Aqui é o menu do curso 7

{
    {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 7
         printf("|           INOVACAO & GESTAO          |\n");
         printf("|--------------------------------------|\n");
         printf("|                                      |\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * Metodologias Ageis         |\n");
         printf("|         * Softskills                 |\n"); 
         printf("|         * Liderança e Gestao         |\n");
         printf("|         * Startups                   |\n");
         printf("|--------------------------------------|\n");
         printf("| 1-COMPRAR 2-CURSOS 0-MENU PRINCIPAL  |\n");
         printf("|--------------------------------------|\n");
         
        scanf("%d", &opcao);

          if (opcao ==0)
            {
                system("cls");
                main();
            }
          while (opcao != 1 && opcao != 2 && opcao!=0) // tratando erro (menu CURSO 7)
        {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 7
         printf("|           INOVACAO & GESTAO          |\n");
         printf("|--------------------------------------|\n");
         printf("|           OPCAO INVALIDA             |\n");
         printf("|                                      |\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * Métodologias Ágeis         |\n");
         printf("|         * Softskills                 |\n"); 
         printf("|         * Liderança e Gestão         |\n");
         printf("|         * Startups                   |\n");
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

void curso8() //Aqui é o menu do curso 8

{
    {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 7
         printf("|        SEGURANÇA DA INFORMACAO       |\n");
         printf("|--------------------------------------|\n");
         printf("|                                      |\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * LGPD                       |\n");
         printf("|         * Redes e Firewall           |\n"); 
         printf("|         * GRC                        |\n");
         printf("|         * ISO 27001                  |\n");
         printf("|--------------------------------------|\n");
         printf("| 1-COMPRAR 2-CURSOS 0-MENU PRINCIPAL  |\n");
         printf("|--------------------------------------|\n");
         
        scanf("%d", &opcao);

          if (opcao ==0)
            {
                system("cls");
                main();
            }
          while (opcao != 1 && opcao != 2 && opcao!=0) // tratando erro (menu CURSO 7)
        {
         system("cls");
         printf("\n|--------------------------------------|\n"); // Menu CURSO 7
         printf("|        SEGURANÇA DA INFORMACAO       |\n");
         printf("|--------------------------------------|\n");
         printf("|           OPCAO INVALIDA            |\n");
         printf("|                                      |\n");
         printf("|          CONTEUDO DO CURSO           |\n");
         printf("|                                      |\n");
         printf("|         * LGPD                       |\n");
         printf("|         * Redes e Firewall           |\n"); 
         printf("|         * GRC                        |\n");
         printf("|         * ISO 27001                  |\n");
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

void telaLogin() // função de tela de login para entrar no admin do site//
{

    char login[15] = "teste";
    char login1[15];
    char senha[15] = "teste";
    char senha1[15];        
    int login_efetuado = 0; //0 - Falso e  1 - Verdadeiro

    while(!login_efetuado)
    {
        printf("Digite o Login: ");
        scanf("%s", login1);

        printf("Digite a Senha: ");
        scanf("%s", senha1);

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0)
        {
            printf("\n\nLOGADO!\n\n");
            login_efetuado = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");    
    
        if (login_efetuado=1)
        {
            //menu de admin do curso//             
        }
    }

}
//fim da função
