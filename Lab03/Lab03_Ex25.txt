/* 25. Calcule as raízes da equação de 2º grau
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é
equação de segundo grau”.
- Se delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
- Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
- Se delta > 0, imprima as duas raízes reais.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    int a, b, c, x1, x2, delta, raiz_do_delta;

    printf("Para a equacao do segundo grau digite:\n");

    printf("\nValor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);
    printf("Valor de c: ");
    scanf("%d", &c);

    if (a != 0){

        delta = pow(b, 2) - (4 * a * c);

        raiz_do_delta = sqrt(delta);

        x1 = (- b + raiz_do_delta) / (2 * a);

        x2 = (- b - raiz_do_delta) / (2 * a); 

        if (delta < 0){

            printf("\nNao existe raizes");
            
        }

        else 

            if (delta == 0){

                printf("\nRaiz unica\n");
                printf("X1 = X2 = %d", x1);

            }

        else 

            if (delta > 0){

                printf("\nRaiz X1 = %d\n", x1);
                printf("Raiz X2 = %d", x2);

            }

    }

    else {

        printf("\nNao eh equacao do segundo grau (a deve ser diferente de 0)");

    }

 }
