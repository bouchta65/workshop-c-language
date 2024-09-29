#include <stdio.h>

int main() {
    int a;
    int i;
    int f0 = 0, f1 = 1, fnext;

    printf("Enter your number:\n");
    scanf("%d", &a);
    
    if (a == 0) {
        printf("f(0) = %d\n", f0);
    }
    else if (a == 1) {
        printf("f(0) = %d\n", f0);
        printf("f(1) = %d\n", f1);
    }
    else {
        printf("f(0) = %d\n", f0);
        printf("f(1) = %d\n", f1);
        
        for (i = 2; i <= a; i++) {
            fnext = f0 + f1; 
            f0 = f1; 
            f1 = fnext;
            printf("f(%d) = %d\n", i, fnext);
        }
    }

    return 0;
}
