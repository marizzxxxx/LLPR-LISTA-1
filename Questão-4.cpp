#include <stdio.h>

int main(){
	
	float a, b, c, d, produto;
	printf("Programa que dado 4 números, calcule o produto entre eles \n \n");
	printf("primeiro numero:");
	scanf("%f", &a);
	
	printf("segundo numero:");
	scanf("%f", &b);
	
	printf("terceiro numero:");
	scanf("%f", &c);
	
	printf("quarto numero:");
	scanf("%f", &d);
	
	produto=a*b*c*d;
	
	printf("O valor calculado foi: %.f", produto);
	
	return 0;
}
