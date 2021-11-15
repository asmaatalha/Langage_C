#include <stdio.h>
#include <math.h>

int main(){

    int N;

    printf("Entrer le nombre: \n");
    scanf("%d", &N);

    if (N < 0)
    {
        printf("le nombre %d négatif.", N);
    }
    else if (N > 0)
    {
        printf("le nomber %d positif.", N);
    }
    else
    {
        printf("le nomber %d égal à zéro.", N);
    }
    
    
    return 0;
}