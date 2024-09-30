// Online C++ compiler to run C++ program online
#include <iostream>
int Maximum(int a,int b){
    int x;
    if(a>b){
        x=a;
    }else{
        x=b;
    }
    return x;
}
int main() {
    int x1,x2,resultat;
    printf("entrer la premiere valeur : ");
    scanf("%d",&x1);
    printf("entrer la deuxieme valeur : ");
    scanf("%d",&x2);
    resultat = Maximum(x1,x2);
    printf("le Maximum est :  %d",resultat);

    return 0;
}