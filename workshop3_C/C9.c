#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, p, ok;
    printf("Donnez un entier:\n");
    scanf("%d", &n);
    printf("Les nombres premiers inferieurs a %d sont:",n);
    for(p = 2; p <= n; p++)
    {
        ok = 1;
        for(i = 2; i < p; i++)
        {
            if(p%i == 0) {
                ok = 0;
               
                break; 
            }
        }
        if(ok == 1)
       
        printf("%d\n", p);
       
    }
   
    return 0;
}