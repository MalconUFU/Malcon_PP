/*Exercício Bonus Lab 02/12/2022*/

#include <stdio.h>
#include <string.h>

int main(){

  char str[100];

  printf("Digite uma frase qualquer que possua a letra 'R':\n");

  fgets(str, 100, stdin);

  for (int i = 0; i < 100; i++)
  {
    if(str[i] == 'R'){

      str[i] = 'L'; /*Identifica palavras começadas com R e substitui por L*/

    }

    else if((str[i] == 'r') && (str[i + 1] == 'r')){

      str[i] = 'l'; /*Substitui o primeiro r por l*/

      for(int j = i + 1; str[j] != '\0'; j++){

        str[j] = str[j + 1]; /*A partir do segundo r, copia a letra seguinte até o final da palavra*/
      }

    }
    
      else if ((str[i] == 'r') && (str[i + 1]) != ' '){

        if((str[i + 1] != ',') && (str[i + 1] != '.')){

      str[i] = 'l';

        }

    }

  }

    printf("%s", str);
  
  return 0;

}
