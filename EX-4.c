/*Questao 4: Faça um programa que leia o salário de um trabalhador e o valor da prestação de um
empréstimo. Se a prestação, for maior que 20% do salário, imprima: “Empréstimo não
concedido.”, caso contrário, imprima: “Empréstimo concedido.”*/

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

