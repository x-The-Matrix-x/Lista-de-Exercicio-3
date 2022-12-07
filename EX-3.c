/*Questao 3: Faça um programa que leia um número inteiro e verifique se esse número é par ou
ímpar.*/

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

