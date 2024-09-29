// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,k=0;
    printf("Entrer N1  \n");
    scanf("%d",&a);
    
    printf("Entrer N2 \n");
    scanf("%d",&b);
    
    if(a==b){
    k = (a+b)*3;
    printf("%d \n",k);
    }else{
    k = (a+b);
    printf("%d \n",k);
    }
   

    return 0;
}