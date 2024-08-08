/* 18. Faça um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.
*/

/* COM IF ELSE *\

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float x, y, total;

    printf("1 - Realizar uma soma");
    printf("\n2 - Realizar uma subtracao");
    printf("\n3 - Realizar um multiplicacao");
    printf("\n4 - Realizar um divisao\n");


    printf("Escolha um das opcoes: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4){

        printf("Opcao invalida");
        

    }

    else {
        
    printf("\nDigite um valor para a operacao: ");
    scanf("%f", &x);

    printf("Digite outro valor para a operacao: ");
    scanf("%f", &y);

    }
    
    if (opcao == 1){

        total = x + y;
        printf("\nO resultado da soma eh: %.2f\n", total);

    }

    else {

        if (opcao == 2){

        total = x - y;
        printf("\nO resultado da subtracao eh: %.2f\n", total);

        }

    else {

        if (opcao == 3){

            total = x * y;
            printf("\nO resultado da multiplicacao eh: %.2f\n", total);

        }

    else{
        
        if (opcao == 4){

            total = x / y;
            printf("\nO resultado da divisao eh: %.2f\n", total);

        }

        }

    }
        

    }
    

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------

/* Utilizando SWITCH */


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int opcao;
    float x, y, total;

    printf("1 - Realizar uma soma");
    printf("\n2 - Realizar uma subtracao");
    printf("\n3 - Realizar um multiplicacao");
    printf("\n4 - Realizar um divisao\n");


    printf("Escolha um das opcoes: ");
    scanf("%d", &opcao);


    if (opcao < 0 || opcao > 4){

        printf("Opcao invalida");

    }

    else {

    printf("\nDigite um valor para a operacao: ");
    scanf("%f", &x);

    printf("Digite outro valor para a operacao: ");
    scanf("%f", &y);

        switch (opcao)
        {
        case 1:
            
            total = x + y;
            printf("O resultado da soma eh: %.2f", total);

            break;

        case 2:
            
            total = x - y;
            printf("O resultado da subtracao eh: %.2f", total);

            break;

        case 3:
            
            total = x * y;
            printf("O resultado da multiplicacao eh: %.2f", total);

            break;

        case 4:
            
            total = x / y;
            printf("O resultado da divisao eh: %.2f", total);

            break;

        }

    }
    
    

    return 0;
}