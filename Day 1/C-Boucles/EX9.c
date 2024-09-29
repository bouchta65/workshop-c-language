#include <stdio.h>

int main() {
 int a,i=0;
    printf("entrer votre nombre \n");
    scanf("%d",&a);
    //for(i=0;i<10;i++){}
    while(a!=0){
        a=a/10;
        i++;
    }
        printf("count est : %d",i);
    return 0;
}
