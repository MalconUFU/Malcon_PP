/* O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica,
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float cc, cf, cd, i;

    printf("Escreva o custo de fabrica do carro: ");

    scanf("%f", &cf);

    if (cf <= 12.000) {
        cd = cf * 0.05;
        printf("\nO custo ao consumidor sera: %0.2f\n", cf + cd);
    }

    if ((cf > 12.000) && (cf < 25.000)){
        cd = cf * 0.1;
        i = cf * 0.15;
        printf("\nO custo ao consumidor sera: %0.2f\n", cf + cd + i);
    }

    else{
        cd = cf * 0.15;
        i = cf * 0.20;
        printf("\nO custo ao consumidor sera: %0.2f\n", cf + cd + i);
    }

    return 0;
}

