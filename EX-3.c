/*Questao 3: Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par ou
�mpar.*/

#include<stdio.h>
int main (){
	int numeroX;
	printf("Digite o numeroX:\n");
	scanf("%d", &numeroX);
	
	if(numeroX % 2 == 0)
	   {
		    printf("Numero Par\n");
	   }
	   else
	   {
		    printf("Numero Impar\n");
	   }
}

