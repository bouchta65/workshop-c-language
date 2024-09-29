#include <stdio.h>

int main() {
    int tab[200];
    int tabcpy[200];
    int i,a,f,j;
    printf("entrer le nombre d'éléments de votre tableuax : ");
    scanf("%d",&a);
    for (i = 0; i <a; i++) {
        printf("entrer element %d :",i+1);
        scanf("%d",&tab[i]);
    }
    
    f=tab[0];
    for (i = 0; i <a; i++) {
      tabcpy[i]=tab[i];

    }
    printf("le tableaux origine est :");
    for(i=0;i<a;i++){
        printf("%d",tab[i]);
    }
    printf("\n");
    printf("le tableaux copier est :");
    for(i=0;i<a;i++){
        printf("%d",tabcpy[i]);
    }
    
    return 0;
}
