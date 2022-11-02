/* 36. Escreva um programa que, dado o venda da venda, imprima a comissão que deverá ser paga 
ao vendedor. Para calcular a comissão, considere a tabela abaixo:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float venda, comissao;

    printf("Digite o venda da venda: R$");
    scanf("%f", &venda);

    if(venda >= 100000){

        comissao = 700.00 + (venda * 0.16);
    }
    else if (venda >= 80000 && venda < 100000){

        comissao = 650.00 + (venda * 0.14);

    }
    else if (venda >= 60000 && venda < 80000){

        comissao = 600.00 + (venda * 0.14);

    }
    else if (venda >= 40000 && venda < 60000){

        comissao = 550.00 + (venda * 0.14);

    }
    else if (venda >= 20000 && venda < 40000){

        comissao = 500.00 + (venda * 0.14);

    }
    else if (venda < 20000) {

        comissao = 400.00 + (venda * 0.14);

    }

    printf("A comissao do vendedor sera: R$%.2f", comissao);

    return 0;
}