#include <stdio.h>

int main() {
    float a,b,c,MG;
    printf("Entrez a et b et c: ");
    scanf("%f%f%f",&a,&b,&c);
    printf("la moyene general est: %.2f ",((a * 2) + (b * 3) + (c * 5)) / 10);
    return 0;
}