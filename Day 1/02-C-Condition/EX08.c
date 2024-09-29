#include <stdio.h>

int main() {
   int a;
   printf("entrer votre moyenne :\n ");
   scanf("%d",&a);
   if(a>=0  && a<=20){
       if(a<10){
       printf("recalé");
   }else if(a>=10 && a<12){
       printf("passable");
   }else if(a>=12 && a<14){
       printf("assez bien");
   }else if(a>=14 && a<16){
       printf("bien");
   }else{
       printf("Tree bien");
   }
   }else{
       printf("entrer une moyenne entre 0 et 20");
   }
   

    return 0;
}
