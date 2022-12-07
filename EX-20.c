/*Questao 20: Fa�a um programa que leia os coeficientes de uma equa��o do segundo grau. Em
seguida, calcule e mostre as ra�zes dessa equa��o, lembrando que as ra�zes s�o
calculadas como
em que ? = b� � 4 * a * c e ax�+ bx + c = 0 representa uma equa��o do segundo grau. A vari�vel
a tem de ser diferente de zero. Caso seja igual, imprima a mensagem �N�o � equa��o de
segundo grau�. Do contr�rio, imprima:
� Se ? < 0, n�o existe real. Imprima a mensagem �N�o existe raiz�.
� Se ? = 0, existe uma raiz real. Imprima a raiz e a mensagem �Raiz �nica�.
� Se ? > 0, existem duas ra�zes reais. Imprima as ra�zes.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    float a, b, c, delta, raizDelta, x1, x2;

    printf("Digite os coeficientes de uma equacao: ");  
    scanf("%f%f%f", &a, &b, &c);

    delta = b * b - 4 * a * c;
    raizDelta = sqrt(delta);

   if(delta < 0)
      printf("Nao exite raiz");
            else if(delta == 0)
{
     x1 = -b / 2 * a;
     printf("Exite apenas 1 raiz que eh : %f", x1);

}if (delta > 0)       
{
	
x1 = (-b + sqrt(delta)) / (2 * a);
x2 = (-b - sqrt(delta)) / (2 * a);

printf("Exitem 2 raizes que sao x1 = %f , x2 = %f", x1, x2);
}

return (0);

}

