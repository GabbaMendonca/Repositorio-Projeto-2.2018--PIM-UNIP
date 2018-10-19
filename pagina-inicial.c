//TELA INICIAL
#include <stdio.h>

void main () {
//Variaveis locais
int opcao;



    printf("Ola, por favor escolha uma das opcoes abaixo: \n\n");
do { //Verificação se número digitado é válido. 
    //Informação para o usuário
    printf("Para ALUNO          digite: 1 \n");
    printf("Para PROFESSOR      digite: 2 \n");
    printf("Para PALESTRANTE    digite: 3 \n");
    printf("Para CONVIDADO      digite: 4 \n");
    printf("Para FUNCIONARIO    digite: 5 \n");

    printf("Opcao escolhida: ");
    scanf("%d", &opcao);
    /*
    PENSANDO EM CRIAR UM IF OU LAÇO, CASO O USUARIO QUEIRA MUDAR DE OPCAO
    */
    
    //PENSANDO SE ESTE SWTICH FOR UMA FUNÇÃO, PODEMOS FAZER O USUÁRIO VOLTAR ATRÁS.
    switch (opcao){ //Abrindo o SWITCH
        
        case 1:
            printf("teste1");
            //Entrar-la na função do ALUNO/TELA
            opcao = 0; //Opcao recebe 6 para sair do Looping While
            break;
        case 2:
         printf("teste2");
            //Entrar-la na função do PROFESSOR/TELA
            opcao = 0; //Opcao recebe 6 para sair do Looping While
            break;
        case 3:
         printf("teste3");
            //Entrar-la na função do PALESTRANTE/TELA
            opcao = 0; //Opcao recebe 6 para sair do Looping While
            break;
        case 4:
         printf("teste4");
            //Entrar-la na função do CONVIDADO/TELA
            opcao = 0; //Opcao recebe 6 para sair do Looping While
            break;
        case 5:
         printf("teste5");
            //Entrar-la na função do FUNCIONARIO/TELA
            opcao = 0; //Opcao recebe 6 para sair do Looping While
            break;
        default:
            printf("Valor digitado invalido, por favor digite os valores determinado. \n");

    } //Fechando o SWITCH

} while(opcao > 5); //Criar uma validacao melhor (Pensando ainda)

    
}