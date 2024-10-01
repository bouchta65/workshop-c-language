// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int Parite(int nb){
if(nb%2==0){
    return 1;
}else{
    return 0;
}
      
}

int main() {
    int nb;
    printf("entrer un nombre : ");
    scanf("%d",&nb);
    if(Parite(nb)==1){
        printf("le nombre est pair ");
    }else{
        printf("le nombre est impair ");
    }
    

    return 0;
}