#include <stdio.h>

int main() {
    int a;
    int i;
    int c=1;
    printf("donner votre nombre :\n");
    scanf("%d",&a);
    printf(" %d ",c);
    for(i=1;i<a;i++){
        c =c+2;
       printf("%d ",c);
    }
    return 0;
}
