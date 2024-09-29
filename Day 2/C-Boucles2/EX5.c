#include <stdio.h>

int main() {
    int n;
    int i;
    int nbr=0;
    printf("donner votre nombre :\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        nbr=nbr+i;
    }
    printf("%d",nbr);
    return 0;
}
