#include <stdio.h>
#include <math.h>

void Echange(int *a, int *b);
int main(void) 
{
    int x, y;
 
    printf("Entrez deux entiers: ");
    scanf("%d%d", &x, &y);
    printf("\nAvant d'appeler fonction Echange:\n\tx = %d\n\ty = %d\n", x, y);
    Echange(&x, &y);
    printf("\nAprès d'appeler fonction Echange:\n\tx = %d\n\ty = %d\n", x, y);
 
    return 0;
    
}
void Echange(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
} 