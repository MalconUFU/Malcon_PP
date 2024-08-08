/* 37. As tarifas de certo parque de estacionamento são as seguintes:
O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem 
estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse 
permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são
apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par 
12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo 
teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo 
estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24 
horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação
de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

   int horasc, minutosc, horass, minutoss, minutosf, contagem;
   float preco;

   printf("Digite a hora e os minutos da chegada:\n");
   scanf("%d%d", &horasc, &minutosc);

   printf("Digite a hora e os minutos da saida:\n");
   scanf("%d%d", &horass, &minutoss);

    if(horasc > horass){

        horasc = horasc - 24;

    }

    horasc = horasc * 60;
    horass = horass * 60;

    contagem = (horass + minutoss) - (horasc + minutosc);

    if(contagem % 60 > 0){

        contagem = contagem / 60 + 1;

    }

    else{

        contagem = contagem / 60;

    }


    if(contagem <= 2){

        preco = contagem * 1;

    }
    else if(contagem > 2 && contagem <= 4){

        preco = contagem * 1.40;

    }
    else if(contagem >= 5){

        preco = contagem * 2;

    }

    printf("\nO preco a pagar sera: R$%.2f", preco);

    return 0;
}