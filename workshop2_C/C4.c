#include <stdio.h>
#include <math.h>

int main(){

    char alphapy;

    printf("Entrez la voyelle: \n");
    scanf("%s", &alphapy);

    switch (alphapy)
    {
        case 'a':
            printf("%c est une voyelle", alphapy);
            break;
        case 'e':
            printf("%c est une voyelle", alphapy);
            break;
        case 'i':
            printf("%c est une voyelle", alphapy);
            break;
        case 'o':
            printf("%c est une voyelle", alphapy);
            break;
        case 'u':
            printf("%c est une voyelle", alphapy);
            break;
        case 'y':
            printf("%c est une voyelle", alphapy);
            break;
        default:
            printf("%c est une consone", alphapy);
            break;
    }
       

    return 0;
}