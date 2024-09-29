#include <stdio.h>

int main() {
    int tab[200];
    int i,a,R;
    printf("entrer le nombre d'éléments de votre tableuax : ");
    scanf("%d",&a);
    for (i = 0; i <a; i++) {
        printf("entrer element %d :",i+1);
        scanf("%d",&tab[i]);
    }
    for (i = 0; i <a; i++) {
        R+=tab[i];
    }
     printf("La somme de tableaux est : %d ",R);
    
    return 0;
}
