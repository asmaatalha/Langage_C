#include <stdio.h>
#include <math.h>

int main(){

    int E;

    printf("la température de l'eau: \n");
    scanf("%d", &E);

    if (E <= 0)
    {
        printf("%d Glace.", E);
    }
    else if (E > 0 && E <= 100)
    {
        printf("%d Eau.", E);
    }
    else if (E > 100)
    {
        printf("%d Vapeur.", E);
    }
       

    
    return 0;
}