/*Questao 14: Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-
feira, se 2, e assim por diante.*/

#include<stdio.h>
int main(){
    int c;

    printf("Por favor, usuario, informe o numero para saber o dia da semana: ");
    scanf("%i", &c);

     switch (c){
            case 1: printf("\nDomingo\n");
            break;
            
            case 2: printf("\nSegunda\n");
            break;
            
            case 3: printf("\nTerca\n");
            break;
            
            case 4: printf("\nQuarta\n");
            break;
            
            case 5: printf("\nQuinta\n");
            break;
            
            case 6: printf("\nSexta\n");
            break;
            
            case 7: printf("\nSabado\n");
            break;
}
}

