/*Questao 5: Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre: o
n�mero digitado ao quadrado e raiz quadrada do n�mero digitado.*/

#include<stdio.h>
int main (){
    int num1, raiz, potencia;

    printf("Digite um numero par: ");
    scanf("%i", &num1);

    raiz = sqrt(num1);
    potencia = pow(num1, 2);

   if(num1 % 2 == 0){
   	 printf("O quadrado de %i e %i", num1, potencia);
   	 
    if (num1 > 0)
    printf("A raiz de %i e %i", num1, raiz);
    
    else 
    printf("O numero deve ser positvo para ter raiz");
    
}else   
    printf("digite um valor par");

}
