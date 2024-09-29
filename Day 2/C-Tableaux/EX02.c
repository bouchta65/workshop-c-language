#include <stdio.h>

int main() {
    int tab[30];
    int i,a;
    printf("entrer le nombre d'éléments de votre tableuax : ");
    scanf("%d",&a);
    for (i = 0; i <a; i++) {
        printf("entrer element %d :",i+1);
        scanf("%d",&tab[i]);
    }
    printf("Les éléments de votre tableuax sont :\n");
    for (i = 0; i <a; i++) {
        printf("%d ",tab[i]);
    }
    
    return 0;
}
