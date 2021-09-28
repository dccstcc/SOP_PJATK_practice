#include <stdio.h>

int main(void) {

    int month;
    int days = 0;

    scanf("%d", &month);

    switch(month) {
        case 1: printf("There are %d days before the given month.", days); break;
        case 2: days+=31; printf("There are %d days before the given month.", days); break;
        case 3: days+=31+28; printf("There are %d days before the given month.", days); break;
        case 4: days+=31+28+31; printf("There are %d days before the given month.", days); break;
        case 5: days+=31+28+31+30; printf("There are %d days before the given month.", days); break;
        case 6: days+=31+28+31+30+31; printf("There are %d days before the given month.", days); break;
        case 7: days+=31+28+31+30+31+30; printf("There are %d days before the given month.", days); break;
        case 8: days+=31+28+31+30+31+30+31; printf("There are %d days before the given month.", days); break;
        case 9: days+=31+28+31+30+31+30+31+31; printf("There are %d days before the given month.", days); break;
        case 10: days+=31+28+31+30+31+30+31+31+30; printf("There are %d days before the given month.", days); break;
        case 11: days+=31+28+31+30+31+30+31+31+30+31; printf("There are %d days before the given month.", days); break;
        case 12: days+=31+28+31+30+31+30+31+31+30+31+30; printf("There are %d days before the given month.", days); break;
        default: puts("Error: no such month in my calendar");
    }

    return 0;
}
