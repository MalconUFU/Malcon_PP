/* 14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota_laboratorio, nota_avaliacao, nota_exame, mp;

    printf("Digite a nota do trabalho de laboratorio (0 a 10): ");
    scanf("%f", &nota_laboratorio);
    printf("Digite a nota da avaliacao semestral (0 a 10): ");
    scanf("%f", &nota_avaliacao);
    printf("Digite a nota do exame final (0 a 10): ");
    scanf("%f", &nota_exame);

    mp = ((nota_laboratorio * 2) + (nota_avaliacao * 3) + (nota_exame * 5))/10;

    if ((mp >= 0) && (mp <= 2.9)){

        printf("Sua media foi %.2f. Voce foi reprovado.", mp);

    }

    else {

        if ((mp >= 3) && (mp <= 4.9)){

            printf("Sua media foi %.2f. Voce esta de recuperacao", mp);

        }

        else {
            
            printf("Sua media foi %.2f. Parabens! Voce foi aprovado.", mp);

        }

    }

    return 0;
}