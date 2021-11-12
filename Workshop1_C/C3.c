#include <stdio.h>
#include <math.h>

int main(){
    
    float mile, m;

    printf("distance en Metre : \n");

    scanf("%f", &m);

    mile = m * 1609;

    printf("distance en Mile : %f\n", mile);

    return 0;
}