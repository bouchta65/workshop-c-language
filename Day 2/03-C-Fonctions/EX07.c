// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void Inversion(char chaine[]){
      int i=0;
      int end = strlen(chaine)-1;
      char f;
      while(i < end){
          f = chaine[i];
          chaine[i]=chaine[end];
          chaine[end]=f;
          end--;
          i++;
      }
      printf("%s",chaine);
}

int main() {
    char chaine[10];
    printf("entrer une chaine : ");
    scanf("%s",chaine);
    Inversion(chaine);
    

    return 0;
}