// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
 int r,i,j=0,k;
 char nomcontact[20];

struct Contact{
    char Nom[20];
    char NumeroTel[20];
    char Adresse[20];
};

int RechercheContact(struct Contact cont[],char nomcontact[]){
    for(i=0;i<r;i++){
        if(strcmp(cont[i].Nom,nomcontact)==0){

            printf("Contact disponible");
            printf("\n %s | %s | %s \n",cont[i].Nom,cont[i].NumeroTel,cont[i].Adresse);
            j=1;
            return 1;
        }
    }
    if(!j){

        printf("Contact pas disponible");
        return 0;

    }
}
void Ajoutepardefault(struct Contact cont[]){
    strcpy(cont[0].Nom,"Mohammed");
    strcpy(cont[0].NumeroTel,"0612345678");
    strcpy(cont[0].Adresse,"Mohammed@gmail.com");

    strcpy(cont[1].Nom, "Mohammedbcht");
    strcpy(cont[1].NumeroTel, "0612345678");
    strcpy(cont[1].Adresse, "Mohammedbcht@gmail.com");

    strcpy(cont[2].Nom, "Amina");
    strcpy(cont[2].NumeroTel, "0612345679");
    strcpy(cont[2].Adresse, "Amina@gmail.com");

    strcpy(cont[3].Nom, "Oussama");
    strcpy(cont[3].NumeroTel, "0612345680");
    strcpy(cont[3].Adresse, "Oussama@gmail.com");
    r=4;
}
void AjouterContact(struct Contact cont[]){
   printf("entrer le Nom de contact : ");
   scanf("%s",&cont[r].Nom);



    printf("entrer le Numero de contact : ");
   scanf("%s",&cont[r].NumeroTel);
   printf("entrer l'adresse contact : ");
   scanf("%s",&cont[r].Adresse);
   r++;

   }
void AfficherContact(struct Contact cont[]){
    printf("la liste des contactes est : \n");
    for(i=0;i<r;i++){
        printf("contact %d :",i+1);
        printf("\n %s | %s | %s \n",cont[i].Nom,cont[i].NumeroTel,cont[i].Adresse);
    }
}
void SupprimerContact(struct Contact cont[]){

    printf("Entrer le Contact que vous voulez supprimer : ");
    scanf("%s",nomcontact);
    if(RechercheContact(cont,nomcontact)!=0){
        for(i=0;i<r;i++){
            if(strcmp(cont[i].Nom,nomcontact)==0){
                for(k=0;k<r-1;k++){
               strcpy(cont[i].Nom,cont[i+1].Nom);
               strcpy(cont[i].NumeroTel,cont[i+1].NumeroTel);
               strcpy(cont[i].Adresse,cont[i+1].Adresse);
                }
                r--;
                printf("le contact  a été bien supprimé\n");

            }

        }
    }

}
void ModifierContact(struct Contact cont[]){
printf("Entrer le Contact que vous voulez rechercher : ");
scanf("%s",nomcontact);
if(RechercheContact(cont,nomcontact)!=0){
   for(i = 0; i < r; i++) {
    if(strcmp(cont[i].Nom, nomcontact) == 0) {
        printf("Entrer le nouveau nom : ");
        scanf("%s", cont[i].Nom);

        printf("Entrer le nouveau numéro : ");
        scanf("%s", cont[i].NumeroTel);

        printf("Entrer la nouvelle adresse : ");
        scanf("%s", cont[i].Adresse);
        printf("La nouvelle Contact a été bien modifiée ");
        printf("\n %s | %s | %s \n",cont[i].Nom,cont[i].NumeroTel,cont[i].Adresse);

    }
}
   }
}


int main() {
       char menu[300]="\n 1.Ajouter un contact au stock. \n 2.Afficher tous les contacts disponibles. \n 3.Rechercher un contact par son nom. \n 4.Mettre à jour un contact. \n 5.Supprimer un contact.\n 6.Quitter\n";
       int choix;
        do{
            int choix2;
            printf("%s",menu);
            scanf("%d",&choix);
             struct Contact cont[100];
             Ajoutepardefault(cont);
            switch(choix){
                case 1:{

                AjouterContact(cont);
                break;
                }
                case 2:{
                AfficherContact(cont);
                break;
            }
                case 3:{
                    char recherche[20];
                    printf("entrer le Nom de Contact : ");
                    scanf("%s",&recherche);
                    RechercheContact(cont,recherche);
                    break;
                }
                    case 4:{

                    ModifierContact(cont);
                    break;
                    }
                case 5:{
                    SupprimerContact(cont);
                    break;
                }
            }
        }while(choix!=6);


    return 0;
}
