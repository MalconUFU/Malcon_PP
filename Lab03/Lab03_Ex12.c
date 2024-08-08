/* 12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    float logaritmo;

    numero = logaritmo = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0){

        logaritmo = log10(numero);
        printf("O logaritmo do numero digitado eh: %f", logaritmo);

    }

    else {

        printf("Numero invalido");

    }

    return 0;
}