#include <stdio.h>
#include <math.h>

int main()
{
    int r, Lo, La;

    printf("Entrer longueur et largeur: ");
    scanf("%d%d", &Lo, &La);

    r = 2 * Lo * La;

    printf("Circonférence d'un rectangle : %d", r);

    return 0;
}