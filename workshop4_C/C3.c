#include <stdio.h>
#include <math.h>

void  bool_isPremier()
{
    int nbr, A = 0, i;
    printf("entrez un nombre: ");
    scanf("%d", &nbr);
    for (i = 2; i < nbr; i++)
    {
        if (nbr%i == 0 )
        {
            A = 1;
            break;
        }
    }
    if(A == 1 || nbr == 1 ){
        printf("le nomber non premier");     
    }
    else{
        printf("le nombre premier");
    }
}


int main()
{
    bool_isPremier();
    
    return 0;
}