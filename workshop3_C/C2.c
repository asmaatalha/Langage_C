#include <stdio.h>
#include <math.h>

int main(){

    int x, i, j;
    printf("entrez un nombre: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {
        for (j = x - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i + i - 1; j++)
        {
            printf("*");
        }
        
        printf("\n");

    }
    


    return 0;
}