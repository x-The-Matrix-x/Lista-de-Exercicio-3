/*Questao 6: Faca um programa que receba a altura e o sexo de uma pessoa
 e calcule e mostre seu peso ideal, utilizando as seguintes formulas
 homens: (72.7 * h) - 58
 mulheres: (62.1 * h) - 44.7

 h - reprersenta a altura

 */
 
#include<stdio.h>
int main(){
    float altura, resultadoHomem, resultadoMulher;
    char sexo;

    printf("Digite o sexo e a altura:\n");
    scanf("%c%f", &sexo, &altura);

    if (sexo == 'm')
        {
            resultadoHomem = (72.7 * altura) - 58;
            printf("Resultado: %.1f\n", resultadoHomem);
        }
        else
        {
            resultadoMulher = (62.1 * altura) - 44.7;
            printf("Resultado: %.1f\n", resultadoMulher);
        }
}
