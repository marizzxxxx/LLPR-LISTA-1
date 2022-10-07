#include <stdio.h>

int main(){
	
	float a, b, c, media; 
	printf("Programa para calcular a media de 3 numeros:\n\n");
	printf("primeiro numero:");
	scanf("%f", &a);
	
	printf("segundo numero:");
	scanf("%f", &b);
	
	printf("terceiro numero:");
	scanf("%f", &c);
	
	media=a+b+c/3;
	
	printf("O valor calculado da media entre os numeros %f, %f e %f foi: %f", a, b, c, media);
	
	return 0;
}
