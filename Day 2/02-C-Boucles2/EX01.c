#include <stdio.h>

int main() {
    int a;
    int i =0;
    int c=0;
    printf("donner votre nombre :\n");
    scanf("%d",&a);
    for(i=10;i>=1;i--){
        c = i*a;
        printf("%d*%d=%d \n",a,i,c);
    }

    return 0;
}
