#include <stdio.h>

int main() {
    char c;

    // Demander à l'utilisateur d'entrer un caractère
    printf("Entrez un caractère : ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90) {
        printf("%c est une lettre majuscule.\n", c);
    } else {
        printf("%c n'est pas une lettre majuscule.\n", c);
    }

    return 0;
}
