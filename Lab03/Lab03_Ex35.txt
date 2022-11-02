/* 35. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e 
se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em 
anos não bissextos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dia, mes, ano;

    printf("Digite uma data (DD/MM/AA)\n");
    scanf("%d%d%d", &dia, &mes, &ano);

    if(dia < 1 || dia > 31){

        printf("Data Invalida");

    }

    else if (mes < 1 || mes > 12){

        printf("Data Invalida");

    }

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11){

        if(dia > 30){

            printf("Data Invalida");

        }

        else {

            printf("Data valida");

        }

    }

    else if (mes == 2){

        if(ano % 4 == 0 && ano % 100 != 1 || ano % 400 == 0){

            if (dia > 29){

                printf("Data Invalida");

            }

            else{

                printf("Data Valida");

            }


        }

        else {

            if(dia > 28){

                printf("Data Invalida");

            }

            else{

                printf("Data Valida");

            }

        }

    }

    else {

        printf("Data Valida");

    }


    return 0;
}