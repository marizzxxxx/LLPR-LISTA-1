#include <stdio.h>

int main(){
	
	int a, b, media; 
	printf("Programa para calcular a media de 2 numeros:\n\n");
	printf("primeiro numero:");
	scanf("%d", &a);
	
	printf("segundo numero:");
	scanf("%d", &b);
	
	media=(a+b)/2;
	
	printf("A media entre os dois numeros %d e %d foi: %d", a, b, media);
	
	return 0;
}
