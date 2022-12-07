/*Questao 2: Faca um programa que leia dois numeros e mostre o maior deles. Se, por acaso, os dois
números forem iguais, imprima a mensagem “Numeros iguais”.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main(){
    int num1, num2, maior = 0;

    printf("Por favor, digite 2 numeros e saiba qual e o maior: ");
    scanf("%i%i", &num1, &num2);


    if(num1 > num2)

    printf("O %i e maior que %i", num1, num2);

    if(num1 < num2)

    printf("O %i e maior que %i", num2, num1);

if(num1 == num2)
   
    printf("O %i e igual a %i", num1, num2);   


maior = (num1 > num2)  ? printf("O %i e maior que %i", num1, num2) :    
        (num1 < num2)  ? printf("O %i e maior que %i", num2, num1) : 
        (num1 == num2)  ? printf("O %i e igual a %i", num1, num2) :  printf("Por gentileza, usuario, digite um valor valido");

}
