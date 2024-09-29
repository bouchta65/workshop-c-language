#include <stdio.h>

int main() {
    int a,b;
    int i =0;
    int c=1;
    printf("donner votre base :\n");
    scanf("%d",&a);
    printf("donner votre exposant :\n");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        c *=a;
       
    }
    printf("%d^%d = %d ",a,b,c);
    
    return 0;
}
