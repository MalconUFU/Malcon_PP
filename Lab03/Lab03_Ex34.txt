/* 34. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela 
abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota;
    int faltas;

    printf("Digite sua nota: ");
    scanf("%f", &nota);
    printf("Digite seu numero de faltas: ");
    scanf("%d", &faltas);

    if(nota >= 9.0 && nota <= 10.0){

        if (faltas <= 20){

            printf("Aluno conceito A");

        }

        else {

            printf("Aluno conceito B");

        }
    }

    else if (nota >= 7.5 && nota <= 8.9){

        if (faltas <= 20){

            printf("Aluno conceito B");

        }

        else {

            printf("Aluno conceito C");

        }

    }

    else if (nota >= 5.0 && nota <= 7.4){

        if (faltas <= 20){

            printf("Aluno conceito C");

        }

        else {

            printf("Aluno conceito D");

        }

    }

    else if (nota >= 4.0 && nota <= 4.9){

        if (faltas <= 20){

            printf("Aluno conceito D");

        }

        else {

            printf("Aluno conceito E");

        }

    }

    else if (nota >= 0.0 && nota <= 3.9){

        if (faltas <= 20){

            printf("Aluno conceito E");

        }

        else {

            printf("Aluno conceito E");

        }

    }


    return 0;
}