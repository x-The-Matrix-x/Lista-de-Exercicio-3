/*Questao 16: Fa�a um programa que mostre ao usu�rio um menu com quatro op��es de opera��es
matem�ticas (as opera��es b�sicas, por exemplo). O usu�rio escolhe uma das op��es, e
o seu programa pede dois valores num�ricos e realiza a opera��o, mostrando o
resultado.*/

#include<stdio.h>
int main(){
    float num1, num2, resultado;
    char c = '0';

   do{
num1, num2, resultado = 0;
printf("(1) Adicao\n");
printf("(2) Subtracao\n");
printf("(3) Multiplicacao\n");
printf("(4) Divisao\n");
printf("(0) Encerrar\n");

        printf("\nPor favor, usuario, escolha a operacao: ");
        c = getche();

   if( c != '0'){
      printf("\nDitigite o primeiro numero: ");
      scanf("%f", &num1);
      printf("Ditigite o segundo numero: ");
      scanf("%f", &num2);
     if( c == '1')
     {
       resultado = num1 + num2;
     }else
     {
        if( c == '2')
        {
            resultado = num1 - num2;
        }else
        {
            if( c == '3')
            {
                resultado = num1 * num2;
            }else{
                if( c == '4' )
                {
                    if( num2 != 0 )
                    {
                        resultado = num1 / num2;
                    }else 
                        printf("nao se divide por 0");
                }
                    
            }
        }
    }
     printf("\n");
     printf("O resultado e:\t %f", resultado);
     printf("\n");

//system("pause"); = getch() nesse caso pois o getch apenas espera vc digitar algo
printf("\npressione qualquer tecla para continuar:  ");
getch();
system("cls");
} 

   }while ( c != '0');



return (0);
}





