int main(){
    
    float F, C;

    printf("Temperature en F : \n");
    scanf("%f", &C);

    F = C * 1.8 + 32;

    printf("Temperature en C : %f\n", F);

    return 0;
}