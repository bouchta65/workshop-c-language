// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,x=0,x1,x2,Dilta=0;
    printf("Votre  a  \n");
    scanf("%f",&a);
    
    printf("Entrer b \n");
    scanf("%f",&b);
   
    printf("Entrer c \n");
    scanf("%f",&c);
    
    Dilta = b*b +(-4*a*c);
    if(Dilta<0){
         x1=-b/(2*a);
 printf("la solutions est \n %f:",x1);
    }else if(Dilta>0){
         x1 = (-b + sqrt(Dilta)) / (2 * a);
         x2 = (-b - sqrt(Dilta)) / (2 * a);
         printf("les deux solutions sont \n %f %f:",x1,x2);
    }
    else{
        printf("pas de solution");
    }
   

    return 0;
}