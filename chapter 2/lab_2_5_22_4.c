#include <stdio.h>

int main(void) {

    int day;

    scanf("%d", &day);

    if(day<0 || day>6) printf("There is no such day: %d. Input value must be from 0 to 6.", day);

    if(day==0) puts("The day of week is: Sunday");
    if(day==1) puts("The day of week is: Monday");
    if(day==2) puts("The day of week is: Tuesday");
    if(day==3) puts("The day of week is: Wednesday");
    if(day==4) puts("The day of week is: Thursday");
    if(day==5) puts("The day of week is: Friday");
    if(day==6) puts("The day of week is: Saturday");

return 0;
}
