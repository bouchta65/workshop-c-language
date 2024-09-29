#include <stdio.h>

int main() {
   char a;
   printf("entrer votre caractère  :\n ");
   scanf("%c",&a);
   if(a>=65 && a<=90){
       printf("Majuscule");
   }else if(a>=97 && a<=122){
       printf("Minuscule");
   }else{
       printf("pas un alphabet");
   }
   

    return 0;
}
