/* 8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na
tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
programa termina.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota1, nota2, media;

    printf("Digite duas notas de um aluno:\n");
    scanf("%f%f", &nota1, &nota2);

    if ((nota1 >= 0.0 && nota1 <= 10.0) && (nota2 >= 0.0 && nota2 <= 10.0)){

        media = (nota1 + nota2)/2;
        printf("A media das notas eh: %.2f", media);
    }
    else if (nota1 < 0.0 || nota1 > 10) {

        printf("Nota 1 invalida");
        
    }
    else if (nota2 < 0.0 || nota2 > 10){

        printf("Nota 2 invalida");
    }

    return 0;
}
