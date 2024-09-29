#include <stdio.h>

int main() {
    int a;
    int i =0;
    int c=1;
    printf("donner votre nombre :\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        c =c*i;
       
    }
    printf("%d! =%d",a,c);
    return 0;
}
