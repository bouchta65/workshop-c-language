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
    {"RES1001", "Fatima", "Zahra", "0623456789", "18", "reporte", {12, 11, 2024}},
    {"RES1002", "Ali", "Hassan", "0634567890", "28", "annule", {15, 10, 2024}},
    {"RES1003", "Oussama", "Hassan", "0645678901", "22", "traite", {18, 11, 2024}},
    {"RES1004", "Sara", "Ahmed", "0656789012", "12", "valide", {20, 10, 2024}},
    {"RES1005", "Hassan", "Bouchta", "0667890123", "27", "reporte", {22, 11, 2024}},
    {"RES1006", "Laila", "Jamal", "0678901234", "40", "annule", {25, 10, 2024}},
    {"RES1007", "Khalid", "Benali", "0689012345", "66", "traite", {28, 11, 2024}},
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
    printf("Entrer le nom :");
    scanf("%s",Nom);
    if(!NomEtPrenom(Nom)){
       printf("votre nom contient des chiffres.\n");
    }else{
    strcpy(Res[nb].Nom, Nom);
    }
    }while(!NomEtPrenom(Nom));


    do{
    printf("Entrer le prenom : ");
    scanf("%s",Prenom);

    if(!NomEtPrenom(Prenom)){
    printf("votre prenom contient des chiffres.\n");
    }else{
    strcpy(Res[nb].Prenom, Prenom);
    }

    }while(!NomEtPrenom(Prenom));



    do{
    printf("Entrer le numero de Telephone :");
    scanf("%s",Telephone);
    if(!Telletter(Telephone)){
        printf("le Telephone contient des lettres.\n");
    }else if(!TelNembre(Telephone)){
        printf("le numero doit avoir exactement 10 chiffres \n");
    }else if(!TelMaroc(Telephone)){
        printf("le numero doit commencer par 05, 06, 07, ou 08.\n");
    }else{
        strcpy(Res[nb].Telephone, Telephone);
    }

    }while(!Telletter(Telephone) || !TelNembre(Telephone) || !TelMaroc(Telephone));

    do{
    printf("Entrer l'age :");
    scanf("%s",Age);
    if(!AgeNombre(Age)){
        printf("Entrez un age valide (entre 0 et 130).\n");
    }else if(!AgeLetter(Age)){
        printf("l'age doit etre un nombre.\n");
    }else{
        strcpy(Res[nb].Age, Age);
    }
    }while(!AgeNombre(Age) || !AgeLetter(Age));


    do{
        printf("Choisissez le statut : \n");
        printf("1.valide \n");
        printf("2.reporte \n");
        printf("3.annule \n");
        printf("4.traite \n");
        scanf("%d",&ChoixStatut);
        if (ChoixStatut == 1) {
        strcpy(Res[nb].Statut, "valide");
        break;
    } else if (ChoixStatut == 2) {
        strcpy(Res[nb].Statut, "reporte");
        break;
    } else if (ChoixStatut == 3) {
        strcpy(Res[nb].Statut, "annule");
        break;
    } else if (ChoixStatut == 4) {
        strcpy(Res[nb].Statut, "traite");
        break;
    }else{printf("choix invalide Reessayez.\n");}
    }while(1);


        struct Datee d;
        do{
        printf("Entrer la date de reservation  forma accepter : (jour moi annee): ");
        if(scanf("%d %d %d", &d.jour, &d.mois, &d.annee) != 3){
            printf("Erreur: entrer une date valide\n");
            while (getchar() != '\n');
            continue;
        }
        if(!DateValide(d)){
           printf("Entrer une date valide \n");
        }else{
            Res[nb].Date = d;
        }
        }while(!DateValide(d));


        sprintf(Res[nb].ID, "RES%d", R);
        R++;
        nb++;
        printf("La reservation a ete ajoutée avec succes \n \n");

}
void AfficherReservations() {

    if (nb == 0) {
        printf("Aucune reservation à afficher.\n");
        return;
    }

    printf("\n=========================\n");
    printf("| Reservations Actuelles |\n");
    printf("=========================\n");
    printf("| Ref     | Nom         | Prenom    | Telephone    | Age     | Statut   | Date         |\n");
    printf("==========================================================================\n");

    for (int i = 0; i < nb; i++) {
            char date[20];
        sprintf(date, "%02d/%02d/%04d", Res[i].Date.jour, Res[i].Date.mois, Res[i].Date.annee);
        printf("| %-5s | %-10s | %-10s | %-12s | %-3d | %-8s | %-12s |\n",
               Res[i].ID,
               Res[i].Nom,
               Res[i].Prenom,
               Res[i].Telephone,
               Res[i].Age,
               Res[i].Statut,
               date);
    }
    printf("==========================================================================\n");
}
void TriReservations(){
    int choix2,choixStatut;
    char statut[20];
    do{
    printf("1:Tri des reservations par Nom. \n");
    printf("2:Tri des reservations par statut. \n");
    printf("3:Menu \n");
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


            if(strcasecmp(Res[i].Statut,Res[j].Statut)>0){
                struct Reservation tmp;
                tmp = Res[i];
                Res[i] = Res[j];
                Res[j] = tmp;
            }


            if (strcmp(Res[i].Statut, statut) != 0 && strcmp(Res[j].Statut, statut) == 0) {
                struct Reservation tmp;
                tmp = Res[i];
                Res[i] = Res[j];
                Res[j] = tmp;
            }} }

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
            printf("\n %s | %s | %s | %s | %s | %s   \n\n",Res[i].ID, Res[i].Nom, Res[i].Prenom, Res[i].Telephone, Res[i].Age, date);
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
            printf("\n %s | %s | %s | %s | %s | %s  \n \n",Res[i].ID, Res[i].Nom, Res[i].Prenom, Res[i].Telephone, Res[i].Age, date);
            return 1;
        }
    }
    return 0;
}

