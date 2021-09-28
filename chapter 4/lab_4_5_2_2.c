#include <stdio.h>

int main(void) {

    //dla wartoœæi [3] wstawia 0
    char a[10];
    char b[10];
    char c[10];
    char d[10];

    char output[15];

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    scanf("%s", d);

    sprintf(output, "%s.%s.%s.%s", a,b,c,d);

    printf("%s", output);




    return 0;
}
