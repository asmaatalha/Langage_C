int main()
{
    char nom[20];
    char prenom[20];
    int age;
    char sexe[20];
    char tele[20];

    printf("Votre Nom ");
    scanf("%s", nom);

    printf("Votre Prenom ");
    scanf("%s", prenom);

    printf("Votre Age ");
    scanf("%d",&age);

    printf("Votre Sexe ");
    scanf("%s", sexe);

    printf("Votre Tele ");
    scanf("%s", tele);

    printf("Nom : %s, Prenom : %s, Age : %d, Sexe : %s, tele : %s", nom, prenom, age, sexe, tele);

    return 0;
}