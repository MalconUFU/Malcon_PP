/* Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
salário terão um aumento proporcionalmente maior do que os funcionários com um salário
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus
adicional de salário. Faça um programa que leia: 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float salario, tempo;

    printf("Digite seu salario atual: R$");
    scanf("%f", &salario);

    printf("Digite o tempo que esta na empresa (em anos): ");
    scanf("%f", &tempo);

        if((salario <= 500.00) && (tempo < 1)){
        salario = salario * 1.25;
        printf("Seu novo salario eh: R$%0.2f\n", salario);
        printf("Nao ha direito a bonus");
    }
        else if ((salario <= 1000.00) && (tempo >= 1 && tempo <=3)){
        salario = (salario * 1.20) + 100.00;
        printf("Seu novo salario eh: R$%0.2f, e seu bonus foi de R$100.00", salario);
    }
        else if((salario <= 1500) && (tempo >= 4 && tempo <=6)){
        salario = (salario * 1.15) + 200.00;
        printf("Seu novo salario eh: R$%0.2f, e seu bonus foi de R$200.00", salario);
    }
        else if((salario <= 2000) && (tempo >= 7 && tempo <=10)){
        salario = (salario * 1.10) + 300.00;
        printf("Seu novo salario eh: R$%0.2f, e seu bonus foi de R$300.00", salario);
    }
        else {
        salario += 500.00;
        printf("Nao ha reajuste, seu salario eh: R$%0.2f, e seu bonus foi de R$500.00", salario);
        }

    return 0;
}