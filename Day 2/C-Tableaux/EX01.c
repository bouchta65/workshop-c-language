#include <stdio.h>

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int i;
    int size = sizeof(tab) / sizeof(tab[0]);  
    for (i = 0; i < size; i++) {
        printf("%d\n", tab[i]);
    }
    
    return 0;
}
