#include <stdio.h>

int main() {
    int tab[200];
    int tab2[200];
    int i,a,f,j,faund;
    printf("entrer le nombre d'éléments de votre tableuax : ");
    scanf("%d",&a);
    for (i = 0; i <a; i++) {
        printf("entrer element %d :",i+1);
        scanf("%d",&tab[i]);
    }
    printf("entrer l'élément à rechercher : ");
    scanf("%d",&f);
    for (i = 0; i<a; i++) {
        if(tab[i]==f){
            faund=1;
        }else{
            faund=0;
        }
    }
    if(faund==1){
        printf("good");
    }else{
       printf("no"); 
    }
    
   
    
    return 0;
}
