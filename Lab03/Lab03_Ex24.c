/* 24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui 
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um 
programa em que o usuário entre com o valor e o estado estado do produto e o programa 
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o 
estado digitado não for válido, mostrar uma mensagem de erro.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{

    float preco, preco_total;
    char estado, segundocaractere;

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);
    printf("Digite a sigla do estado de destino (MG/SP/RJ/MS): ");
    scanf(" %c%c", &estado, &segundocaractere);

    if(estado == 'M' && segundocaractere == 'G'){

        preco_total = preco * 1.07;
        printf("Em Minas Gerais, o preco sera: R$%.2f\n", preco_total);

    }
  
    else 
    
        if(estado == 'S' && segundocaractere == 'P'){

        preco_total = preco * 1.12;
        printf("Em São Paulo, o preco sera: R$%.2f\n", preco_total);

   }
   
    else 
    
        if(estado == 'R' && segundocaractere == 'J'){

        preco_total = preco * 1.15;
        printf("Em Rio de Janeiro, o preco sera: R$%.2f\n", preco_total);

    }
    
    else 
    
        if(estado == 'M' && segundocaractere == 'S'){

        preco_total = preco * 1.08;
        printf("Em Mato Grosso do Sul, o preco sera: R$%.2f\n", preco_total);

    }
    
    else {

    printf("Estado invalido!\n");

 }

}