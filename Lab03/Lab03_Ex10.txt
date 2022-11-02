/* 10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
- Homens: (72,7 * h) – 58,0
- Mulheres: (62,1 * h) – 44,7
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float altura, peso;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M'){

        peso = (72.7 * altura) - 58.0;
        printf("Seu peso ideal eh: %.2f", peso);

    }

    else if (sexo == 'F'){

        peso = (62.1 * altura) - 44.7;
        printf("Seu peso ideal eh: %.2f", peso);

    }

    return 0;
}