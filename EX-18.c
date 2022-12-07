/*Questao 18: Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um
valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual
o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As
moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de
notas necessárias.*/

#include <stdio.h>
int main(){
	double Valor;
	int A, B, C, D, E, F, G, H, I, J, K, L;
	
	//ENTRADA
	scanf("%lf", &Valor);
	
	A = Valor/100;
	Valor = Valor - (A*100);
	
	B = Valor/50;
	Valor = Valor - (B*50);
	
	C = Valor/20;
	Valor = Valor - (C*20);
	
	D = Valor/10;
	Valor = Valor - (D*10);
	
	E = Valor/5;
	Valor = Valor - (E*5);
	
	F = Valor/2;
	Valor = Valor - (F*2);
	
	G = Valor/1;
	Valor = Valor - (G*1);
	
	H = Valor/0.50;
	Valor = Valor - (H*0.50);
	
	I = Valor/0.25;
	Valor = Valor - (I*0.25);
	
	J = Valor/0.10;
	Valor = Valor - (J*0.10);
	
	K = Valor/0.05;
	Valor = Valor - (K*0.05);
	
	L = Valor/0.01;
	Valor = Valor - (L*0.01);
	
	//SAÍDA
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", A);
	printf("%d nota(s) de R$ 50.00\n", B);
	printf("%d nota(s) de R$ 20.00\n", C);
	printf("%d nota(s) de R$ 10.00\n", D);
	printf("%d nota(s) de R$ 5.00\n", E);
	printf("%d nota(s) de R$ 2.00\n", F);
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", G);
	printf("%d moeda(s) de R$ 0.50\n", H);
	printf("%d moeda(s) de R$ 0.25\n", I);
	printf("%d moeda(s) de R$ 0.10\n", J);
	printf("%d moeda(s) de R$ 0.05\n", K);
	printf("%d moeda(s) de R$ 0.01\n", L);

return 0;
}
