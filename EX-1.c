/*Questao 1: Faca um programa que leia dois numeros e mostre qual deles e o maior*/

#include<stdio.h>
int main (){
    int n1, n2;
    printf("Digite o n1 e o n2:\n");
    scanf("%d%d", &n1, &n2);
    
    if (n1 > n2)
    printf("Numero 1 (%d) eh  maior que o numero 2 (%d)\n", n1, n2);
    else printf("Numero 2 (%d) eh e maior que o numero 1 (%d)\n", n2, n1);

}

