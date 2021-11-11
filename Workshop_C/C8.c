int main()
{
    int a, b, c, d, somme;
    float div;

    printf("Entrer a: ");
    scanf("%d", &a);

    printf("Entrer b: ");
    scanf("%d", &b);

    printf("Entrer c: ");
    scanf("%d", &c);

    printf("Entrer d: ");
    scanf("%d", &d);

    somme = a + b + c + d;
    
    div = somme / 4;

    printf("Somme : %d, division  : %f,", somme, div);

    return 0;
}