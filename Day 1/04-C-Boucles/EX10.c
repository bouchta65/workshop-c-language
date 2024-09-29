#include <stdio.h>

int main() {
 int a,i,R=0;
    printf("entrer votre nombre \n");
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        R+=i;
    }
   printf("La résultat est :%d",R);
    return 0;
}
