#include <stdio.h>

int main() {
    int C;
    printf("Entrez la temperature C : ");
    scanf("%d",&C);
    if (C<0){
        printf("l'etat de la temperature de l'eau est Solide ");
    }
    else if(0<=C<100){
        printf("l'etat de la temperature de l'eau est Liquide ");
    }
    else {
        printf("l'etat de la temperature de l'eau est Gaz ");
    }
    return 0;