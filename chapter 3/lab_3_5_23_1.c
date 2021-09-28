#include <stdio.h>

int main(void) {

    unsigned int number = 0;
    int L = 0;
    int H = 0;

    scanf("%d", &number);

    L=number&15;
    H=(number&240)>>4;


    printf("H nibble: %d\nL nibble: %d", H, L);

    return 0;
}
