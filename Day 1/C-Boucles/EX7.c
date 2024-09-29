#include <stdio.h>

int main() {
    int a;
    int i;
    int nbrinverse;
    printf("donner votre nombre :\n");
    scanf("%d",&a);
 
        while(a!= 0){
            nbrinverse = nbrinverse*10;
            nbrinverse = nbrinverse + a%10;
            a = a/10;
        }
        printf("%d",nbrinverse);
    return 0;
}
