/* 17. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
𝐴 = ((basemaior + basemenor) ∗ altura) / 2
Lembre-se a base maior e a base menor devem ser números maiores que zero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float base_maior, base_menor, altura, area;

    printf("Digite a Base Maior do trapezio (maior que 0):");
    scanf("%f", &base_maior);
    printf("Digite a Base Menor do trapezio (maior que 0): ");
    scanf("%f", &base_menor);
    printf("Digite a altura do trapezio: ");
    scanf("%f", &altura);

    if ((base_maior > 0) && (base_menor > 0)){

        area = ((base_maior + base_menor) * altura) / 2;
        printf("A area do trapezio eh: %0.1f\n", area);
    }

    else {
        printf("As bases sao invalidas.");
    }

    return 0;
}