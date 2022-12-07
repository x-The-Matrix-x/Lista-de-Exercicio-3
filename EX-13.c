/*Questao 13: Reescreva o algoritmo do exercicio 11 utilizando o comando switch.*/

#include <stdio.h>
int main (){
	int num1, num2, c;
	
	
    printf("Por favor, usuario, digite 2 numeros para saber seu quadrante  (x, y): ");
    scanf("%i%i", &num1, &num2);


    printf("\n(1) num1 > 0 && num2 > 0\n(2)num1 < 0 && num2 > 0\n(3)num1 < 0 && num2 < 0(4)num1 > 0 && num2 < 0\n(5)num1 == 0 && num2 != 0\n(6)num1 != 0 && num2 == 0\n(7)num1 == 0 && num2 == 0");

    printf("\nQual seu caso? \n");
    scanf("%i", &c);

      switch (c){
case 1:
    printf("Primeiro quadrante");
    break;
case 2:
    printf("Segundo quadrante");
    break;
case 3:
    printf("Terceiro quadrante");
    break;
case 4:
    printf("Quarto quadrante");
    break;
case 5:
    printf("No eixo X");
    break;
case 6:
    printf("No eixo Y");
    break;
case 7:
    printf("Na origem");
    break;

default:
    printf("Valor invalido\n");
    break;
}
 return(0);
}
