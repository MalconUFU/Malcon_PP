/*30. Faça um programa que receba três números e mostre-os em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o valor de z: ");
    scanf("%d", &z);



    if (z > y && y > x){

        printf("A ordem crescente dos numeros eh: %d, %d, %d", x, y, z);
        
    }

    else if(x > y && y > z){

        printf("A ordem crescente dos numeros eh: %d, %d, %d", z, y, x);

    }

    else if(y > z && z > x){

        printf("A ordem crescente dos numeros eh: %d, %d, %d", x, z, y);

    }

    else if(y > x && x > z){

        printf("A ordem crescente dos numeros eh: %d, %d, %d", z, x, y);

    }

    else if(z > x && x > y){

        printf("A ordem crescente dos numeros eh: %d, %d, %d", y, x, z);

    }

    else if(x > z && z > y){

        printf("A ordem crescente dos numeros eh: %d, %d, %d", y, z, x);

    }


    return 0;
}