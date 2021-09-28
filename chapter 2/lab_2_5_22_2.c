#include <stdio.h>

int main(void) {

    float a;
    float b;

    scanf("%f", &a);
    scanf("%f", &b);

    printf("Value A: %2.2f\n", a);
    printf("Value B: %2.2f\n", b);
    printf("%7.6f + %7.6f = %7.6f.\n", a,b,a+b);
    printf("%7.6f - %7.6f = %7.6f.\n", a,b,a-b);
    printf("%7.6f * %7.6f = %7.6f.\n", a,b,a*b);



return 0;
}
