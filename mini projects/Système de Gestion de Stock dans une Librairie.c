#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char titre[30][30];
    char auteur[30][30];
    double prix[20];
    int quantite[20], nvquantite[20];
    char recherche[30];
    int choix, r = 0, i = 0, nblivre;
    char menu[300] = "Système de Gestion de Stock - Librairie\n1. Ajouter un livre\n2. Afficher tous les livres\n3. Rechercher un livre\n4. Mettre à jour la quantité d'un livre\n5. Supprimer un livre\n6. Afficher le nombre total de livres en stock\n7. Quitter\n";

    do {
        printf("\n %s ", menu);
        scanf("%d", &choix);
        switch (choix) {
            system ("cls");
            case 1:
                printf("Entrer le titre : ");
                scanf("%s", titre[r]);
                printf("Entrer l'auteur : ");
                scanf("%s", auteur[r]);
                printf("Entrer le prix : ");
                scanf("%lf", &prix[r]);
                printf("Entrer la quantite : ");
                scanf("%d", &quantite[r]);
                r++;
                break;

            case 2:
                printf("\n La liste des livres est : \n");
                for (i = 0; i < r; i++) {
                    printf("livre %d :\n", i + 1);
                    printf("le titre est : %s / ", titre[i]);
                    printf("l'auteur est : %s / ", auteur[i]);
                    printf("le prix est %.0lf / ", prix[i]);
                    printf("la quantite est : %d \n", quantite[i]);
                }
                break;

            case 3: {
                int found = 0;
                printf("Entrer le livre que vous voulez rechercher : ");
                scanf("%s", recherche);
                for (i = 0; i < r; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        printf("Le livre est disponible.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Le livre n'était pas disponible.\n");
                }
                break;
            }

            case 4: {
                int found = 0;
                printf("Entrer le livre que vous voulez modifier : ");
                scanf("%s", recherche);
                for (i = 0; i < r; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        printf("Quelle est la nouvelle quantite de votre livre :\n");
                        scanf("%d", &nvquantite[i]);
                        quantite[i] = nvquantite[i];
                        printf("La nouvelle quantite a été bien modifiée \n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Le livre n'était pas disponible.\n");
                }
                break;
            }

            case 5: {
                int found = 0;
                printf("Entrer le livre que vous voulez supprimer : ");
                scanf("%s", recherche);
                for (i = 0; i < r; i++) {
                    if (strcmp(titre[i], recherche) == 0) {
                        for (int k = i; k < r - 1; k++) {
                            strcpy(titre[k], titre[k + 1]);
                            strcpy(auteur[k], auteur[k + 1]);
                            prix[k] = prix[k + 1];
                            quantite[k] = quantite[k + 1];
                        }
                        r--;
                        printf("Le livre a été bien supprimé.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Le livre n'était pas disponible.\n");
                }
                break;
            }

            case 6:
                printf("Le nombre total de livres en stock est : %d\n", r);
                break;

            case 7:
                printf("Au revoir!\n");
                break;

            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 7);

    return 0;
}
