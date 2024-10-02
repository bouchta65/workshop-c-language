// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct personne{
    char nom[20];
    char prenom[20];
    double note[5];
};
int main() {
    int i;
    struct personne p1;
    strcpy(p1.nom, "bouchta");
    strcpy(p1.prenom, "mohamed");
    p1.note[0] = 17.50;
    p1.note[1] = 15.30;
    p1.note[2] = 14.90;
    p1.note[3] = 18.00;
    p1.note[4] = 11.40;
    printf("Nom : %s \nPrenom : %s \n",p1.nom,p1.prenom);
    printf("Notes : \n");
    for(i=0;i<5;i++){
        printf("%.2lf \n",p1.note[i]);
    }
    return 0;
}