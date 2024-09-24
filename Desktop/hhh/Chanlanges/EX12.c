#include <stdio.h>

int main() {
    int nbr,d1,d2,d3,d4;
    
 
    printf("Entrez un nombre Ã inverser\n");
    scanf("%d", &nbr);
    d1 = nbr / 1000;
    d2 = (nbr / 100)%10;
    d3 = (nbr / 10)%10;
    d4 = nbr % 10;
    printf("Le nombre en sens inverse est = %d%d%d%d\n",d4,d3,d2,d1);
    return 0;
}