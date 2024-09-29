#include <stdio.h>

int main() {
    int a;
    int i,j;
    int f0=0,f1=1,fnext;
    printf("donner votre nombre :\n");
    scanf("%d",&a);
  
      for(i=1;i<=a;i++){
           if(a==0){
        printf("f(0) = %d ",f0);
        }else if(a==1){
         printf("f(1) = %d ",f1);  
        } else{
            fnext = f0+f1;
            f0=f1;
            f1=fnext;
        }     
          printf("f(%d)=%d",a,fnext);
      }
      printf("f(%d)=%d",a,fnext);
    return 0;
}
