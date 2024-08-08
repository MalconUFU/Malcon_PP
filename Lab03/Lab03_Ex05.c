/* Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite um numero: ");

    scanf("%d", &x);

    if (x%2 == 0){

    printf("\n%d eh par\n", x);

    }

    else {
        printf("\n%d eh impar\n", x);
    }

    return 0;
}
