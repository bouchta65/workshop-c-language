#include <stdio.h>
int main() {
   int num,k;
   int binaryNum[32];
   int i=0;
   printf("entrer le nombre : ");
   scanf("%d",&num);
   k=num;
   for ( ;num > 0; ){
      binaryNum[i++] = num % 2;
      num /= 2;
   }
   
   for (int j = i-1; j >= 0; j--){
    printf("%d", binaryNum[j]);
   }
   printf("\n%X",k);
   return 0;
}