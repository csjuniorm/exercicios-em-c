#include <stdio.h>

int main() {
    float base, altura;

    printf("Insira a base do retangulo: \n");
    scanf("%f", &base);
    printf("Insira a altura do retangulo: \n");
    scanf("%f", &altura);

    printf("O perimetro e: %.2f e a area e: %.2f", (base + altura)*2, base*altura); 

return 0;
} 
