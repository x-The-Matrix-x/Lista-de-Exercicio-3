/*Questao 20: Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas como
em que ? = b² – 4 * a * c e ax²+ bx + c = 0 representa uma equação do segundo grau. A variável
a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de
segundo grau”. Do contrário, imprima:
• Se ? < 0, não existe real. Imprima a mensagem “Não existe raiz”.
• Se ? = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
• Se ? > 0, existem duas raízes reais. Imprima as raízes.*/

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

