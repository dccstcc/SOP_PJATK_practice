#include <stdio.h>

int main(void) {
    int xValue = 3;
    int yValue = 2;
    int result =((xValue + yValue) * (2 + yValue));
    int smallResult = (xValue + yValue * (4 - xValue));



    printf("result: %d\n", result); //20
        printf("small result: %d\n", smallResult); //5
    return 0;
}
