// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct personne{
    char nom[20];
    char prenom[20];
    int age;
};
int main() {
    struct personne p1;
    strcpy(p1.nom, "bouchta");
    strcpy(p1.prenom, "mohamed");
    p1.age = 21;
    printf("%s %s %d",p1.nom,p1.prenom,p1.age);
    return 0;
}