#include <stdio.h>

int main(void) {
    int xValue = 5;
    int yValue = 3;
    int result =((xValue % yValue) * (14 % yValue));
    int smallResult = xValue + 10 % 4 % xValue ;



    printf("result: %d\n", result); //4
        printf("small result: %d\n", smallResult); //7
    return 0;
}
