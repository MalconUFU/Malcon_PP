/* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
- O número digitado ao quadrado
- A raiz quadrada do número digitado
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, raiz, quadrado;

    printf("Digite um numero: ");

    scanf("%f", &x);

    if (x > 0){

        raiz = sqrt(x);

        x = pow(x,2);

    printf("\nO quadrado do numero digitado eh: %0.1f, e a raiz eh: %0.1f\n", x, raiz);

    }

    return 0;
}
