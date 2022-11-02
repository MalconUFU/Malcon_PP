/* 20. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes
conceitos:
- O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois
lados;
- Chama-se equilátero o triângulo que tem três lados iguais;
- Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
- Recebe o nome de escaleno o triângulo que tem os três lados diferentes;
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    float A, B, C;

    printf("\nDado um triangulo, digite o valor dos lados:");
        printf("\nValor de A: ");
    scanf("%f", &A);
        printf("Valor de B: ");
    scanf("%f", &B);
        printf("Valor de C: ");
    scanf("%f", &C);

    if (A < B + C && B < A + C && C < B + A){

        if ((A == B) && (B == C)){

            printf("\nTriangulo Equilatero.");

        }

        else 
        
            if((A == B) || (A == C) || (C == B)){

            printf("\nTriangulo Isosceles.");

        }
    

        else 
        
            if((A != B) && (B != C)){

                printf("\nTriangulo Escaleno.");

            }    

    }

    else {

        printf("\nOs valores digitados nao formam um triangulo (O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.)");

    }

    return 0;
}