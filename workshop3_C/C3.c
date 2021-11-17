#include <stdio.h>
#include <math.h>

int main()
{
    int nbr, A=0, i;
    printf("entrez un nomeb: ");
    scanf("%d", &nbr);
    for (i = 2; i < nbr; i++)
    {
        if (nbr%i == 0 )
        {
            A=1;
            break;
          
        }
    }
    if(A==1 || nbr==1 ){
        printf("le nomber non premier");     
    }
    else{
        printf("le nombre premier");
    }

    
    return 0;
}
