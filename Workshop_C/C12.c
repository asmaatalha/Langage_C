#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;

    printf("Entrer le Nombre: ");
    scanf("%d", &n);

    i = 1 / n;

    printf("son inverse est : %d", i);

    return 0;
}