int ModifierReservation(){
    char ID[20],Nom[20],Prenom[20],Age[20],Telephone[20];
    int ChoixStatut;

    printf("Entrer le ID de Reservation :\n");
    scanf("%s",ID);
    for(int i=0;i<nb;i++){
        if(strcmp(Res[i].ID,ID)==0){
            do{
    printf("Entrer le nom :");
    scanf("%s",Nom);
    if(!NomEtPrenom(Nom)){
       printf("votre nom contient des chiffres.\n");
    }else{
    strcpy(Res[i].Nom, Nom);
    }
    }while(!NomEtPrenom(Nom));


    do{
    printf("Entrer le prenom : ");
    scanf("%s",Prenom);

    if(!NomEtPrenom(Prenom)){
    printf("votre prenom contient des chiffres.\n");
    }else{
    strcpy(Res[i].Prenom, Prenom);
    }

    }while(!NomEtPrenom(Prenom));



    do{
    printf("entrer Entrez le numero de Telephone :");
    scanf("%s",Telephone);
    if(!Telletter(Telephone)){
        printf("le Telephone contient des lettres.\n");
    }else if(!TelNembre(Telephone)){
        printf("le numero doit avoir exactement 10 chiffres.\n");
    }else if(!TelMaroc(Telephone)){
        printf("le numero doit commencer par 05, 06, 07, ou 08.\n");
    }else{
        strcpy(Res[i].Telephone, Telephone);
    }

    }while(!Telletter(Telephone) || !TelNembre(Telephone) || !TelMaroc(Telephone));

    do{
    printf("Entrer l'age :");
    scanf("%s",Age);
    if(!AgeNombre(Age)){
        printf("Entrer un âge valide (entre 0 et 130).\n");
    }else if(!AgeLetter(Age)){
        printf("l'age doit etre un nombre.\n");
    }else{
        strcpy(Res[i].Age, Age);
    }
    }while(!AgeNombre(Age) || !AgeLetter(Age));

    do{
        printf("Choisissez le statut : \n");
        printf("1.valide \n");
        printf("2.reporte \n");
        printf("3.annule \n");
        printf("4.traite \n");
        scanf("%d",&ChoixStatut);
        if (ChoixStatut == 1) {
        strcpy(Res[i].Statut, "valide");
        break;
    } else if (ChoixStatut == 2) {
        strcpy(Res[i].Statut, "reporte");
        break;
    } else if (ChoixStatut == 3) {
        strcpy(Res[i].Statut, "annule");
        break;
    } else if (ChoixStatut == 4) {
        strcpy(Res[i].Statut, "traite");
        break;
    }else{printf("choix invalide Reessayez.\n");}
    }while(1);


        struct Datee d;
        do{
        printf("Entrer la date de reservation  forma accepter : (jour moi annee): ");
        if(scanf("%d %d %d", &d.jour, &d.mois, &d.annee) != 3){
            printf("Erreur: entrer une date valide\n");
            while (getchar() != '\n');
            continue;
        }
        if(!DateValide(d)){
           printf("Entrer une date valide");
        }else{
            Res[i].Date = d;
        }
        }while(!DateValide(d));
        printf("La reservation a ete modifier avec succes \n \n");
        return 1;
        }
    }
    return 0;
}

