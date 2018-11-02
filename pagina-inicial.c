/* TELA INICIAL */

#include <stdio.h>
#include <stdlib.h>



void menuInicial() 
{

    // Variaveis locais
    int opcao;

        do
        { 

        /*  Verificação se número digitado é válido.  
            Informação para o usuário   */

            system("clear"); 
            /*  Limpa a tela do terminal, se der erro no WIn troca para system("cls"); 
                assim quando ele retornar vai limpar a tela e apresentar o menu denovo  */

            printf("Para ALUNO          digite: 1 \n");
            printf("Para PROFESSOR      digite: 2 \n");
            printf("Para PALESTRANTE    digite: 3 \n");
            printf("Para CONVIDADO      digite: 4 \n");
            printf("Para FUNCIONARIO    digite: 5 \n\n");

            printf("Opcao escolhida: ");
            scanf("%d%*c", &opcao); // %*c nao deixa o enter influenciar na variavel


        /*  PENSANDO EM CRIAR UM IF OU LAÇO, CASO O USUARIO QUEIRA MUDAR DE OPCAO 
            PENSANDO SE ESTE SWTICH FOR UMA FUNÇÃO, PODEMOS FAZER O USUÁRIO VOLTAR ATRÁS. */
            
            

            switch (opcao) // Inicio do SWITCH
            { 
                
                case 1:

                    printf("Funcao ALUNO/TELA - 1");
                    // Entrar-la na função do ALUNO/TELA

                return; 

                case 2:

                    printf("Funcao PROFESSOR/TELA - 2");

                return;

                case 3:

                    printf("Funcao PALESTRANTE/TELA - 3");
                    
                return;

                case 4:

                    printf("Funcao CONVIDADO/TELA - 4");

                return;

                case 5:

                    printf("Funcao FUNCIONARIO/TELA - 5");
                    
                return;

                default:

                    printf("Valor digitado invalido, por favor digite novamente!\n");
                    getchar();

                break;

        } // Fim do SWITCH

    } while (1);

    /* 
        while (1); Isso faz um laço infinito, cuidado!!!
        A intenção aqui é que qualquer valor fora do switch
        seja invalido, por isso não precisa mudar o valor da variavel opcao.
        Por isso eu exclui essas linhas.
    */

}





