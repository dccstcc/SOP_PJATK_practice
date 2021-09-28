#include <stdio.h>

int main(void) {

    int fibonacci[10], i;

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    for (i=2; i<10; i++) {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }

    for(i=0; i<10; i++) {
        printf("%d\n", fibonacci[i]);
    }

    for(i=0; i<10; i++) {
        if(i%2==0)
        printf("%d\n", fibonacci[i]);
    }

    for(i=0; i<10; i++) {
        if(i%2==1)
        printf("%d\n", fibonacci[i]);
    }

    return 0;
}
