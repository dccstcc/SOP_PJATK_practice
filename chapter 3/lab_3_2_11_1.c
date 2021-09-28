#include <stdio.h>

int main(void) {

    unsigned long int a;
    unsigned long int b;
    unsigned long int c;
    unsigned long int d;
    unsigned long int noHumanreadableIp;

    scanf("%Lu", &a);
    scanf("%Lu", &b);
    scanf("%Lu", &c);
    scanf("%Lu", &d);

    if(a<0 || a>255) puts("Incorrect IP address");
    if(b<0 || b>255) puts("Incorrect IP address");
    if(c<0 || c>255) puts("Incorrect IP address");
    if(d<0 || d>255) puts("Incorrect IP address");

    noHumanreadableIp = 256*256*256*a + 256*256*b + 256*c + 1*d;

    printf("Human readable IP address is: %d.%d.%d.%d\n", a,b,c,d);
    printf("IP address as a 32-bit number: %Lu", noHumanreadableIp);

return 0;
}
