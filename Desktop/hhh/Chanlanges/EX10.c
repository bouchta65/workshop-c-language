#include <stdio.h>

int main() {
    int r, V=0;
    const float p = 3.14;
    printf("Entrez le rayon : ");
    scanf("%d", &r);
    V = (4/3) * p * r*r*r;
    printf("le volume est %d\n",V);
    return 0;
}