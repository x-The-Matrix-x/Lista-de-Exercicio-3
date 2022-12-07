/*Questao 8: Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorne o preço
final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
digitado não for válido, mostrará uma mensagem de erro.*/

#include<stdio.h>
int main(){
    float valor, valorFinal;
    char estado[4];

    printf("Qual o valor do produto? ");
    scanf("%f", &valor);

    printf("Qual o estado de destino (MG, SP, RJ, MS) ");
    scanf("%s", &estado);

if(strcmp( estado, "mg" ) == 0 || strcmp( estado, "MG") == 0  )
{
    valorFinal = valor + (valor * 7 / 100);
    printf("O valor final de MG sera: %f", valorFinal);

        }else if(strcmp(estado, "sp") == 0 || strcmp(estado, "SP")== 0)
        {
         valorFinal = valor + (valor * 12 / 100);
         printf("O valor final de SP sera: %f", valorFinal);

            }else if(strcmp(estado, "rj") == 0 || strcmp(estado, "RJ")== 0)
            {
                valorFinal = valor + (valor * 15 / 100);
                printf("O valor final de RJ sera: %f", valorFinal);
           
                    }else if(strcmp(estado, "ms") == 0 || strcmp(estado, "MS")== 0)
                    {
                        valorFinal = valor + (valor * 8 / 100);
                        printf("O valor final de MS sera: %f", valorFinal);
                    }else
                        printf("Valores invalidos");
                        
                        return (0);


}
