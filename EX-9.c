/*Questao 9: Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:*/
// seguintes categorias:
// infantil A = 5 - 7 anos
// infantil B = 8 - 10 anos
// juvenil A = 11 - 13 anos
// juvenil B = 14 - 17 anos
// sênior = maiores de 18 anos

#include <stdio.h>
int main() {
  int idade;

  printf("Informe a idade do nadador: ");
  scanf("%d", &idade);

  if (idade <= 5 || idade >= 350)
     printf("\nJovem, ainda.");
  else if (idade <= 7)
	  printf("\ninfantil A");
       else if (idade <= 10)
	       printf("\ninfantil B");
	    else if (idade <= 13)
		    printf("\njuvenil A");
		 else if (idade <= 17)
			 printf("\njuvenil B");
		      else
			 printf("\nsenior");
}

