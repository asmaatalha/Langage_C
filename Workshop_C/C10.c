#include <stdio.h>
#include <math.h>

int main()
{
    float r, C;
    float p = 3.14;

    printf("Entrer C: ");
    scanf("%f", &C);

    r = C / 2 * p;

    printf("rayon la cercle : %f", r);

    return 0;
}