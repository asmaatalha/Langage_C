#include <stdio.h>
#include <math.h>

int main(){

    float P;

    printf("Point étudiant: \n");
    scanf("%f", &P);

    if (P >= 10 && P <12)
    {
        printf("%f la mention passable.", P);
    }
    else if (P >= 12 && P <14)
    {
        printf("%f la mention assez bien.", P);
    }
    else if (P >= 14 && P <16)
    {
        printf("%f la mention bien.", P);
    }
    else if (P >= 16)
    {
        printf("%f la mention très bien.", P);
    }    

    
    return 0;
}