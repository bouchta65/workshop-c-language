#include <stdio.h>

int main() {
    int n;
    int i;
    int nbr;
    printf("donner votre nombre :\n");
    scanf("%d",&n);
    while(n!= 0){
    nbr = nbr*10;
    nbr = nbr + n%10;
    n = n/10;
    }
    printf("%d",nbr);
    return 0;
}
