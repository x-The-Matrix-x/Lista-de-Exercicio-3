/*Questao 4: Fa�a um programa que leia o sal�rio de um trabalhador e o valor da presta��o de um
empr�stimo. Se a presta��o, for maior que 20% do sal�rio, imprima: �Empr�stimo n�o
concedido.�, caso contr�rio, imprima: �Empr�stimo concedido.�*/

#include<stdio.h>
int main (){
	float salario, prestacao, emprestimo;
	printf("Digite o seu salario e o valor da prestacao:\n", salario, prestacao);
	scanf("%f%f", &salario, &prestacao);
	
	if(prestacao > salario * 0.2)
	   {
		    printf("Emprestimo nao concedido!", emprestimo);
	   }
	   else
	   { 
	        printf("Emprestimo concedido!", emprestimo);
	   }
}

