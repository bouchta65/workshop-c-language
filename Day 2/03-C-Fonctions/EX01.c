// Online C++ compiler to run C++ program online
#include <iostream>
int somme(int a,int b){
    int x;
    x=a+b;
    return x;
}
int main() {
    int x1,x2,resultat;
    printf("entrer la premiere valeur : ");
    scanf("%d",&x1);
    printf("entrer la deuxieme valeur : ");
    scanf("%d",&x2);
    resultat = somme(x1,x2);
    printf("Resultat de la somme est : %d",resultat);

    return 0;
}