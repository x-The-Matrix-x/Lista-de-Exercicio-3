/*Questao 10: Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela
a seguir:*/

#include<stdio.h>
int main(){
    int num1, num2, num3, media, c;

   do{
   	
      printf("Por favor, digite 3 numeros inteiros: ");
      scanf("%i%i%i", &num1, &num2, &num3);

      printf("(1) media Geometrica(2) media Ponderada(3) media Harmonica(4) media Aritmetica(0) fechar programa");

      printf("escolha uma das opcoes: ");
      scanf("%i", &c);

    switch (c){
case 1:
    media = num1 * num2 * num3;
    printf("A media geometrica e %i", media);
    break;
case 2: 
    media = num1 + 2 *num2 + 3 * num3 / 6 ;
    printf("A media ponderada e %i", media);
    break;
case 3:
    media = 1/ 1/num1 + 1/num2 + 1/ num3;
    printf("A media harmonica e %i", media);
    break;
case 4:
    media = num1 + num2 + num3 / 3;
    printf("A media aritmetica e %i", media);
    break;
default:
    printf("Resposta invalida");
    break;
}

printf("Aperte qualquer botao para continuar");
getch();
system("cls");

}while (c +! '0');

return (0);
}
