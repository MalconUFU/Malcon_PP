/*31. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a 
seguir, verifique e mostra qual a classificação dessa pessoa.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura;

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if(altura < 1.20){

        if(peso <= 60){

            printf("Categoria A");

        }

        else if (peso > 60 && peso <= 90){

            printf("Categoria D");

        }

        else if (peso > 90){

            printf("Categoria G");

        }

    }

    if(altura > 1.20 && altura <= 1.70){

        if(peso <= 60){

            printf("Categoria B");

        }

        else if (peso > 60 && peso <= 90){

            printf("Categoria E");

        }

        else if (peso > 90){

            printf("Categoria H");

        }

    }

    if(altura > 1.70){

        if(peso <= 60){

            printf("Categoria C");

        }

        else if (peso > 60 && peso <= 90){

            printf("Categoria F");

        }

        else if (peso > 90){

            printf("Categoria I");

        }

    }

    return 0;
}