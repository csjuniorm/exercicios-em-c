#include <stdio.h>
#include <math.h>

    int main() {
        
    float volume, area, altura, raio, pi = 3.1415;
    printf("insira o raio: ");
    scanf("%f", raio);
    printf("Insira a altura: ");
    scanf("%f", altura);



    volume = (pi * pow(raio,2) * altura); 
    printf("%f", volume);
    
}
