/* 21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. 
Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int x, y, total, opcao;

    printf("Selecione uma das opcoes abaixo:");

    printf("\n1 - Soma de 2 numero");
    printf("\n2 - Diferenca de dois numeros (maior pelo menor)");
    printf("\n3 - Produto entre 2 numeros");
    printf("\n4 - Divisao entre 2 numeros (o denominador nao pode ser zero)");

    printf("\nOpcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    
        printf("\nDigite um numero x: ");
        scanf("%d", &x);
        printf("Digite um numero y: ");
        scanf("%d", &y);

        total = x + y;

        printf("\nO resultado eh: %d", total);

        break;

    case 2: 

        printf("\nDigite um numero x: ");
        scanf("%d", &x);
        printf("Digite um numero y: ");
        scanf("%d", &y);

        if (x > y){

        total = x - y;

        }

        else{

            total = y - x;

        }

        printf("\nO resultado eh: %d", total);

        break;

    case 3:

        printf("\nDigite um numero x: ");
        scanf("%d", &x);
        printf("Digite um numero y: ");
        scanf("%d", &y);

        total = x * y;

        printf("\nO resultado eh: %d", total);

    case 4:

        printf("\nDigite um numero x: ");
        scanf("%d", &x);
        printf("Digite um numero y: ");
        scanf("%d", &y);

    if (y > 0){

        total = x / y;
        printf("\nO resultado eh: %d", total); 

    }

    else {

        printf("\nnao eh possivel dividir por 0");

    }

    default:

        printf("\nOpcao invalida");

        break;
    }


    return 0;
}