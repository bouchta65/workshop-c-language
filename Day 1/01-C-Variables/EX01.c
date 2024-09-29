#include <stdio.h>

int main()
{
    int age;
    char nom[250],prenom[250],email[250];
    char sexe;
    printf("entrer votre NOM : ");
    scanf("%s",nom);
    printf("entrer votre PRENOM : ");
    scanf("%s",prenom);
    printf("entrer votre AGE : ");
    scanf("%d", &age);
    printf("entrer votre SEXE (H ou F) : ");
    scanf("%s",&sexe);
    printf("entrer votre EMAIL : ");
    scanf("%s",email);
    printf("votre nom : %s\nvotre prenom : %s\nvotre age : %d\nvotre sexe : %c\nvotre email :%s\n",nom,prenom,age,sexe,email);

    return 0;
}