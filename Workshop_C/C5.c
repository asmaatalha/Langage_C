int main(){
    
    float F, C;

    printf("Temperature en F : \n");
    scanf("%f", &F);

    C = F / 1.8 - 32;

    printf("Temperature en C : %f\n", C);

    if (C < 0){
        printf("très froid");
    }
    else if(C <= 20){
        printf("froid");
    }
    else if (C == 30){
        printf("chaud");
    }
    else (C <= 30){
        printf("très chaud");
    }
    
    return 0;
}