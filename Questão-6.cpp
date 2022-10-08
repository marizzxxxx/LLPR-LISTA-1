#include <stdio.h>

int main(){

    float a, b, c, soma, subtracao;
    
    
    printf("programa que leia dois numeros, some eles e depois leia outro número e subtraia ele com o resultado da soma.\n\n");
    
    printf("Primeiro número:");
    scanf("%f", &a);
    
    printf("Segundo número:");
    scanf("%f", &b);
    
    soma = a + b;
    
    printf("O resultado da soma é: %.2f \n", soma);
    
    printf("Terceiro número:");
    scanf("%f", &c);
    
    subtracao = soma - c;
    
    printf("O resultado da subtracao é: %.2f", subtracao);
    
    
    return 0;
}