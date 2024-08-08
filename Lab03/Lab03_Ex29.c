/*29. Faça uma prova de matemática para crianças que estão aprendendo a somar números 
inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a 
pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça
cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas corretas, além de 
quantas vezes o aluno acertou.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, resposta, acertos = 0;

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        x = rand() % 100;
        y = rand() % 100;

        printf("Qual eh a soma de %d + %d? ", x, y);
        scanf("%d", &resposta);

        if (resposta == x + y)
        {
            printf("Resposta correta!\n");
            acertos++;
        }
        else {
            
            printf("Resposta incorreta!\n");
            printf("Resposta correta: %d\n", x + y);
        }
    }

    printf("Voce acertou %d questoes", acertos);

    return 0;
}