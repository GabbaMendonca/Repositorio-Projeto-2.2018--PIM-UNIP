#include <stdio.h>
#include <stdlib.h>

#include "Funcoes.h"


void main()
{


        printf("1 - Testar Tela Inicial\n");
        printf("2 - Testar Tela de Login\n\n");

        int opc;
        scanf("%d%*c", &opc);

        switch(opc)
        {
            case 1:
                menuInicial();
            break;
                
            case 2:
                telaLogin();
            default:
            break;
        }

}
