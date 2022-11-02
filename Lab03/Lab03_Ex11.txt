/* 11. Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5
+ 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:
“Número inválido”
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero, soma = 0, aux;

    printf("Digite um numero inteiro maior do que zero: ");
    scanf("%d", &numero);

    if (numero > 0){

        while (numero > 0){
        aux = numero % 10;
        soma = soma + aux; /* A soma, inicialmente igual a 0, será somada ao resto da divisão do numero por 10. Por exemplo, o numero 45, a soma será 0 + 5 (cinco é o resto de 45/10) */
        numero = numero / 10; /* Com intuito de conseguir o proximo algarismo, se divide o numero inicial por 10. Por exemplo, o numero agora será 45/10 = 4.5. O resto da divisão de 4.5/10 */
        }

        printf("A soma dos algarismos eh: %d", soma);

    }

    else {

        printf("Numero invalido");

    }

    return 0;
}