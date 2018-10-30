//TELA DE LOGIN
#include <stdio.h> 

//FUNCAOES
    //Funcao login CRIACÃO DA FUNCAO PARA ESCOLHER OPCAO DE MENU DO PROGRAMA
void telalogin()
{
//variaveis locais - telalogin
    int SENHAADM = 148; //Senha do ADM constante 
    int opcao, resp1, resp; //opcao do Switch, resp1 senha do usuario, resp do While (Loop) 

do{
//Criando opção para o usuário
    printf("Digite 1 para ADM:\n");
    printf("Digite 2 para Usuario: \n");

    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
            do {
                printf("Usuario: ADM \n");
                printf("Senha: ");
                scanf("%d", &resp1);
                if(resp1 == SENHAADM){ //Senha Adm
                    printf("tela usuario teste \n");
                    //VAI ENTRAR FUNCAO Aqui o usuário é levado a tela do ADM
                    return;
                } else {
                    printf("senha incorreta, tente novamente \n");
                    resp = 0;
                }
            } while (resp == 0); //E caso o usuário não queira mais? fazer funcao ou scape. 
        case 2: 
            do {
                printf("Usuario: \n");
                printf("Senha: ");
                scanf("%d", &resp1);
                if(resp1 == 1){ //Senha do usuário; 
                    printf("tela usuario \n");
                    //VAI ENTRAR FUNCAO Aqui o usuário é levado a tela do usuário
                    return;
                } else {
                    printf("senha incorreta, tente novamente \n");
                    resp = 0;
                }
            } while (resp == 0); //E caso o usuário não queira mais? fazer funcao ou scape. 
        default:
            printf("Por favor digite um valor valido \n");
    }
    
} while (opcao > 2);

}
 
void main () {
//Variaveis locais

telalogin(); ////Funcao login 
printf("retorno \n");

}


