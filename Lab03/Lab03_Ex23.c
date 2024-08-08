/* 23. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for 
divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 
1996.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int ano;

    printf("Digite um ano para verificar se eh bissexto: ");
    scanf("%d", &ano);

    if (ano%400 == 0 || (ano%4 == 0 && ano%100 != 0)){

        printf("\nO ano eh bissexto");

    }

    else {

        printf("\nO ano nao eh bissexto");

    }

    return 0;
}