#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int nb=10;
char IDR[]="RES";
int R=1010;

struct Datee {
int jour;
int mois;
int annee;
};

struct Reservation{
char ID[20];
char Nom[20];
char Prenom[20];
char Telephone[20];
char Age[20];
char Statut[10];
struct Datee Date;
};

struct Reservation Res[10] = {
    {"RES1000", "Mohammed", "Bouchta", "0612345678", "25", "valide", {5, 10, 2024}},
    {"RES1001", "Fatima", "Zahra", "0623456789", "30", "reporte", {12, 11, 2024}},
    {"RES1002", "Ali", "Hassan", "0634567890", "28", "annule", {15, 10, 2024}},
    {"RES1003", "Oussama", "Hassan", "0645678901", "22", "traite", {18, 11, 2024}},
    {"RES1004", "Sara", "Ahmed", "0656789012", "35", "valide", {20, 10, 2024}},
    {"RES1005", "Hassan", "Bouchta", "0667890123", "27", "reporte", {22, 11, 2024}},
    {"RES1006", "Laila", "Jamal", "0678901234", "40", "annule", {25, 10, 2024}},
    {"RES1007", "Khalid", "Benali", "0689012345", "33", "traite", {28, 11, 2024}},
    {"RES1008", "Nadia", "Elhadi", "0690123456", "29", "valide", {30, 10, 2024}},
    {"RES1009", "Youssef", "Boulahya", "0701234567", "23", "reporte", {1, 11, 2024}}
};

int DateValide(struct Datee d){
if(d.jour<1 || d.jour>31){return 0;}
if(d.mois<1 || d.mois>12){return 0;}
if(d.annee<2024 || d.annee>2025){return 0;}
return 1;
}


int NomEtPrenom(char Entrer[]) {
    for (int i = 0; Entrer[i] != '\0'; i++) {
        if (!isalpha(Entrer[i])){return 0;}}
    return 1;}

int Telletter(char Tel[]){
for(int i = 0;Tel[i]!= '\0';i++){
    if(!isdigit(Tel[i])){return 0;}}
    return 1;}
int TelNembre(char Tel[]){
int i;
for(i=0;i<Tel[i]!='\0';i++){
    i++;
}
if(i>10 || i<10){
    return 0;
}
return 1;
}
int TelMaroc(char Tel[]){
int i;
    if(Tel[0]=='0' && (Tel[1]=='5' || Tel[1]=='6' || Tel[1]=='7' || Tel[1]=='8')){
        return 1;}
        return 0;

}

int AgeLetter(char Age[]){
for(int i=0;i<Age[i]!='\0';i++){
    if(!isdigit(Age[i])){
        return 0;}}
return 1;}
int AgeNombre(char Age[]){
int AgeEntier;
    AgeEntier = atoi(Age);
    if(AgeEntier<0 || AgeEntier>130){
       return 0;
    }
    return 1;}


void AjouteReservation(){
    char Nom[20],Prenom[20],Telephone[20],Age[20],Date[20];
    int ChoixStatut;

    do{
    printf("entrer le nom :");
    scanf("%s",Nom);
    if(!NomEtPrenom(Nom)){
       printf("Votre nom contient des nombre \n");
    }else{
    strcpy(Res[nb].Nom, Nom);
    }
    }while(!NomEtPrenom(Nom));


    do{
    printf("entrer le prenom : ");
    scanf("%s",Prenom);

    if(!NomEtPrenom(Prenom)){
    printf("Votre nom contient des nombre \n");
    }else{
    strcpy(Res[nb].Prenom, Prenom);
    }

    }while(!NomEtPrenom(Prenom));



    do{
    printf("entrer le Telephone :");
    scanf("%s",Telephone);
    if(!Telletter(Telephone)){
        printf("Votre Nombre contient des Lettres \n");
    }else if(!TelNembre(Telephone)){
        printf("Votre Nombre depace 10 nombres \n");
    }else if(!TelMaroc(Telephone)){
        printf("Entrer un nombre exact \n");
    }else{
        strcpy(Res[nb].Telephone, Telephone);
    }

    }while(!Telletter(Telephone) || !TelNembre(Telephone) || !TelMaroc(Telephone));

    do{
    printf("entrer l'age :");
    scanf("%s",Age);
    if(!AgeNombre(Age)){
        printf("Entrer un age entr 0 et 130 \n");
    }else if(!AgeLetter(Age)){
        printf("entrer un nombre \n");
    }else{
        strcpy(Res[nb].Age, Age);
    }
    }while(!AgeNombre(Age) || !AgeLetter(Age));


    printf("Choisie le statut : \n");
        printf("1.valide \n");
        printf("2.reporte \n");
        printf("3.annule \n");
        printf("4.traite \n");
        scanf("%d",&ChoixStatut);
        if (ChoixStatut == 1) {
        strcpy(Res[nb].Statut, "valide");
    } else if (ChoixStatut == 2) {
        strcpy(Res[nb].Statut, "reporte");
    } else if (ChoixStatut == 3) {
        strcpy(Res[nb].Statut, "annule");
    } else if (ChoixStatut == 4) {
        strcpy(Res[nb].Statut, "traite");
    }


        struct Datee d;
        do{
        printf("Entrer la date de reservation  forma accepter : (jour moi annee): ");
        scanf("%d %d %d", &d.jour,&d.mois,&d.annee);
        if(!DateValide(d)){
           printf("entrer une date valide");
        }else{
            Res[nb].Date = d;
        }
        }while(!DateValide(d));


        sprintf(Res[nb].ID, "RES%d", R);
        R++;
        nb++;

}
void AfficherReservations() {
    printf("------------------------------------------------------------\n");
    printf("ID        Nom     Prenom     Telephone  Age  Statut   Date\n");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < nb; i++) {
        char date[20];
        sprintf(date, "%02d/%02d/%04d", Res[i].Date.jour, Res[i].Date.mois, Res[i].Date.annee);

        printf("%s  %s  %s  %s  %s  %s  %s\n",
               Res[i].ID,
               Res[i].Nom,
               Res[i].Prenom,
               Res[i].Telephone,
               Res[i].Age,
               Res[i].Statut,
               date);
    printf("------------------------------------------------------------\n");
    }

}
void TriReservations(){
    int choix2,choixStatut;
    char statut[20];
    do{
    printf("1:Tri des reservations par Nom. \n");
    printf("2:Tri des reservations par statut. \n");
    printf("3:return aux Menu \n");
    scanf("%d",&choix2);
    if(choix2==1){
       for(int i=0;i<nb;i++){
        for(int j=i+1;j<nb;j++){
            if(strcasecmp(Res[i].Nom,Res[j].Nom)>0){
            struct Reservation tmp;
            tmp = Res[i];
            Res[i]=Res[j];
            Res[j] = tmp;
            }}}
    AfficherReservations();
    }
    else if(choix2 == 2) {
    printf("Choisissez le statut a trier:\n");
    printf("1.valide\n");
    printf("2.reporte\n");
    printf("3.annule\n");
    printf("4.traite\n");
    printf("Votre choix: ");
    scanf("%d", &choixStatut);
    switch (choixStatut) {
        case 1:
            strcpy(statut, "valide");
            break;
        case 2:
            strcpy(statut, "reporte");
            break;
        case 3:
            strcpy(statut, "annule");
            break;
        case 4:
            strcpy(statut, "traite");
            break;
        default:
            printf("Choix invalide. Aucune action effectuee.\n");
            return;
    }

    for (int i = 0; i < nb - 1; i++) {
        for (int j = i + 1; j < nb; j++) {
            if (strcmp(Res[i].Statut, statut) != 0 && strcmp(Res[j].Statut, statut) == 0) {
                struct Reservation tmp;
                tmp = Res[i];
                Res[i] = Res[j];
                Res[j] = tmp;
            }}}
            AfficherReservations();
    }else if(choix2==3){break;
    }else{printf("entrer soit 1 ou 2 ou 3 \n");}
    }while(1);
}

