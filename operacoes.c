#include <stdio.h>
#include "operacoes.h"

void interfaceSoma() 
{
    int opcao;
    float n1, n2, resultado;

    while(1)
    {
        printf("\n=== Calculadora: SOMA ===\n");
        printf("1 - Fazer soma\n");
        printf("2 - Voltar ao menu principal\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) 
        {
            case 1:
                printf("Digite o primeiro número: \n");
                scanf("%f", &n1);

                printf("Digite o sefundo número: \n");
                scanf("%f", &n2);

                resultado = n1 + n2;

                printf("Resultado da soma entre %.2f e %.2f é: %.2f\n", n1, n2, resultado);
                
            case 2:
                printf("Voltando ao menu principal...\n");
                return;

            default:
                printf("Opção invalida! Tente nomavamente. \n");
        }
    }
}