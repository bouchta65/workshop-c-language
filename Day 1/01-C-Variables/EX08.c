#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,derb,jar7,MG;
    printf("Entrez a et b et c: ");
    scanf("%f%f%f",&a,&b,&c);
    derb = (a*b*c);
    jar7 = (1.0/3.0);
    MG = pow(derb,jar7);
    printf("la moyene general est: %f ",MG);
    return 0;
}