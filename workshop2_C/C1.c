#include <stdio.h>
#include <math.h>

int main()
{
   int nbr;
 
   printf("donner un entier\n");
   scanf("%d", &nbr);
 
   if(nbr<0){
      printf("le nbr %d est negatif", nbr);
   }
   else if(nbr>0){
      printf("le nbr %d est positif", nbr);
   }
   
   else{
      printf("Le nbr %d est nul", nbr);
   }
   
   return 0;
}