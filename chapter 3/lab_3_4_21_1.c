#include <stdio.h>

int main(void) {

    int lines;
    int i;
    int j;

    scanf("%d", &lines);

    if(lines > 20) lines=20;

    for(i=0; i<lines; i++ ) {
       if(lines < 1) break;
       printf("*");
       for(j=0; j<i; j++) {
             printf(" ");
       }
       printf("*\n");
    }

    for(i=lines; i>=0; i-- ) {
       if(lines < 1) break;
       printf("*");
       for(j=0; j<i; j++) {
             printf(" ");
       }
       printf("*\n");
    }


    return 0;
}
