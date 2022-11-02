/* 26. Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um 
percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    float distancia, litros, consumo;

    printf("Digite a distancia, em KM: ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de litros que o carro consome: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    if (consumo < 8){

        printf("\nO consumo do carro eh de: Km/L%.1f", consumo);
        printf("\nVenda o carro!");

    }

    else 
     
        if(consumo >= 8 && consumo <= 14){

        printf("\nO consumo do carro eh de: Km/L%.1f", consumo);
        printf("\nEconomico!");

        }

    else 

        if(consumo > 14){

        printf("\nSuper Economico!");

        }

 }
