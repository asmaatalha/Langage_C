#include <stdio.h>
#include <math.h>

int main(){

    int P;

    printf("Point étudiant: \n");
    scanf("%d", &P);

    if (P >= 10 && P <12)
    {
        printf("%d la mention passable.", P);
    }
    else if (P >= 12 && P <14)
    {
        printf("%d la mention assez bien.", P);
    }
    else if (P >= 14 && P <16)
    {
        printf("%d la mention bien.", P);
    }
    else if (P >= 16)
    {
        printf("%d la mention très bien.", P);
    }    

    
    return 0;
}