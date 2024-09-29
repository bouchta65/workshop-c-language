#include <stdio.h>

int main() {
 int Revenu,Score,Duree,i,R=0;
    printf("entrer votre Revenu annuel (en euros) \n");
    scanf("%d",&Revenu);
    printf("Score de crédit (sur 1000) \n");
    scanf("%d",&Score);
    printf("entrer votre Revenu annuel (en euros) \n");
    scanf("%d",&Duree);
   if(Revenu>=30000&&Score>=700&&Duree<=10){
       printf("Éligible");
   }else if(Revenu>=30000&&Score>=650&&Duree<=15){
       printf("Éligible avec conditions");
   }else if(Revenu<30000&&Score<650&&Duree>15){
       printf("Non éligible");
   }
   
    return 0;
}
