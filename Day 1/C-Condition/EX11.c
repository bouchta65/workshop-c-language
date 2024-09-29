#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    int randomNumber = rand() % 7;


    if (randomNumber == 0) {
        printf("Le jour choisi aléatoirement est : Lundi\n");
    } else if (randomNumber == 1) {
        printf("Le jour choisi aléatoirement est : Mardi\n");
    } else if (randomNumber == 2) {
        printf("Le jour choisi aléatoirement est : Mercredi\n");
    } else if (randomNumber == 3) {
        printf("Le jour choisi aléatoirement est : Jeudi\n");
    } else if (randomNumber == 4) {
        printf("Le jour choisi aléatoirement est : Vendredi\n");
    } else if (randomNumber == 5) {
        printf("Le jour choisi aléatoirement est : Samedi\n");
    } else {
        printf("Le jour choisi aléatoirement est : Dimanche\n");
    }

    return 0;
}
