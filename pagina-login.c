//TELA DE LOGIN
#include <stdio.h> 

void main () {
//Variaveis locais
int SENHAADM = 148; //Senha do ADM constante 
int opcao, resp1, resp; //opcao do Switch, resp1 senha do usuario, resp do While (Loop) 


//Criando opção para o usuário
printf("Digite 1 para ADM:\n");
printf("Digite 2 para Usuario: \n");

do {

scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
            //Leva o usuário para a tela "telainicial.exe"
            do {
                printf("Usuario: ADM \n");
                printf("Senha: ");
                scanf("%d", &resp1);
                if(resp1 == SENHAADM){ //Senha Adm
                printf("tela usuario teste \n");
                //Aqui o usuário é levado a tela do ADM
                } else {
                printf("senha incorreta, tente novamente \n");
                resp = 0;
                }
            } while (resp == 0);
            break;
        case 2: 
            do {
                printf("Usuario: \n");
                printf("Senha: ");
                scanf("%d", &resp1);
                if(resp1 == 1){ //Senha do usuário; 
                printf("tela usuario");
                //Aqui o usuário é levado a tela do usuário
                } else {
                printf("senha incorreta, tente novamente \n");
                resp = 0;
                }
            } while (resp == 0);
            break;
        default:
            printf("Por favor digite um valor valido \n");
            break;
    }
    
} while (opcao > 2);
   
}