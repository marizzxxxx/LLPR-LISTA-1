#include <stdio.h>

int main(){

    int a, b, resto;
    float quociente;
    
    printf("Programa para calcular o quociente e resto de dois números \n\n");
    
    printf("Primeiro número:");
    scanf("%d", &a);
    
    printf("Segundo número:");
    scanf("%d", &b);
    
    quociente = (float) a/b;
    resto = a%b;
    
    printf("O valor do quociente é: %.2f e o resto é %d", quociente, resto);
    
    
    return 0;
}