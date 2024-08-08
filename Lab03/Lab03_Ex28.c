/* 28. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das 
seguintes médias de acordo com um valor numérico digitado pelo usuário:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

    int x, y, z, opcao;
    float media;

    printf("\n1 - Media Geometrica");
    printf("\n2 - Media Ponderada");
    printf("\n3 - Media Harmonica");
    printf("\n4 - Media Aritmetica\n");

    printf("\nEscolha uma das medias acima: ");
    scanf("%d", &opcao);

    if(opcao >= 1 && opcao <= 4){

    printf("\nDigite o valor de tres numeros inteiro positivos: ");
    printf("\nDigite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o valor de z: ");
    scanf("%d", &z);

    if (opcao == 1){

        media = pow(x * y * z, 1.0 / 3.0);
        printf("\nA Media Geometrica eh: %.2f", media);

    }

    else   

        if(opcao == 2){

        media = ((1 * x) + (2 * y) + (3 * z))/3;
        printf("\nA Media Ponderada eh: %.2f", media);

        }

    else 

        if(opcao == 3){

        media = 1.0/((1.0/x) + (1.0/y) + (1.0/z));
        printf("\nA Media Harmonica eh: %.2f", media);

        }

    }

    else 

        if(opcao == 4){

        media = (x + y + z)/3.0;
        printf("\nA Media Aritmetica eh: %.2f", media);

        }

    else {

        printf("\nOpcao invalida!");

    }



 }
