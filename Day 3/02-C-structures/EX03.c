// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct rectangle{
    double longueur;
    double largeur;
};
double airerectangle(struct rectangle r){
    double aire = r.longueur * r.largeur;
    return aire;
}

int main() {
    double aire;
    struct rectangle  r;
    printf("Entrer la longueur du rectangle : ");
    scanf("%lf", &r.longueur);
    
    printf("Entrer la largeur du rectangle : ");
    scanf("%lf", &r.largeur);
    
    aire = airerectangle(r);
    printf("aire de rectangle est : %.2lf",aire);
    return 0;
}