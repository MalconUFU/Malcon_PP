/* 38. Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia,
Mês e Ano. Teste a validade desta data para saber se está é uma data válida. Teste se o dia
fornecido é um dia válido: dia > 0, dia  28 para o mês de fevereiro (29 se o ano for bissexto),
dia  30 em abril, junho, setembro e novembro, dia  31 nos outros meses. Teste a validade do
mês: mês > 0 e mês < 13. Teste a validade do ano: ano  ano atual (use uma constante definida
com o valor igual a 2022). Imprimir: “data válida” ou “data inválida” no final da execução do
programa. 
*/

#include <stdio.h>
#include <stdlib.h>

const int anoatual = 2022;

int main()
{

    int dia, mes, ano;

    printf("Digite sua data de nascimento (DD/MM/AA)\n");
    scanf("%d%d%d", &dia, &mes, &ano);

    if (dia < 1 || dia > 31){
        printf("Data invalida");
    }
    else if (mes < 1 || mes > 12){
        printf("Data invalida");
    }
    else if (ano > anoatual){
        printf("Data invalida");
    }

    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia > 30){
            printf("Data invalida");
        }
        else {
            printf("Data valida");
        }

    }
    
    else if (mes == 2){
        if (ano % 4 == 0 && ano % 100 != 1 || ano % 400 == 0){
            if (dia > 29){
                printf("Data invalida");
            }
            else{
                printf("Data valida");
        }
    }
    else {
        
        if(dia > 28){
            printf("Data invalida");
        }
        else {
            printf("Data valida");
        }
      }
    }


    return 0;
}