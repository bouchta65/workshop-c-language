// Online C compiler to run C program online
#include <stdio.h>
int Factorielle(int nb){
    int i,r=1;
    for(i=1;i<=nb;i++)
    r=r*i;
    return r;
}

int main() {
    int nb,R;
    printf("entrer votre nombre : ");
    scanf("%d",&nb);
    R=Factorielle(nb);
    printf("%d",R);

    return 0;
}