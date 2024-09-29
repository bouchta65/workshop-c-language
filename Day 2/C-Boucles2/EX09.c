#include <stdio.h>

int main() {
 int b,e,R=1;
    printf("entrer votre votre base\n");
    scanf("%d",&b);
    printf("entrer votre votre exposant\n");
    scanf("%d",&e);
    while(e!=0){
        R*=b;
        e--;
    }
   printf("%d",R);
   
    return 0;
}
