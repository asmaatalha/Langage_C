#include <stdio.h>
#include <math.h>

int main()
{
    int i, t[10], S = 0;
    
    for (i = 0; i <= 10; i++)
    {
        printf("entrez un nombre: ");
        scanf("%d", &t[i]);
        if (t[i] == 0 || t[i] > 100)
        {
            break;
          
        }
        
        S = S + t[i];
        
    }
    
    printf("la somme %d", S);     
    

    return 0;
}