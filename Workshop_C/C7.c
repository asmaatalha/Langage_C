int main()
{
    int a, b, mul, somme, sous;
    float div , res;

    printf("Entrer a: ");
    scanf("%d", &a);

    printf("Entrer b: ");
    scanf("%d", &b);

    mul = a * b;
    somme = a + b;
    sous = a - b;
    div  = a / b;
    res = a % b;

    printf("multiplication  : %d, Somme : %d, soustraction  : %d, division  : %f, reste  : %f", mul, somme, sous, div, res);

    return 0;
}