/* Faça um programa que receba dois números e mostre qual deles é o maior. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;

    printf("Digite dois numero:\n");

    scanf("%f%f", &x, &y);

    if (x > y){
        printf("O maior numero eh: %0.1f\n", x);
    }
        if (x < y) {
            printf("O maior numero eh: %0.1f\n", y);
        }
        else {
            printf("Os numero digitados sao iguais\n");
        }

    return 0;
}
