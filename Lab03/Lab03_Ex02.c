/* Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada
do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Digite um numero: ");

    scanf("%f", &x);

    if (x >= 0){

        x = sqrt(x);

        printf("\nA raiz quadrado do numero digitado eh: %0.1f\n", x);

    }
    else {
        printf("O numero digitado eh invalido\n");
    }

    return 0;
}
