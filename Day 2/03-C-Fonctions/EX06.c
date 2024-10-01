#include <stdio.h>

int Fibonacci(int x){
    int x0=0,x1=1,fnext,i;
    if(x==0){
        return x0;
    }else if(x==1){
        return x1;
    }else if(x>1){
        for(i=2;i<=x;i++){
            fnext=x0+x1;
            x0=x1;
            x1=fnext;
            
        }
        return fnext;
    }
    
}

int main() {
    int nb,R;
    printf("enter votre nombre : ");
    scanf("%d",&nb);
    R=Fibonacci(nb);
    printf("f(%d) = %d",nb,R);
    return 0;
}
