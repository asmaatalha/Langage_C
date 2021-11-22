#include <stdio.h>
#include <math.h>


void add()
{
    int a, b, s;
    printf("Entrez le nomber a:\n");
    scanf("%d", &a);
    
    printf("Entrez le nomber b:\n");
    scanf("%d", &b);

    s = a + b;

    printf("la somme de nomber est: %d", s);

    return;
}

int main()
{
    add();


    return 0;
}