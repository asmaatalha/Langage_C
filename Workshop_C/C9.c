int main()
{
    int x1, y1, x2, y2, distance;

    printf("Entrer points 1 (x1, y1) ");
    scanf("%d%d", &x1, &y1);

    printf("Entrer points 2 (x2, y2) ");
    scanf("%d%d", &x2, &y2);
    
    distance = sqrt((x1 - x2) * (x1 - x2) + (y2 -y2) * (y2 -y2));

    printf("distance between (%d, %d) and (%d, %d) is %d", x1, x2, y1, y2, distance);

    return 0;
}