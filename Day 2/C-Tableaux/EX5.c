#include <stdio.h>

int main() {
    int tab[200];
    int i,a,min;
    printf("entrer le nombre d'éléments de votre tableuax : ");
    scanf("%d",&a);
    for (i = 0; i <a; i++) {
        printf("entrer element %d :",i+1);
        scanf("%d",&tab[i]);
    }
    min=tab[0];
    for (i = 0; i <a; i++) {
        if(tab[i]<min){
            min=tab[i];
        }
    }
     printf("Le min est : %d ",min);
    
    return 0;
}
