#include <stdio.h>

int main() {
    int num1, res;

    printf("Digite um numero: \n");
    scanf("%d", &num1);
    res = (num1%3);

    if(num1 == 0)
    {
        printf("E multiplo de 3 ");
    }
    else 
    {
        printf("N e multiplo de 3");
    }
    
return 0;
}
