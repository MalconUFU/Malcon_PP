/*32. Escrever um programa que leia o código do produto escolhido do cardápio de uma 
lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche. 
Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete 
segue o padrão abaixo:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;
    float preco, qtd;

    printf("Cachorro Quente - 100");
    printf("\nBauru Simples - 101");
    printf("\nBauru com Ovo - 102");
    printf("\nHamburguer - 103");
    printf("\nCheeseburguer - 104");
    printf("\nSuco - 105");
    printf("\nRefrigerante - 106\n");

    printf("\nDigite o codigo do lanche que deseja: ");
    scanf("%d", &codigo);

    printf("\nDigite a quantidade: ");
    scanf("%d", &qtd);

    switch (codigo){

    case 100:

        preco =  1.20 * qtd;
        printf("O preco a pagar sera: %.2f", preco);
        
        break;

    case 101:

        preco =  1.30 * qtd;
        printf("O preco a pagar sera: %.2f", preco);
        
        break;

    case 102:

        preco =  1.50 * qtd;
        printf("O preco a pagar sera: %.2f", preco);
        
        break;

    case 103:

        preco =  1.20 * qtd;
        printf("O preco a pagar sera: %.2f", preco);
        
        break;

    case 104:

        preco =  1.70 * qtd;
        printf("O preco a pagar sera: %.2f", preco);
        
        break;

    case 105:

        preco =  2.20 * qtd;
        printf("O preco a pagar sera: %.2f", preco);
        
        break;

    case 106:

        preco =  1.00 * qtd;
        printf("O preco a pagar sera: %.2f", preco);
        
        break;
    
    default:

        printf("Codigo invalido!");

        break;
    }
    


    return 0;
}