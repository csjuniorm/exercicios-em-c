#include <stdio.h>

int main() {
    int inteiro, num1;

    printf("Insira um numero: ");
    scanf("%d", &num1);

    inteiro=0;

    while(inteiro<=num1)
    {
        printf("%d\n", inteiro);
        inteiro=inteiro+2;
    }
return 0;
}
