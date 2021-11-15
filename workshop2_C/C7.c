#include <stdio.h>
#include <math.h>

int main(){

    float an, moi, jou, heu, min, sec;

    printf("Entrer la année: \n");
    scanf("%f", &an);

    moi = an / 12;
    jou = an / 365;
    heu = an / 8760;
    min = an / 825600;
    sec = an / 3536000;


    printf("Nomber de moi dans l'année: %f", moi);
    printf("Nomber de jours dans l'année: %f", jou);
    printf("Nomber de heures dans l'année: %f", heu);
    printf("Nomber de minutes dans l'année: %f", min);
    printf("Nomber de secondes dans l'année: %f", sec);

    
    return 0;
}