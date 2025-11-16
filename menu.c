#include <stdio.h>
#include "menu.h"
#include "operacoes.h"

void menuPrincipal()
{
    int opcao;

    while(1)
    {
        printf("Bem vindo a calculador em C.\n");
        printf("Versão 0.0.1\n");
        printf("Escolha uma das opções.\n");

        printf("1 - Somar");
        printf("2 - Subtrair");
        printf("3 - Multiplicar");
        printf("4 - Dividir");
        printf("0 - Sair");
    
        printf("Escolha uma opção:\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                interfaceSoma();
                break;

            case 0:
                printf("Saindo...\n");
                return;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
        

        
    }

    
}
