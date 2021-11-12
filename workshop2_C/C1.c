

int main()
{
   int nbr;
 
    printf("Entrez Le nombre\n");
    scanf("%d", &nbr);
 
    if(nbr<0){
       printf("le nbr est negatif");
    }
    
    else if(nbr>0){
       printf("le nbr est positif");
    }
    
    else{
        printf("Le nbr est nul");
    }
    
    return 0;
}