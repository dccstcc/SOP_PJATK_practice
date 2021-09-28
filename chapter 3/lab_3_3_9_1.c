#include <stdio.h>

int main(void) {

    float a;

    scanf("%f", &a);

    a = (int) a;

    if(a==1) puts("Very bad");
    if(a==2) puts("bad");
    if(a==3) puts("neutral");
    if(a==4) puts("Good");
    if(a==5) puts("Very good");


    return 0;
}
