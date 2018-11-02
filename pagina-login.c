/*  TELA DE LOGIN   */

#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"

/*  FUNCOES
    FUNCAO RETORNOMENU
    CRIACAO DA FUNCAO DE RETORNO, CASO O USUARIO QUEIRA VOLTAR AO MENU DE LOGIN */

/* 

void retornoMenu()
{

    do
    {

        printf("Deseja retornar ao menu? [s/n]\n");

        char retornoMenu;;
        retornoMenu = getchar();

        switch(retornoMenu)
        {
            case 's':

                printf("Retorna ao Menu!\n");

            break;
            case 'S':

                printf("Retorna ao Menu!\n");

            break;

            /*  Isso previne caso seja digitado em letra maiuscula ou minuscula
                e caso não for nenhum dos dois deve perguntar novamente.
            

            case 'n':

                printf("Não retorna ao Menu!\n");

            break;
            case 'N':

                printf("Não retorna ao Menu!\n");

            break;
            
            default:
                printf("Opcão invalida!");
            break;
        }
        while(1);

}

*/

//FUNCAO LOGIN 
/*CRIACÃO DA FUNCAO PARA ESCOLHER OPCAO DE MENU DO PROGRAMA*/
void telaLogin() //EM MUDANÇA 
{

        int SENHAADM = 148; //Senha do ADM constante 
        int opcao, resp1, resp; //opcao do Switch, resp1 senha do usuario, resp do While (Loop) 

    do
    {
    
        // Criando opção para o usuário

        system("clear");

        printf("Digite 1 para ADM\n");
        printf("Digite 2 para Usuario\n");
        scanf("%d%*c", &opcao);
        
        switch (opcao)
        {
        
            case 1:

                do 
                {

                    printf("Usuario: ADM \n");
                    printf("Senha: ");
                    scanf("%d", &resp1);
                    
                    if(resp1 == SENHAADM)
                    { //Senha Adm

                        printf("tela usuario teste \n");
                        //VAI ENTRAR FUNCAO Aqui o usuário é levado a tela do ADM
                        return; //teste

                    } 
                    else
                    {
                        
                        printf("senha incorreta, tente novamente \n");
                        menuInicial();
                        
                        // retornoMenu(); //FUNCAO /* EM TESTE PARA FAZER RETORNAR AO MENU DE ESCOLHAS*/
                        resp = 0;

                    }

                }
                while (resp == 0); //E caso o usuário não queira mais? fazer funcao ou scape. 

            break;

            case 2: 

                do
                {
                
                    printf("Usuario: \n");
                    printf("Senha: ");
                    scanf("%d", &resp1);
                
                    if(resp1 == 1)
                    { //Senha do usuário; 
                    
                        printf("tela usuario \n");
                        //VAI ENTRAR FUNCAO Aqui o usuário é levado a tela do usuário
                        return; //teste

                    } 
                    else
                    {

                        printf("senha incorreta, tente novamente \n");
                        resp = 0;

                    }

                }
                while (resp == 0); //E caso o usuário não queira mais? fazer funcao ou scape. 

            break;

            default:
                printf("Por favor digite um valor valido \n");
            break;    
        }
        
    } while (opcao > 2 || opcao  < 0);

}



