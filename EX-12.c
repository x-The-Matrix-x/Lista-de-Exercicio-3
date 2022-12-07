/*Questao 12: Faça um programa que informe o mês de acordo com o número digitado pelo usuário.
Exemplo: Entrada = 4. Saída = Abril.*/

#include <stdio.h>
int main() {
  int numero;
  char mes;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  if (numero <1 || numero > 12)
     printf("Erro. Por favor, digite um numero entre 1 e 12\n");
  else if (numero == 1)
	  printf("Mes: 'Janeiro'\n");
	else if (numero == 2)
	    printf("Mes: 'Fevereiro'\n");
	  else if (numero == 3)
		  printf("Mes: 'Marco'\n");
		else if (numero == 4)
			printf("Mes: 'Abril'\n");
		  else if (numero == 5)
	          printf("Mes: 'Maio'\n");
	        else if (numero == 6)
	            printf("Mes: 'Junho'\n");
	          else if (numero == 7)
		          printf("Mes: 'Julho'\n");
		        else if (numero == 8)
			        printf("Mes: 'Agosto'\n");
			      else if (numero == 9)
	                  printf("Mes: 'Setembro'\n");
	                else if (numero == 10)
	                    printf("Mes: 'Outubro'\n");
	                  else if (numero == 11)
		                  printf("Mes: 'Novembro'\n");
		                else if (numero == 12)
			                printf("Mes: 'Dezembro'\n");		      
}
