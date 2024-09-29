#include <stdio.h>

int main() {
    int a;
    int i =0;
    int c=0;
    printf("donner votre nombre :\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        c =c+i;
       
    }
    printf("pour n=%d,la somme est : %d",a,c);
    return 0;
}
