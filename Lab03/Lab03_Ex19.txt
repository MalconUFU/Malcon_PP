/* 19. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5,
mas, não simultaneamente pelos dois.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    
    int numero;

    printf("Digite um numero inteiro divisivel por 3 ou por 5: ");
    scanf("%d", &numero);

    numero%3 == 0 && numero%5 == 0 ? printf("Numero invalido") : numero%3 == 0 ? printf("O numero eh divisivel por 3") : numero%5 == 0 ? printf("O numero eh divisivel por 5") : printf("O numero nao eh divisil por 3 nem por 5");


    return 0;
}