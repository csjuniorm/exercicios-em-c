#include <stdio.h>

int main() {
    int i, j;
    printf("Introduza um numero: \n");
    scanf("%d", &i);

    printf("Introduza outro numero: \n");
    scanf("%d", &j);

    if(j>=i) 
    {
    for(i=i+1; i<j; i++)
        {
        printf("%d\n", i);
        }
    }

    else 
    {
    for(j=j+1; j<i; j++)
        {
        printf("%d\n", j);
        }
    }
    return 0;
}
