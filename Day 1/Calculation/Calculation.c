#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int i,a,b,nbr,nb,nb2;
    int R=0,n1=0,n2,S=0;
    char menu[300] = "  choisie votre operation : \n pour  Addition       1 \n pour  Soustraction   2\n pour  Multiplication 3\n pour  Division       4\n pour  Moyenne        5\n pour  Valeur absolue 6\n pour  Exponentiation 7\n pour  Racine carrée  8 \n pour quitter         9\n";
    
            
            do{
                printf("%s",menu);
                scanf("%d",&nbr);
                
                switch(nbr){
            //Addition 
            case 1:{
               printf("combien de nombre tu peut adittioner\n ");  
               scanf("%d",&nb);
               for(i=1;i<=nb;i++){
                   printf("entrer nombre %d :\n",i);
                scanf("%d",&n1);
                R+=n1;
               }
                printf("la résultat de l'addition est : %d \n \n",R);
                break;
            }
            //Soustraction 
            case 2:{
                printf("combien de nombre tu peut Soustractioner\n ");  
               scanf("%d",&nb);
               printf("entrer nombre %d :\n",1);
                scanf("%d",&n1);
                R=n1;
               for(i=2;i<=nb;i++){
                   printf("entrer nombre %d :\n",i);
                scanf("%d",&n1);
                R=R-n1;
               }
                printf("la résultat de l'addition est : %d \n \n",R);
                break; 
            }
            //Multiplication 
            case 3:{
                R=1;
              printf("combien de nombre tu peut Multiplier\n ");  
               scanf("%d",&nb);
               for(i=1;i<=nb;i++){
                   printf("entrer nombre %d :\n",i);
                scanf("%d",&n1);
                R=R*n1;
               }
                printf("la résultat de la multiplication  est : %d \n \n",R);
                break; 
            }
            //Division 
            case 4:{
                R=1;
              printf("entrer la premiere nombre \n ");  
               scanf("%d",&nb);
               printf("entrer la deuxieme nombre \n ");
               scanf("%d",&nb2);
               if(nb2!=0){
                  R=nb/nb2;
                printf("la résultat de la Division est : %d \n \n",R);
                break;  
               }else {
                   printf("impossible");
                   break;
               }
                
            }
            //Moyenne 
            case 5:{
             printf("combien de nombre tu peut calculer\n ");  
               scanf("%d",&nb);
               for(i=1;i<=nb;i++){
                   printf("entrer nombre %d :\n",i);
                scanf("%d",&n1);
                R+=n1;
                
               }
               S=R/nb;
                printf("la résultat de l'addition est : %d \n \n",S);
                break;     
            }
            //Valeur absolue
            case 6:{
                printf("donner votre nombre : ");
                scanf("%d",&nb);
                R=fabs(nb);
                printf("la Valeur abslout de %d est : %d \n \n",nb,R);
                break; 
            }
            //Exponentiation 
            case 7:{
                printf("donner votre nombre : ");
                scanf("%d",&nb);
                printf("donner votre puissance : ");
                scanf("%d",&nb2);
                R=pow(nb,nb2);
                printf("la Résultat de %d^%d est : %d \n \n",nb,nb2,R);
            break; 
            }
            //Racine carrée
            case 8:{
                printf("donner votre nombre : ");
                scanf("%d",&nb);
                if(nb>0){
                R=sqrt(nb);
                printf("Racine caree de %d est : %d \n \n",nb,R); 
                }else{
                    printf("entrer un nombre positif \n");
                }
              
            break; 
            }
        }
                
            }while(nbr!=9);
         
        


    return 0;
}


