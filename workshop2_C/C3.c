#include <stdio.h>
#include <math.h>

int main(){

    int a, b;

    printf("Entre le nomber:\n");
    scanf("%d", &a);

    b = a%2;
    if (b == 0)
    {
        printf("le nomber %d est pair", a);
    }
    else
    {
        printf("le nomber %d est impair", a);
    }
    

    return 0;
}