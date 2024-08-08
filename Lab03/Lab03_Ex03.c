/* Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima
o número ao quadrado. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Digite um numero: ");

    scanf("%f", &x);

    if (x >= 0){

        x = sqrt(x);

        printf("\nA raiz quadrada do numero digitado eh: %0.1f\n", x);

    }
    else {

        x = pow(x,2);

        printf("\nO numero digitado ao quadrado eh: %0.1f\n", x);
    }

    return 0;
}
