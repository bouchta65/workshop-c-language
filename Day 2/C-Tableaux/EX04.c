#include <stdio.h>

int main() {
    int tab[200];
    int i,a,max;
    printf("entrer le nombre d'éléments de votre tableuax : ");
    scanf("%d",&a);
    for (i = 0; i <a; i++) {
        printf("entrer element %d :",i+1);
        scanf("%d",&tab[i]);
    }
    max=tab[0];
    for (i = 0; i <a; i++) {
        if(tab[i]>max){
            max=tab[i];
        }
    }
     printf("Le max est : %d ",max);
    
    return 0;
}
