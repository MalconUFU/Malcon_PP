/*33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule 
e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a 
segunda tabela).

PREÇO ANTIGO                PERCENTUAL DE AUMENTO
até R$ 50                           5%
entre R$ 50 e R$ 100                10%
acima de R$ 100                     15%

PREÇO NOVO                  MENSAGEM
até R$ 80                           Barato
entre R$ 80 e R$ 120 (inclusive)    Normal
entre R$ 120 e R$ 200 (inclusive)   Caro
acima de R$ 200                     Muito caro


*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float preco, aumento, preco_novo;

        printf("Digite o preco de um produto: R$");
        scanf("%f", &preco);

    if (preco < 50){

        aumento = 1.05;

    }

    else if (preco >= 50 && preco <= 100){

        aumento = 1.10;

    }

    else if (preco > 100){

        aumento = 1.15;

    }

    preco_novo = preco * aumento;
    printf("O novo preco sera: R$%.2f", preco_novo);

    if(preco_novo <= 80){

        printf("\nBarato!");

    }

    else if (preco_novo > 80 && preco_novo <= 120){

        printf("\nNormal...");

    }

    else if (preco > 120 && preco_novo <= 200){

        printf("\nCaro!");

    }

    else if (preco > 200)
    {
        printf("\nMuito Caro!!!");
    }

    return 0;
}