/* 7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números 
forem iguais, imprima a mensagem: “Números iguais” */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Digite dois numeros:\n");

    scanf("%f%f", &x, &y);

    if (x > y){
        printf("O maior numero eh: %0.1f\n", x);
    }
        else if (x < y) {
            printf("O maior numero eh: %0.1f\n", y);
        }
        else {
            printf("Numeros Iguais\n");
        }

    return 0;
}
