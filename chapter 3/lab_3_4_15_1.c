#include <stdio.h>

int main(void) {

    int lines;
    int counts=0;
    int limit=0;


    scanf("%d", &lines);

    if(lines<1) lines=1;
    else if(lines>20) lines=20;



    do {

        limit = 0;
        while(limit++<counts) {
            printf("*#");
        }

    printf("\n");


    } while(++counts<=lines);

    return 0;
}