int RechercherReservationID(char ID[]) {

    char date[20];
    for(int i = 0; i < nb; i++) {
        if(strcmp(Res[i].ID, ID) == 0) {
            printf("Reservation Disponible: \n");
            sprintf(date, "%02d/%02d/%04d", Res[i].Date.jour, Res[i].Date.mois, Res[i].Date.annee);
            printf("\n %s | %s | %s | %s | %s | %s   \n",Res[i].ID, Res[i].Nom, Res[i].Prenom, Res[i].Telephone, Res[i].Age, date);
            return 1;
        }
    }
    return 0;
}

int RechercherReservationNom(char Nom[]){
    char date[20];
    for(int i=0;i<nb;i++){
        if(strcmp(Res[i].Nom,Nom)==0){
            printf("Reservation Disponible: \n");
            sprintf(date, "%02d/%02d/%04d", Res[i].Date.jour, Res[i].Date.mois, Res[i].Date.annee);
            printf("\n %s | %s | %s | %s | %s | %s   \n",Res[i].ID, Res[i].Nom, Res[i].Prenom, Res[i].Telephone, Res[i].Age, date);
            return 1;
        }
    }
    return 0;
}

void ModifierReservation(){
    printf("entrer le ID de Reservation :\n");
    scanf
}
int main(){
    int choix;
    char menu[300]="1.Ajouter une reservations.\n"
                "2.Afficher les details dune reservation \n"
                "3.Tri des reservations \n4.Rechercher des reservation. \n"
                "5.Modifier une reservation. \n"
                "6.Supprimer une reservation. \n"
                "7.Statistiques. \n 8.Quitter. \n";

    do{
        printf("%s",menu);
    scanf("%d",&choix);
    switch(choix){
    case 1:{
        AjouteReservation();
        break;
    }
    case 2:{
    AfficherReservations();
    break;
    }
    case 3:{
    TriReservations();
    break;
    }
    case 4: {
    int choix3;
    char ID[20],Nom[20];
    do {
        printf("1. recherche par Nom. \n");
        printf("2. recherche par ID. \n");
        printf("3. Quitter\n");
        scanf("%d", &choix3);
        if (choix3 == 1) {
            printf("Entrer le Nom de votre Reservation :\n");
            scanf("%s",Nom);
            if (!RechercherReservationNom(Nom)) {
                printf("Reservation pas disponible.\n");
            }
            break;
        } else if (choix3 == 2) {
            printf("Entrer le ID de votre Reservation :\n");
            scanf("%s",ID);
            if (!RechercherReservationID(ID)) {
                printf("Reservation pas disponible.\n");
            }
            break;
        } else if (choix3 == 3) {
            break;
        } else {
            printf("Entrer soit 1 ou 2 ou pour quitter entrer 3\n");
        }
    } while (1);
    break;
}
    case 5:{
    ModifierReservation();
    }

    break;
    }
    }while(choix!=7);


return 0;
}

