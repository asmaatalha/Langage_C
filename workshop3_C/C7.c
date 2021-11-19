#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, A, B, C;
    printf("Entrez un entier:\n");
    scanf("%d", &n);
    A = 1;
    B = 1;
    for(i = 2; i <= n; i++)
    {
       C = B + A;
       A = B;
       B = C;
    }
    if(n <= 1)
    {
        printf("U(%d) = 1\n",n);
    }
    else 
    {
        printf("U(%d) = %d\n",n,C);
    }
    
    return 0;
}