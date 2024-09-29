#include <stdio.h>

int main() {
    int tab[200];
    int i,a,f,j;
    printf("entrer le nombre d'éléments de votre tableuax : ");
    scanf("%d",&a);
    for (i = 0; i <a; i++) {
        printf("entrer element %d :",i+1);
        scanf("%d",&tab[i]);
    }
    printf("votre tableaux croissant est :");
    f=tab[0];
    for (i = 0; i <a; i++) {
        for(j=i+1;j<a;j++){
          if(tab[i]>tab[j]){
            f=tab[i];
            tab[i]=tab[j];
            tab[j]=f;
        }  
        }

    }
    for(i=0;i<a;i++){
        printf("%d",tab[i]);
    }
    
    return 0;
}
