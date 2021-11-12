#include <stdio.h>
#include <math.h>

int main(){

    int a, b, Somme;
    printf("Entrer le nomber a et b:\n");
    scanf("%d%d", &a, &b);

    Somme = a + b;

    printf("la somme de deux valeurs il est :%d", Somme);

    if (a == b)
    {
        printf("la somme de deux valeurs il est :%d", Somme * 3);
    }
    

    return 0;
}