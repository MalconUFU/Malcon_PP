/* 9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salario, emprestimo, valorminimo;

    printf("Digite o seu salario: R$");
    scanf("%f", &salario);
    printf("Digite o valor do emprestimo desejado: R$");
    scanf("%f", &emprestimo);

    valorminimo = salario * 0.20;

    if (emprestimo > valorminimo){

        printf("Emprestimo nao concedido");

    }

    else {

        printf("Emprestimo concedido");
    }


    return 0;
}