int SupprimerReservation(){
    char ID[20];
    int choix;

    printf("entrer le ID de Reservation :\n");
    scanf("%s",ID);
    for(int i=0;i<nb;i++){
        if(strcmp(Res[i].ID,ID)==0){
            printf("1.Valider la supression. \n");
            printf("2.Annuler \n");
            scanf("%d",&choix);
            if(choix==1){
            for(int j=i;j<nb-1;j++){
                Res[j]=Res[j+1];
            }
            nb--;
            printf("la Reservation  a ete bien supprime\n");
            return 1;
        }else{break;}
        break;
        }
    }

    return 0;

}

void StatistiqueReservation(){
    int AgeEntier,Age18=0,Age36=0,Age19=0;
    int statutV=0,statutA=0,statutR=0,statutT=0;
    double Moyenne=0;
    for(int i=0;i<nb;i++){
        AgeEntier = atoi(Res[i].Age);
        Moyenne+=AgeEntier;
    }
    Moyenne = Moyenne/nb;
    for(int i=0;i<nb;i++){
        AgeEntier = atoi(Res[i].Age);
        if(AgeEntier<=18){
            Age18++;
        }else if(AgeEntier>18 && AgeEntier<=35){
            Age19++;
        }else{
            Age36++;
        }
            }
            for(int i=0;i<nb;i++){
                if(strcmp(Res[i].Statut,"valide")==0){
                    statutV++;
                }else if(strcmp(Res[i].Statut,"reporte")==0){
                    statutR++;
                }else if(strcmp(Res[i].Statut,"annule")==0){
                    statutA++;
                }else {
                    statutT++;
                }
            }

    printf("la moyenne d'age des patients ayant reservé est :%.2lf \n\n",Moyenne);
    printf("le nombre de patients par tranche d'age : \n 0-->18ans : %d \n 19-->35ans : %d \n +36ans : %d \n\n",Age18,Age19,Age36);
    printf("\n Statuts des reservations : \n - Valide : %d \n - Reportee : %d \n - Annulee : %d \n - Traitees : %d\n\n",statutV,statutR,statutA,statutT);
}
int main(){
    int choix;
    char menu[300]="1.Ajouter une reservations.\n"
                "2.Afficher les details dune reservation \n"
                "3.Tri des reservations \n4.Rechercher des reservation. \n"
                "5.Modifier une reservation. \n"
                "6.Supprimer une reservation. \n"
                "7.Statistiques. \n8.Quitter. \n";
        printf("Gestion des reservations de rendez-vous dentaires \n");
    do{
        printf("%s",menu);
        if (scanf("%d", &choix) != 1) {
        while (getchar() != '\n');
        printf("Erreur: Veuillez entrer un nombre valide.\n \n \n");
        continue;
    }
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
        printf("3. Menu\n");
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
        if(!ModifierReservation()){
            printf("Reservation pas Exist \n");
        }
        break;
    }
    case 6:{
        int choix3;

        if(!SupprimerReservation()){
        printf("Reservation pas disponible \n\n");
    }

    break;
        }

    case 7:{
    StatistiqueReservation();
    break;
    }
    default : break;
    }

    }while(choix!=8);


return 0;
}

