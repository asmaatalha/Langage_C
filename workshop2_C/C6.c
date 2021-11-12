#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c, x0, x1, x2, x;

    float x1, x2;

    printf("Entrer la valeur de a: \n");
    scanf("%d", &a);

    printf("Entrer la valeur de b: \n");
    scanf("%d", &b);

    printf("Entrer la valeur de c: \n");
    scanf("%d", &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Resultat est: ", c);
            }
            else
            {
                printf("Resultat Impossible");
            }   
        }
        else
        {
            x = -c / b;
            printf("Resultat est: ", x);
        }
    }
    else
    {
        deleta = (b * b) - 4 * a * c;
        if (deleta < 0)
        {
            printf("la solution est : l'ensemble vide");
        }
        else if (deleta == 0)
        {
            x0 = -b / (2 * a);
            printf("la solution est: ", x0);
        }
        else
        {
            x1 = (-b - sqrt(deleta)) / (2 * a);
            x2 = (-b + sqrt(deleta)) / (2 * a);

            printf("la solution est: %f et %f", x1, x2);
        }
        
        
        
    }
    
    

    return 0;
}