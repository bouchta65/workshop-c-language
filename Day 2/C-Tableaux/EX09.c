#include <stdio.h>

int main() {
    int tab[200];
    int tab2[200];
    int i,a,f,j;
    printf("entrer le nombre d'éléments de votre tableuax : ");
    scanf("%d",&a);
    for (i = 0; i <a; i++) {
        printf("entrer element %d :",i+1);
        scanf("%d",&tab[i]);
    }
    
    for (i = 0; i<a; i++) {
        tab2[(a-1)-i]=tab[i];
    }
     for (i = 0; i <a; i++) {
        printf("%d",tab2[i]);
    } 
    
   
    
    return 0;
}
