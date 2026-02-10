#include <stdio.h>

int main() {
    int a,b,c,d;

    printf("Armstrong numbers within 1000 are:\n");
    for (a = 1; a < 1000; a++) {
        d = 0;
        b = a;
        while (b!= 0) {
            c = b% 10; 
            d+= c * c* c; 
            b /= 10; 
        }
        if (d== a) {
            printf("%d\n", a);
        }
    }

    return 0;
}

