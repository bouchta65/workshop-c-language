#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Entrez un nombre entier: ");
    scanf("%d", &n);

    printf("Les nombres premiers de 1 à %d sont: \n", n);

    for(i = 2; i <= n; i++) {
        isPrime = 1; 

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
