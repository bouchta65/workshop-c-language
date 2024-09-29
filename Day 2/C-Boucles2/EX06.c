#include <stdio.h>

int main() {
    int n;
    int i;

    printf("Donnez votre nombre :\n");
    scanf("%d", &n);

    printf("Les diviseurs de %d sont :\n", n);
    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d \n", i);
        }
    }

    return 0;
}
