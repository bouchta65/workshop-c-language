#include <stdio.h>

int main() {
 int b,e=0,R=1,i=0;
    
    printf("entrer votre votre nembre\n");
    scanf("%d",&b);
 for(i=1;i<=b;i++){
     R=R*i;
     
 }
   printf("donc %d! = %d",b,R);
   
    return 0;
}
