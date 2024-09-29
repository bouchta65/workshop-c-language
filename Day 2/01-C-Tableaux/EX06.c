#include <stdio.h>

int main() {
    int tab[200];
    int i,a,f;
    printf("entrer le nombre d'éléments de votre tableuax : ");
    scanf("%d",&a);
    printf("entrer votre facteur : ");
    scanf("%d",&f);
    for (i = 0; i <a; i++) {
        printf("entrer element %d :",i+1);
        scanf("%d",&tab[i]);
    }
    printf("votre tableaux apré la Multiplication est :");
    for (i = 0; i <a; i++) {
        tab[i]=tab[i]*f;
        printf("%d ",tab[i]);
    }
    return 0;
}
