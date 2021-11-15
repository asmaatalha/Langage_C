#include <stdio.h>
#include <math.h>

int main(){

    int N;

    printf("Entrer le nombre: \n");
    scanf("%d", &N);

    if (N < 0)
    {
        printf("le nombre est négatif: %f");
    }
    else if (N > 0)
    {
        printf("le nomber est positif: %f");
    }
    else
    {
        printf("le nomber est égal à zéro: %f");
    }
    
    
    return 0;
}