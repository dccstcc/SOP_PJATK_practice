#include <stdio.h>

int main(void) {

    int day;
    int month;
    int year;
    int leap=0;

    scanf("%d", &day);
    scanf("%d", &month);
    scanf("%d", &year);

    if(year % 400 == 0) leap=1;
    else if (year % 100 == 0) leap=0;
    else if(year % 4 == 0) leap=1;

    if(month==2) day+=31;
    if(month==3) day+=31+28+leap;
    if(month==4) day+=31+28+31+leap;
    if(month==5) day+=31+28+31+30+leap;
    if(month==6) day+=31+28+31+30+31+leap;
    if(month==7) day+=31+28+31+30+31+30+leap;
    if(month==8) day+=31+28+31+30+31+30+31+leap;
    if(month==9) day+=31+28+31+30+31+30+31+31+leap;
    if(month==10) day+=31+28+31+30+31+30+31+31+30+leap;
    if(month==11) day+=31+28+31+30+31+30+31+31+30+31+leap;
    if(month==12) day+=31+28+31+30+31+30+31+31+30+31+30+leap;

    printf("the day of year: %d", day);

return 0;
}
