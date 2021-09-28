#include <stdio.h>
int main(void) {

    char* days[]= {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    int num;
    scanf("%d", &num);

    if(num<0 || num>7) {
        puts("Error: no such day");
    } else {

        printf("Pointer version: ");
        char* result = days[num];
        printf("%s\n", result);

        printf("Array index version: ");
        printf("%s\n", days[num]);


    }



	return 0;
}
