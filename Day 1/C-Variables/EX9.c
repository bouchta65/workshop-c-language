// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int main() {
    float D,x1,x2,y1,y2,z1,z2;
    printf("donner les valeurs de X1,X2: \n");
    scanf("%f%f",&x1,&x2);
    printf("donner les valeurs de Y1,Y2: \n");
    scanf("%f%f",&y1,&y2);
    printf("donner les valeurs de Z1,Z2: \n");
    scanf("%f%f",&z1,&z2);
    D = sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));
    printf("la distance entre deux points dans un espace 3D : %.2f",D);
    return 0;
}