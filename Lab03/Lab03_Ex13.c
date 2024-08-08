/* 13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, mp;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    mp = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2))/4;

    if (mp >= 60){

        printf("Sua media foi %.2f. Parabens! Voce foi aprovado.", mp);

    }

    else {

        printf("Sua media foi %.2f. Voce foi reprovado.", mp);

    }

    return 0;
}