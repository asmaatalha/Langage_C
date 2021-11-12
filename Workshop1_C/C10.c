#include <stdio.h>
#include <math.h>

int main()
{
    float r, C;
    float p = 3.14;

    printf("Entrer rayon: ");
    scanf("%f", &r);

    C = 2 * p * r;

    printf("rayon la cercle : %f", C);

    return 0;
}