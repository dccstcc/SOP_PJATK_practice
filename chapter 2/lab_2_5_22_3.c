#include <stdio.h>

int main(void) {

    int day;
    int month;

    scanf("%d", &day);
    scanf("%d", &month);

    if(month==2) day+=31;
    if(month==3) day+=31+29;
    if(month==4) day+=31+29+31;
    if(month==5) day+=31+29+31+30;
    if(month==6) day+=31+29+31+30+31;
    if(month==7) day+=31+29+31+30+31+30;
    if(month==8) day+=31+29+31+30+31+30+31;
    if(month==9) day+=31+29+31+30+31+30+31+31;
    if(month==10) day+=31+29+31+30+31+30+31+31+30;
    if(month==11) day+=31+29+31+30+31+30+31+31+30+31;
    if(month==12) day+=31+29+31+30+31+30+31+31+30+31+30;

    printf("the day of year: %d", day);

return 0;
}
