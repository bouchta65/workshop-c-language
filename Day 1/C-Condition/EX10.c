#include <stdio.h>
#include <string.h> // Include for strcpy

int main() {
    int a, j, m;
    char mm[20]; 

    printf("Entrer votre date :\n");
    printf("Jour :\n");
    scanf("%d", &j);
    printf("Mois :\n");
    scanf("%d", &m);
    printf("Année :\n");
    scanf("%d", &a);

 
    switch (m) {
        case 1:
            strcpy(mm, "Janvier"); 
            break;
        case 2:
            strcpy(mm, "Février");
            break;
        case 3:
            strcpy(mm, "Mars");
            break;
        case 4:
            strcpy(mm, "Avril");
            break;
        case 5:
            strcpy(mm, "Mai");
            break;
        case 6:
            strcpy(mm, "Juin");
            break;
        case 7:
            strcpy(mm, "Juillet");
            break;
        case 8:
            strcpy(mm, "Août");
            break;
        case 9:
            strcpy(mm, "Septembre");
            break;
        case 10:
            strcpy(mm, "Octobre");
            break;
        case 11:
            strcpy(mm, "Novembre");
            break;
        case 12:
            strcpy(mm, "Décembre");
            break;
        default:
            printf("Mois invalide.\n");
            return 1;  
    }

    printf("La date est : %d/%s/%d\n", j, mm, a);

    return 0;
}
