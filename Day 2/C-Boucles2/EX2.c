#include <stdio.h>

int main() {
    int n;
    int i,j,k;
    int c=0;
    printf("donner votre nombre :\n");
    scanf("%d",&n);
        for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++) {
            printf(" ");
        }
 
        for (k = 1; k <= i; k++) {
            printf("* ");
        }
 
        printf("\n");
    }

    return 0;
}
