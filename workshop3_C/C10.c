


int main()
{
    int a, i, somme = 0;
    
    for(i = 0; i < 10; i++)
    {
        printf("Entrez le nomber\n");
        scanf("%d", &a);
        if(a < 0)
        {
            printf("Entrez le nomber superuer 0:\n");
            scanf("%d",&a);
        }
        
        somme = somme + a;
        
    }
    printf("la somme est: %d", somme);

    return 0;
}